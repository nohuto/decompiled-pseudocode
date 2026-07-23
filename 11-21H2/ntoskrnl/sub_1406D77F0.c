/*
 * XREFs of sub_1406D77F0 @ 0x1406D77F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020B10C @ 0x14020B10C (sub_14020B10C.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_140687540 @ 0x140687540 (sub_140687540.c)
 *     sub_1406D78E0 @ 0x1406D78E0 (sub_1406D78E0.c)
 *     sub_1406FFE90 @ 0x1406FFE90 (sub_1406FFE90.c)
 *     sub_1406FFED4 @ 0x1406FFED4 (sub_1406FFED4.c)
 */

LONG_PTR __fastcall sub_1406D77F0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  char v4; // di
  struct _KTHREAD *CurrentThread; // rsi
  void *v7; // rdi
  LONG_PTR result; // rax

  v4 = 1;
  if ( a4 <= 1 )
  {
    CurrentThread = KeGetCurrentThread();
    _InterlockedOr((volatile signed __int32 *)(a2 + 1512), 1u);
    sub_1406FFED4(a2, CurrentThread);
    if ( (*(_DWORD *)(a2 + 256) & 0x2000) != 0 )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a2 + 1512), 0x1Du)
        || (*(_DWORD *)(a2 + 1512) & 0x40000000) == 0 )
      {
        v4 = 0;
      }
      sub_1406FFE90(a2, CurrentThread);
      sub_1406D78E0((PRKEVENT)a2);
      sub_1406FFED4(a2, CurrentThread);
      if ( v4 )
        sub_14020B10C(a2);
    }
    ExAcquirePushLockExclusiveEx(a2 + 1224, 0LL);
    v7 = *(void **)(a2 + 552);
    *(_QWORD *)(a2 + 552) = 0LL;
    sub_140687540(a2, 0LL, 0LL);
    result = sub_1406FFE90(a2, CurrentThread);
    if ( v7 )
      return ObfDereferenceObjectWithTag(v7, 0x624A7350u);
  }
  return result;
}
