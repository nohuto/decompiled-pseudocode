/*
 * XREFs of sub_14058503C @ 0x14058503C
 * Callers:
 *     sub_140628F90 @ 0x140628F90 (sub_140628F90.c)
 *     sub_140629030 @ 0x140629030 (sub_140629030.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140584C78 @ 0x140584C78 (sub_140584C78.c)
 */

__int64 __fastcall sub_14058503C(ULONG_PTR BugCheckParameter3, int a2)
{
  __int64 result; // rax
  PEPROCESS v5; // rbp
  __int64 v6; // rdi
  unsigned __int64 *i; // rbx
  ULONG_PTR v8; // r12
  unsigned __int64 *v9; // r15
  unsigned __int64 v10; // rcx
  _QWORD *v11; // r14
  bool v12; // r8
  int v13; // eax
  _QWORD *v14; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v17; // r9
  bool v18; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  result = (unsigned int)dword_140D06994;
  if ( (dword_140D06994 & 1) == 0 )
    return result;
  v5 = *(PEPROCESS *)(BugCheckParameter3 + 16);
  if ( !v5 )
    v5 = PsInitialSystemProcess;
  v6 = *((_QWORD *)v5 + 193);
  if ( !v6 )
    return result;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 24), &LockHandle);
  if ( !a2 )
  {
    i = *(unsigned __int64 **)(v6 + 8);
    if ( !i )
    {
LABEL_22:
      if ( *(_DWORD *)(v6 + 32) )
        KeBugCheckEx(0x76u, 9uLL, BugCheckParameter3, *((_QWORD *)v5 + 160), *((_QWORD *)v5 + 193));
      goto LABEL_30;
    }
    v10 = *(_QWORD *)(BugCheckParameter3 + 48);
    while ( 1 )
    {
      if ( v10 >= i[8] )
      {
        if ( v10 <= i[8] )
        {
          i[3] = BugCheckParameter3;
          sub_140584C78((ULONG_PTR)i, 1);
          RtlAvlRemoveNode((unsigned __int64 *)(v6 + 8), i);
          v9 = (unsigned __int64 *)v6;
          v8 = BugCheckParameter3;
          goto LABEL_25;
        }
        i = (unsigned __int64 *)i[1];
      }
      else
      {
        i = (unsigned __int64 *)*i;
      }
      if ( !i )
        goto LABEL_22;
    }
  }
  for ( i = *(unsigned __int64 **)v6; ; i = (unsigned __int64 *)i[1] )
  {
    while ( 1 )
    {
      if ( !i )
      {
        if ( *(_DWORD *)(v6 + 32) )
          KeBugCheckEx(0x76u, 8uLL, BugCheckParameter3, *((_QWORD *)v5 + 160), *((_QWORD *)v5 + 193));
        goto LABEL_30;
      }
      if ( BugCheckParameter3 >= i[3] )
        break;
      i = (unsigned __int64 *)*i;
    }
    if ( BugCheckParameter3 <= i[3] )
      break;
  }
  sub_140584C78((ULONG_PTR)i, 1);
  i[3] &= ~0x8000000000000000uLL;
  RtlAvlRemoveNode((unsigned __int64 *)v6, i);
  v8 = *(_QWORD *)(BugCheckParameter3 + 48);
  v9 = (unsigned __int64 *)(v6 + 8);
LABEL_25:
  v11 = (_QWORD *)*v9;
  v12 = 0;
  if ( !*v9 )
    goto LABEL_29;
  while ( 1 )
  {
    v13 = sub_14042A5E0(v8, v11);
    if ( v13 <= 0 )
      break;
    v14 = (_QWORD *)v11[1];
    if ( !v14 )
    {
      v12 = 1;
      goto LABEL_29;
    }
LABEL_41:
    v11 = v14;
  }
  if ( v13 >= 0 )
    KeBugCheckEx(0xD9u, 2uLL, (ULONG_PTR)v11, BugCheckParameter3, *(_QWORD *)(v6 + 16));
  v14 = (_QWORD *)*v11;
  if ( *v11 )
    goto LABEL_41;
  v12 = 0;
LABEL_29:
  RtlAvlInsertNodeEx(v9, (unsigned __int64)v11, v12, i);
LABEL_30:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)dword_140D06B08;
  OldIrql = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v17 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v18 = ((unsigned int)result & *(_DWORD *)(v17 + 20)) == 0;
        *(_DWORD *)(v17 + 20) &= result;
        if ( v18 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
