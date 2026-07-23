/*
 * XREFs of sub_140948FB8 @ 0x140948FB8
 * Callers:
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_14077B33C @ 0x14077B33C (sub_14077B33C.c)
 *     sub_1409491C0 @ 0x1409491C0 (sub_1409491C0.c)
 */

void __fastcall sub_140948FB8(__int64 a1, ULONG_PTR a2, __int64 a3, ULONG_PTR a4)
{
  ULONG_PTR v5; // rdi
  void *v6; // rax
  ULONG_PTR v7; // r9
  struct _KTHREAD *CurrentThread; // rcx
  void *v9; // rbp
  _QWORD **v10; // r15
  struct _KTHREAD *v11; // rax
  struct _KTHREAD *v12; // rax
  _QWORD *i; // r14
  struct _KTHREAD *v14; // rax

  v5 = a2;
  v6 = sub_14077B33C(*(_DWORD *)(a2 + 28));
  CurrentThread = KeGetCurrentThread();
  v9 = v6;
  v10 = (_QWORD **)(v7 + 88);
  if ( v5 >= v7 )
  {
    --*((_WORD *)CurrentThread + 242);
    if ( v5 > v7 )
    {
      ExAcquirePushLockSharedEx(a4, 0LL);
      v12 = KeGetCurrentThread();
      --*((_WORD *)v12 + 242);
    }
    ExAcquirePushLockExclusiveEx(v5, 0LL);
  }
  else
  {
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx(v5, 0LL);
    v11 = KeGetCurrentThread();
    --*((_WORD *)v11 + 242);
    ExAcquirePushLockSharedEx(a4, 0LL);
  }
  for ( i = *v10; i != v10; i = (_QWORD *)*i )
  {
    v14 = KeGetCurrentThread();
    --*((_WORD *)v14 + 242);
    ExAcquirePushLockSharedEx((ULONG_PTR)(i - 8), 0LL);
    sub_1409491C0(2LL, v9, v5, i - 8, 0LL);
    ExReleasePushLockEx((ULONG_PTR)(i - 8), 0LL);
    KeLeaveCriticalRegion();
  }
  if ( v5 >= a4 )
  {
    if ( v5 > a4 )
    {
      ExReleasePushLockEx(v5, 0LL);
      KeLeaveCriticalRegion();
      v5 = a4;
    }
  }
  else
  {
    ExReleasePushLockEx(a4, 0LL);
    KeLeaveCriticalRegion();
  }
  ExReleasePushLockEx(v5, 0LL);
  KeLeaveCriticalRegion();
}
