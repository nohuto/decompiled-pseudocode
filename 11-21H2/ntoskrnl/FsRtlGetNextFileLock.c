/*
 * XREFs of FsRtlGetNextFileLock @ 0x140541AD0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     RtlRealSuccessor @ 0x14021D710 (RtlRealSuccessor.c)
 *     sub_14021DCF4 @ 0x14021DCF4 (sub_14021DCF4.c)
 *     sub_14021E8B8 @ 0x14021E8B8 (sub_14021E8B8.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

PFILE_LOCK_INFO __stdcall FsRtlGetNextFileLock(PFILE_LOCK FileLock, BOOLEAN Restart)
{
  _QWORD *LockInformation; // rbx
  __int128 v4; // xmm0
  PRTL_SPLAY_LINKS LastReturnedLock; // rdi
  char v6; // r14
  PRTL_SPLAY_LINKS v7; // rax
  _RTL_SPLAY_LINKS *v8; // rcx
  _RTL_SPLAY_LINKS *v9; // r14
  _RTL_SPLAY_LINKS *v10; // r15
  int v11; // r12d
  _RTL_SPLAY_LINKS *v12; // rsi
  _RTL_SPLAY_LINKS *v13; // r13
  __int64 v14; // rax
  __int64 j; // rcx
  __int128 v16; // xmm0
  _RTL_SPLAY_LINKS *v17; // rax
  PRTL_SPLAY_LINKS v18; // rcx
  _RTL_SPLAY_LINKS *Parent; // rbx
  bool v20; // cf
  PRTL_SPLAY_LINKS v21; // rax
  _RTL_SPLAY_LINKS *v22; // rax
  __int64 i; // rcx
  unsigned __int8 CurrentIrql; // al
  KIRQL v25; // bl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v27; // r9
  int v28; // eax
  bool v29; // zf
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  PFILE_LOCK_INFO result; // rax
  __int128 v33; // xmm0
  PRTL_SPLAY_LINKS Links; // [rsp+38h] [rbp-31h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+40h] [rbp-29h]
  __int128 v36; // [rsp+48h] [rbp-21h]
  __int128 v37; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v38[64]; // [rsp+68h] [rbp-1h] BYREF
  char v40; // [rsp+E0h] [rbp+77h] BYREF
  KIRQL v41; // [rsp+E8h] [rbp+7Fh]

  Links = 0LL;
  LockInformation = FileLock->LockInformation;
  v40 = 0;
  if ( !LockInformation )
    return 0LL;
  v4 = *(_OWORD *)&FileLock->LastReturnedLockInfo.StartingByte.LowPart;
  LastReturnedLock = (PRTL_SPLAY_LINKS)FileLock->LastReturnedLock;
  v6 = 0;
  SpinLock = LockInformation + 3;
  v37 = v4;
  v36 = *(_OWORD *)&FileLock->LastReturnedLockInfo.ExclusiveLock;
  *(_OWORD *)v38 = v36;
  *(_OWORD *)&v38[16] = *(_OWORD *)&FileLock->LastReturnedLockInfo.ProcessId;
  v41 = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  if ( Restart )
  {
    v22 = (_RTL_SPLAY_LINKS *)LockInformation[5];
    if ( v22 )
    {
      do
      {
        LastReturnedLock = v22;
        v22 = v22->LeftChild;
      }
      while ( v22 );
      v37 = *(_OWORD *)&LastReturnedLock[1].Parent;
      v36 = *(_OWORD *)&LastReturnedLock[1].RightChild;
      *(_OWORD *)v38 = v36;
      v16 = *(_OWORD *)&LastReturnedLock[2].LeftChild;
      goto LABEL_55;
    }
    v14 = LockInformation[4];
    if ( !v14 )
      goto LABEL_62;
    for ( i = *(_QWORD *)(v14 + 8); i; i = *(_QWORD *)(i + 8) )
      v14 = i;
    goto LABEL_27;
  }
  if ( (_BYTE)v36 )
  {
    v7 = (PRTL_SPLAY_LINKS)sub_14021DCF4(
                             (_QWORD *)LockInformation[5],
                             (unsigned __int64 *)&v37,
                             (unsigned __int64 *)&v38[24],
                             &Links,
                             &v40);
    if ( v7 )
    {
      v9 = *(_RTL_SPLAY_LINKS **)&v38[16];
      v10 = *(_RTL_SPLAY_LINKS **)&v38[8];
      v11 = *(_DWORD *)&v38[4];
      v12 = (_RTL_SPLAY_LINKS *)*((_QWORD *)&v37 + 1);
      v13 = (_RTL_SPLAY_LINKS *)v37;
      while ( LastReturnedLock != v7
           || v13 != v7[1].Parent
           || v12 != v7[1].LeftChild
           || v11 != HIDWORD(v7[1].RightChild)
           || v10 != v7[2].Parent
           || v9 != v7[2].LeftChild )
      {
        if ( v7[1].LeftChild || v12 )
          goto LABEL_22;
        v7 = RtlRealSuccessor(v7);
        if ( !v7 )
          goto LABEL_23;
      }
      v8 = v7;
    }
    else
    {
      if ( v40 )
      {
        v7 = Links;
        goto LABEL_22;
      }
      v8 = Links;
      if ( !Links )
      {
LABEL_23:
        v14 = LockInformation[4];
        if ( !v14 )
        {
          v6 = 0;
          goto LABEL_62;
        }
        for ( j = *(_QWORD *)(v14 + 8); j; j = *(_QWORD *)(j + 8) )
          v14 = j;
LABEL_27:
        LastReturnedLock = *(PRTL_SPLAY_LINKS *)(v14 - 24);
        v37 = *(_OWORD *)&LastReturnedLock->LeftChild;
        v36 = *(_OWORD *)&LastReturnedLock[1].Parent;
        *(_OWORD *)v38 = v36;
        v16 = *(_OWORD *)&LastReturnedLock[1].RightChild;
LABEL_55:
        *(_OWORD *)&v38[16] = v16;
        v6 = 1;
        goto LABEL_62;
      }
    }
    v7 = RtlRealSuccessor(v8);
LABEL_22:
    if ( v7 )
    {
      LastReturnedLock = v7;
      v37 = *(_OWORD *)&v7[1].Parent;
      v36 = *(_OWORD *)&v7[1].RightChild;
      *(_OWORD *)v38 = v36;
      v16 = *(_OWORD *)&v7[2].LeftChild;
      goto LABEL_55;
    }
    goto LABEL_23;
  }
  v17 = (_RTL_SPLAY_LINKS *)sub_14021E8B8(
                              LockInformation[4],
                              (unsigned __int64 *)&v37,
                              (unsigned __int64 *)&v38[24],
                              &Links,
                              &v40);
  if ( v17 )
  {
    v18 = v17;
  }
  else
  {
    v17 = Links;
    if ( !Links )
      goto LABEL_62;
    v18 = Links;
    if ( !v40 )
    {
      v17 = RtlRealSuccessor(Links);
      v18 = v17;
      if ( !v17 )
        goto LABEL_62;
    }
  }
  if ( v18 == (PRTL_SPLAY_LINKS)24 )
    goto LABEL_62;
  Parent = v18[-1].Parent;
  if ( !Parent )
    goto LABEL_48;
  while ( 1 )
  {
    if ( LastReturnedLock == Parent )
    {
      v20 = (_RTL_SPLAY_LINKS *)v37 < Parent->LeftChild;
      if ( (_RTL_SPLAY_LINKS *)v37 != Parent->LeftChild )
        goto LABEL_44;
      if ( (_RTL_SPLAY_LINKS *)*((_QWORD *)&v37 + 1) == Parent->RightChild
        && *(_DWORD *)&v38[4] == HIDWORD(Parent[1].Parent)
        && *(_OWORD *)&v38[8] == *(_OWORD *)&Parent[1].LeftChild )
      {
        break;
      }
    }
    v20 = (_RTL_SPLAY_LINKS *)v37 < Parent->LeftChild;
LABEL_44:
    if ( v20 )
      goto LABEL_47;
    Parent = Parent->Parent;
    if ( !Parent )
      goto LABEL_48;
  }
  Parent = Parent->Parent;
LABEL_47:
  if ( Parent )
  {
LABEL_51:
    LastReturnedLock = Parent;
    v37 = *(_OWORD *)&Parent->LeftChild;
    v36 = *(_OWORD *)&Parent[1].Parent;
    *(_OWORD *)v38 = v36;
    v16 = *(_OWORD *)&Parent[1].RightChild;
    goto LABEL_55;
  }
LABEL_48:
  v21 = RtlRealSuccessor(v17);
  if ( v21 )
    Parent = v21[-1].Parent;
  if ( Parent )
    goto LABEL_51;
LABEL_62:
  KeReleaseSpinLockFromDpcLevel(SpinLock);
  if ( !dword_140D06B08 || (dword_140D06B08 & 1) == 0 || (CurrentIrql = KeGetCurrentIrql(), CurrentIrql > 0xFu) )
  {
    v25 = v41;
LABEL_71:
    v30 = v36;
    goto LABEL_72;
  }
  v25 = v41;
  if ( v41 > 0xFu || CurrentIrql < 2u )
    goto LABEL_71;
  CurrentPrcb = KeGetCurrentPrcb();
  v27 = *((_QWORD *)CurrentPrcb + 4375);
  v28 = ~(unsigned __int16)(-1LL << (v41 + 1));
  v29 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
  *(_DWORD *)(v27 + 20) &= v28;
  if ( v29 )
    sub_140418E4C((__int64)CurrentPrcb);
  v30 = *(_OWORD *)v38;
LABEL_72:
  __writecr8(v25);
  if ( v6 )
  {
    v31 = v37;
    result = &FileLock->LastReturnedLockInfo;
    FileLock->LastReturnedLock = LastReturnedLock;
    *(_OWORD *)&FileLock->LastReturnedLockInfo.StartingByte.LowPart = v31;
    v33 = *(_OWORD *)&v38[16];
    *(_OWORD *)&FileLock->LastReturnedLockInfo.ExclusiveLock = v30;
    *(_OWORD *)&FileLock->LastReturnedLockInfo.ProcessId = v33;
    return result;
  }
  return 0LL;
}
