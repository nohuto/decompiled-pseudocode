/*
 * XREFs of sub_14045C7CC @ 0x14045C7CC
 * Callers:
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_140396D30 @ 0x140396D30 (sub_140396D30.c)
 *     sub_14045C75A @ 0x14045C75A (sub_14045C75A.c)
 *     sub_14045CDD6 @ 0x14045CDD6 (sub_14045CDD6.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14045C7CC(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r10
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v3 = 0LL;
  v4 = (__int64 *)(704LL * a3 + 24512LL * a2 + *(_QWORD *)(a1 + 16) + 3256LL);
  v5 = 8LL;
  do
  {
    v6 = *v4;
    v4 += 11;
    v3 += v6;
    --v5;
  }
  while ( v5 );
  return v3;
}
