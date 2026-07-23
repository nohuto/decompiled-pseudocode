/*
 * XREFs of sub_140363BC0 @ 0x140363BC0
 * Callers:
 *     sub_14023DD4C @ 0x14023DD4C (sub_14023DD4C.c)
 *     sub_140363A64 @ 0x140363A64 (sub_140363A64.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 */

KIRQL __fastcall sub_140363BC0(__int64 a1, int a2, __int64 a3)
{
  volatile LONG *v5; // rcx
  KIRQL result; // al
  struct _KTHREAD *CurrentThread; // rax

  v5 = (volatile LONG *)(a1 + 24);
  if ( *(_BYTE *)(a1 + 48) )
  {
    if ( a2 == 1 )
      result = ExAcquireSpinLockExclusive(v5);
    else
      result = ExAcquireSpinLockShared(v5);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 243);
    if ( a2 == 1 )
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
    else
      ExAcquirePushLockSharedEx((ULONG_PTR)v5, 0LL);
    result = -1;
  }
  *(_BYTE *)(a3 + 4) = result;
  *(_QWORD *)(a3 + 8) = a1;
  *(_DWORD *)a3 = a2;
  return result;
}
