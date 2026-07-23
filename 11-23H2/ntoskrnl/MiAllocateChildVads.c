/*
 * XREFs of MiAllocateChildVads @ 0x140A4862C
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140A48C04 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     MiVadPureReserve @ 0x140277E00 (MiVadPureReserve.c)
 *     MiIsVadLargePrivate @ 0x140288300 (MiIsVadLargePrivate.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiLocateVadEvent @ 0x14030B69C (MiLocateVadEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     MiFreeVadEvents @ 0x140634280 (MiFreeVadEvents.c)
 *     MiCloneCaptureVadCommit @ 0x140643AC0 (MiCloneCaptureVadCommit.c)
 *     MiCloneImageVad @ 0x1406636CC (MiCloneImageVad.c)
 *     MiVadShouldBeForked @ 0x140665C34 (MiVadShouldBeForked.c)
 *     MiFreePlaceholderStorage @ 0x1406834D8 (MiFreePlaceholderStorage.c)
 *     MiInsertSharedCommitNode @ 0x140722220 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1407225A0 (MiRemoveSharedCommitNode.c)
 *     MiCreateWriteWatchView @ 0x1407CCDD4 (MiCreateWriteWatchView.c)
 *     MiCloneNoChange @ 0x140A320E8 (MiCloneNoChange.c)
 *     MiFreeVadEventBitmap @ 0x140A321B8 (MiFreeVadEventBitmap.c)
 *     MiCloneLargeFileOnlyVad @ 0x140A33934 (MiCloneLargeFileOnlyVad.c)
 *     MiCloneDiscardVadCommit @ 0x140A3C5F0 (MiCloneDiscardVadCommit.c)
 *     MiVadHasSharedCommit @ 0x140A44048 (MiVadHasSharedCommit.c)
 *     MiCreatePlaceholderStorage @ 0x140A47EE0 (MiCreatePlaceholderStorage.c)
 *     MiDeletePartialCloneVads @ 0x140A490DC (MiDeletePartialCloneVads.c)
 *     MiInsertChildVads @ 0x140A4933C (MiInsertChildVads.c)
 *     MiCreateLargePageVad @ 0x140A49898 (MiCreateLargePageVad.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateChildVads(ULONG_PTR BugCheckParameter1, _QWORD *a2)
{
  __int64 *v3; // r12
  int v4; // r15d
  _QWORD *j; // rdi
  _QWORD *i; // rax
  _QWORD **v8; // rax
  __int64 v9; // rbp
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  int v12; // r8d
  ULONG v13; // r9d
  SIZE_T v14; // rsi
  __int64 **Pool; // rax
  __int64 **v16; // rbx
  unsigned int *v17; // rdx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  int inserted; // esi
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  $115DCDF994C6370D29323EAB0E0C9502 v26; // [rsp+20h] [rbp-78h] BYREF

  memset(&v26, 0, sizeof(v26));
  v3 = 0LL;
  v4 = 0;
  j = 0LL;
  for ( i = *(_QWORD **)&KeGetCurrentThread()->ApcState.Process[1].Spare2[15]; i; i = (_QWORD *)*i )
    j = i;
  while ( 1 )
  {
    do
    {
      if ( !j )
        return MiInsertChildVads(BugCheckParameter1, v3);
      v8 = (_QWORD **)j[1];
      v9 = (__int64)j;
      v10 = j;
      if ( v8 )
      {
        v11 = *v8;
        for ( j = (_QWORD *)j[1]; v11; v11 = (_QWORD *)*v11 )
          j = v11;
      }
      else
      {
        while ( 1 )
        {
          j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !j || (_QWORD *)*j == v10 )
            break;
          v10 = j;
        }
      }
    }
    while ( !(unsigned int)MiVadShouldBeForked(v9) );
    v12 = *(_DWORD *)(v9 + 48);
    v13 = 1818517846;
    v14 = (-(__int64)((v12 & 0x200000) != 0) & 0xFFFFFFFFFFFFFFB8uLL) + 136;
    if ( (v12 & 0x200000) == 0 && (v12 & 0x70) == 0x20 && (v12 & 0x400000) != 0 )
    {
      v13 = 1231315286;
      v14 = 8
          * (((unsigned __int64)*(unsigned int *)(***(_QWORD ***)(v9 + 72) + 8LL) >> 6)
           + ((*(_DWORD *)(***(_QWORD ***)(v9 + 72) + 8LL) & 0x3F) != 0)
           + 21LL);
    }
    Pool = (__int64 **)MiAllocatePool(64, v14, v13);
    v16 = Pool;
    if ( !Pool )
    {
      inserted = -1073741670;
      goto LABEL_56;
    }
    memmove(Pool, (const void *)v9, v14);
    v17 = (unsigned int *)(v16 + 6);
    if ( _bittest((const signed __int32 *)(v9 + 48), 0x15u) )
      *v17 &= ~8u;
    else
      v16[14] = (__int64 *)(BugCheckParameter1 | 1);
    v18 = *v17;
    v16[7] = (__int64 *)((unsigned __int64)v16[7] & 0xF);
    v19 = v18 & 0xFFFFFFFE;
    *((_DWORD *)v16 + 9) = 0;
    v16[5] = 0LL;
    v16[1] = 0LL;
    *v17 = v19 & 0xFFFFFFFD;
    if ( (v19 & 0x200000) == 0 && (v19 & 0x70) == 0x20 && (v19 & 0x1800000) != 0 )
      *v17 = v19 & 0xFE7FFFFD;
    v16[2] = (__int64 *)-2LL;
    if ( (unsigned int)MiVadHasSharedCommit(v9) )
    {
      inserted = MiInsertSharedCommitNode(**(_QWORD ***)(v9 + 72), BugCheckParameter1, 0);
      if ( inserted < 0 )
        goto LABEL_52;
    }
    if ( MiVadPureReserve((__int64)v16) )
    {
      v21 = *((unsigned int *)v16 + 13);
      LODWORD(v21) = v21 & 0x7FFFFFFF;
      if ( (v21 | ((unsigned __int64)*((unsigned __int8 *)v16 + 34) << 31)) < 0x7FFFFFFFDLL )
      {
        inserted = MiCloneCaptureVadCommit((__int64)v16);
        if ( inserted < 0 )
          break;
      }
    }
    if ( (*(_DWORD *)(v9 + 48) & 8) != 0 )
    {
      inserted = MiCloneNoChange(v9, (__int64)v16);
      if ( inserted < 0 )
        goto LABEL_56;
    }
    if ( MiLocateVadEvent(v9, 128LL) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v26);
      v4 = 1;
      inserted = MiCreatePlaceholderStorage((__int64)v16);
      if ( inserted < 0 )
        goto LABEL_59;
    }
    if ( (*(_DWORD *)(v9 + 48) & 0x600000) == 0x600000 )
    {
      if ( !v4 )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v26);
        v4 = 1;
      }
      inserted = MiCreateWriteWatchView(BugCheckParameter1, (__int64)v16);
      if ( inserted < 0 )
        goto LABEL_59;
    }
    if ( MiIsVadLargePrivate(v9) )
    {
      v22 = (*((_DWORD *)v16 + 13) ^ (*(_DWORD *)(v9 + 52) & 0x7FFFFFFF | (*(unsigned __int8 *)(v9 + 34) << 31))) & 0x7FFFFFFF;
      *((_BYTE *)v16 + 34) = (*(_DWORD *)(v9 + 52) & 0x7FFFFFFF | ((unsigned __int64)*(unsigned __int8 *)(v9 + 34) << 31)) >> 31;
      *((_DWORD *)v16 + 13) ^= v22;
      inserted = MiCreateLargePageVad(BugCheckParameter1, v16, 0LL, 1LL);
      if ( inserted < 0 )
        goto LABEL_56;
      ++*a2;
    }
    else
    {
      v23 = *(_DWORD *)(v9 + 48) & 0x70;
      if ( v23 == 32 )
      {
        v24 = MiCloneImageVad(BugCheckParameter1, (__int64)v16, v9);
      }
      else
      {
        if ( v23 != 80 || !*(_QWORD *)(**(_QWORD **)(v9 + 72) + 64LL) )
          goto LABEL_47;
        v24 = MiCloneLargeFileOnlyVad(v9);
      }
      inserted = v24;
      if ( v24 < 0 )
        goto LABEL_56;
    }
LABEL_47:
    if ( v4 )
    {
      KiUnstackDetachProcess(&v26);
      v4 = 0;
    }
    *v16 = v3;
    v3 = (__int64 *)v16;
  }
  if ( (unsigned int)MiVadHasSharedCommit((__int64)v16) )
    MiRemoveSharedCommitNode(*v16[9], BugCheckParameter1, 0);
LABEL_52:
  ExFreePoolWithTag(v16, 0);
  v16 = 0LL;
LABEL_56:
  if ( !v4 )
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v26);
  if ( v16 )
  {
LABEL_59:
    if ( (unsigned int)MiVadHasSharedCommit((__int64)v16) )
      MiRemoveSharedCommitNode(*v16[9], BugCheckParameter1, 0);
    MiCloneDiscardVadCommit((__int64)v16);
    MiFreeVadEventBitmap((struct _KPROCESS *)BugCheckParameter1, (__int64)v16, 4);
    MiFreePlaceholderStorage((__int64)v16);
    MiFreeVadEvents((__int64)v16);
    ExFreePoolWithTag(v16, 0);
  }
  if ( v3 )
    MiDeletePartialCloneVads(v3);
  KiUnstackDetachProcess(&v26);
  return (unsigned int)inserted;
}
