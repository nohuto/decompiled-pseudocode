/*
 * XREFs of ?XRemoveBindingFromLists@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0017198
 * Callers:
 *     ?EthDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0016F50 (-EthDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?nullDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C008AF10 (-nullDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C013CF90 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0006310 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x1C00063A0 (NdisAcquireRWLockWrite.c)
 *     ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019E70 (-ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall XRemoveBindingFromLists(struct _X_FILTER *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  struct _NDIS_RW_LOCK_EX *BindListLock; // rcx
  _NDIS_OPEN_BLOCK *OpenList; // rax
  struct _X_FILTER *p_FilterNextOpen; // rcx
  _NDIS_OPEN_BLOCK **i; // rcx
  struct _NDIS_OPEN_BLOCK *v8; // rax
  _NDIS_OPEN_BLOCK **j; // rcx
  struct _NDIS_OPEN_BLOCK *v10; // rax
  unsigned int v11; // edx
  unsigned int NumEntries; // ecx
  unsigned int v13; // r11d
  unsigned int v14; // r9d
  _NDIS_FRAME_TYPE_AND_OPEN *v15; // r10
  _NDIS_FRAME_TYPE_AND_OPEN v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rax
  struct _NDIS_MINIPORT_BLOCK *Miniport; // rcx
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  *(_WORD *)&LockState.OldIrql = 0;
  BindListLock = a1->BindListLock;
  LockState.Flags = 0;
  NdisAcquireRWLockWrite(BindListLock, &LockState, 0);
  if ( a1->SingleActiveOpen == a2 )
  {
    Miniport = a1->Miniport;
    a1->SingleActiveOpen = 0LL;
    ndisUpdateCheckForLoopbackFlag(Miniport);
  }
  OpenList = a1->OpenList;
  p_FilterNextOpen = a1;
  while ( OpenList )
  {
    if ( OpenList == a2 )
    {
      p_FilterNextOpen->OpenList = a2->FilterNextOpen;
      break;
    }
    p_FilterNextOpen = (struct _X_FILTER *)&OpenList->FilterNextOpen;
    OpenList = OpenList->FilterNextOpen;
  }
  for ( i = &a1->NoFTypeOpenList; ; i = &v8->FilterNextOpen )
  {
    v8 = *i;
    if ( !*i )
      break;
    if ( v8 == a2 )
    {
      *i = a2->FilterNextOpen;
      --a1->NumNoETypeOpens;
      break;
    }
  }
  for ( j = &a1->FTypeOpenList; ; j = &v10->FilterNextOpen )
  {
    v10 = *j;
    if ( !*j )
      break;
    if ( v10 == a2 )
    {
      *j = a2->FilterNextOpen;
      break;
    }
  }
  a2->FilterNextOpen = 0LL;
  --a1->NumOpens;
  v11 = 0;
  NumEntries = a1->FrameTypeRecord.NumEntries;
  if ( NumEntries )
  {
    do
    {
      if ( a1->FrameTypeRecord.Entry[v11].Open == a2 )
      {
        v13 = v11 + 1;
        do
        {
          v14 = v11;
          if ( v13 < NumEntries )
          {
            v15 = &a1->FrameTypeRecord.Entry[v13];
            do
            {
              v16 = *v15++;
              v17 = v14++;
              a1->FrameTypeRecord.Entry[v17] = v16;
            }
            while ( v14 + 1 < NumEntries );
          }
          v18 = v14;
          a1->FrameTypeRecord.Entry[v18].Type = 0;
          a1->FrameTypeRecord.Entry[v18].Open = 0LL;
          NumEntries = a1->FrameTypeRecord.NumEntries - 1;
          a1->FrameTypeRecord.NumEntries = NumEntries;
        }
        while ( a1->FrameTypeRecord.Entry[v11].Open == a2 );
      }
      ++v11;
    }
    while ( v11 < NumEntries );
  }
  NdisReleaseRWLock(a1->BindListLock, &LockState);
}
