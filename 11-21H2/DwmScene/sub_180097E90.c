/*
 * XREFs of sub_180097E90 @ 0x180097E90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800975AC @ 0x1800975AC (sub_1800975AC.c)
 *     sub_180097F04 @ 0x180097F04 (sub_180097F04.c)
 */

_OWORD *__fastcall sub_180097E90(__int64 a1, _OWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF

  sub_1800975AC(a3, v8);
  v5 = *(_QWORD *)(a1 + 112);
  if ( v5 )
    v6 = *(unsigned int *)(v5 + 32);
  else
    v6 = 0xFFFFFFFFLL;
  sub_180097F04(v8[0], v6);
  *a2 = *(_OWORD *)v8;
  *(_OWORD *)v8 = 0LL;
  sub_180010910((__int64)v8);
  return a2;
}
