/*
 * XREFs of ?XRemoveBindingFromLists@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0017564
 * Callers:
 *     ?EthDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00171E4 (-EthDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?nullDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0090BC0 (-nullDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01496A8 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0003410 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x1C00034A0 (NdisAcquireRWLockWrite.c)
 *     ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001A8E8 (-ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
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
  unsigned int v11; // ecx
  unsigned int NumEntries; // edx
  unsigned int v13; // r9d
  unsigned int v14; // eax
  unsigned int v15; // r10d
  _NDIS_FRAME_TYPE_AND_OPEN *v16; // r11
  _NDIS_FRAME_TYPE_AND_OPEN v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rax
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
  v11 = 0;
  --a1->NumOpens;
  NumEntries = a1->FrameTypeRecord.NumEntries;
  if ( NumEntries )
  {
    do
    {
      v13 = v11 + 1;
      v14 = NumEntries;
      while ( a1->FrameTypeRecord.Entry[v11].Open == a2 )
      {
        v15 = v11;
        if ( v13 < NumEntries )
        {
          v16 = &a1->FrameTypeRecord.Entry[v13];
          do
          {
            v17 = *v16++;
            v18 = v15++;
            a1->FrameTypeRecord.Entry[v18] = v17;
          }
          while ( v15 + 1 < NumEntries );
        }
        v19 = v15;
        a1->FrameTypeRecord.Entry[v19].Type = 0;
        a1->FrameTypeRecord.Entry[v19].Open = 0LL;
        v14 = a1->FrameTypeRecord.NumEntries - 1;
        a1->FrameTypeRecord.NumEntries = v14;
        NumEntries = v14;
      }
      ++v11;
      NumEntries = v14;
    }
    while ( v13 < v14 );
  }
  NdisReleaseRWLock(a1->BindListLock, &LockState);
}
