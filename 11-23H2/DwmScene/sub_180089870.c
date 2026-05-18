/*
 * XREFs of sub_180089870 @ 0x180089870
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800890B4 @ 0x1800890B4 (sub_1800890B4.c)
 *     sub_1800898D0 @ 0x1800898D0 (sub_1800898D0.c)
 */

_QWORD *__fastcall sub_180089870(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v8[4]; // [rsp+28h] [rbp-20h] BYREF

  sub_1800890B4(a3, v8);
  v5 = *(_QWORD *)(a1 + 112);
  if ( v5 )
    v6 = *(unsigned int *)(v5 + 32);
  else
    v6 = 0xFFFFFFFFLL;
  sub_1800898D0(v8[0], v6);
  *a2 = v8[0];
  a2[1] = v8[1];
  return a2;
}
