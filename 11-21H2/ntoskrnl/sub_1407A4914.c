/*
 * XREFs of sub_1407A4914 @ 0x1407A4914
 * Callers:
 *     sub_1406BC370 @ 0x1406BC370 (sub_1406BC370.c)
 *     sub_1407A4858 @ 0x1407A4858 (sub_1407A4858.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1406BBDFC @ 0x1406BBDFC (sub_1406BBDFC.c)
 */

__int64 __fastcall sub_1407A4914(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  signed __int64 *v4; // rdi
  __int64 **v5; // r14
  int v7; // esi
  __int64 *i; // rbx

  v4 = (signed __int64 *)(a1 + 328);
  v5 = (__int64 **)(a1 + 336);
  v7 = 0;
  ExAcquirePushLockSharedEx(a1 + 328, 0LL);
  for ( i = *v5; i != (__int64 *)v5; i = (__int64 *)*i )
  {
    if ( *((_BYTE *)i + 17) == 6 )
    {
      v7 = sub_1406BBDFC((ULONG_PTR)(i + 6), a4);
      if ( v7 < 0 )
        break;
    }
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  sub_1402AFC00((ULONG_PTR)v4);
  return (unsigned int)v7;
}
