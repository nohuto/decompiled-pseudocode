/*
 * XREFs of sub_180080304 @ 0x180080304
 * Callers:
 *     sub_18003BCD0 @ 0x18003BCD0 (sub_18003BCD0.c)
 * Callees:
 *     sub_18001DE70 @ 0x18001DE70 (sub_18001DE70.c)
 *     sub_180030724 @ 0x180030724 (sub_180030724.c)
 *     sub_180080380 @ 0x180080380 (sub_180080380.c)
 */

__int64 __fastcall sub_180080304(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  volatile __int32 *v5; // rax
  __int32 v6; // edx
  __int64 result; // rax
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  v8 = 0;
  *(_OWORD *)(a1 + 8) = v2;
  *(_OWORD *)(a1 + 24) = a2[1];
  *(_OWORD *)(a1 + 40) = a2[2];
  sub_180030724(&v8);
  v5 = (volatile __int32 *)sub_18001DE70(a1 + 56);
  _InterlockedExchange(v5, v6);
  if ( (__int128 *)(a1 + 64) != (__int128 *)((char *)a2 + 56) )
    sub_180080380();
  result = *((_QWORD *)a2 + 10);
  *(_QWORD *)(a1 + 88) = result;
  return result;
}
