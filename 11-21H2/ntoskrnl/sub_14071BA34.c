/*
 * XREFs of sub_14071BA34 @ 0x14071BA34
 * Callers:
 *     sub_14022EA80 @ 0x14022EA80 (sub_14022EA80.c)
 *     sub_14071A730 @ 0x14071A730 (sub_14071A730.c)
 *     sub_14071A870 @ 0x14071A870 (sub_14071A870.c)
 *     sub_14071B99C @ 0x14071B99C (sub_14071B99C.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1406BBAD8 @ 0x1406BBAD8 (sub_1406BBAD8.c)
 *     sub_14071BBD8 @ 0x14071BBD8 (sub_14071BBD8.c)
 */

__int64 *__fastcall sub_14071BA34(volatile signed __int32 *P)
{
  __int64 *v1; // rdi
  __int64 **v3; // rsi
  __int64 *v4; // r8
  __int64 **v5; // r8

  v1 = 0LL;
  v3 = (__int64 **)&qword_140D3CC90;
  if ( P )
    v3 = (__int64 **)(P + 402);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C49860, 0LL);
  v4 = *v3;
  while ( v4 != &qword_140D3CC90 )
  {
    v1 = v4 - 201;
    if ( (unsigned __int8)sub_14071BBD8(v4 - 201) )
      break;
    v4 = *v5;
    v1 = 0LL;
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_140C49860, 0LL);
  if ( P && _InterlockedExchangeAdd(P + 1058, 0xFFFFFFFF) == 1 )
    sub_1406BBAD8(P);
  return v1;
}
