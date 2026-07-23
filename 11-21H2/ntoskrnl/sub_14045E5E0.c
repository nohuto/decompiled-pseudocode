/*
 * XREFs of sub_14045E5E0 @ 0x14045E5E0
 * Callers:
 *     sub_14045DEFE @ 0x14045DEFE (sub_14045DEFE.c)
 * Callees:
 *     sub_140356454 @ 0x140356454 (sub_140356454.c)
 *     sub_14045DFDC @ 0x14045DFDC (sub_14045DFDC.c)
 *     sub_14045EA32 @ 0x14045EA32 (sub_14045EA32.c)
 */

char __fastcall sub_14045E5E0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char v5; // bl
  int *v8; // rsi
  __int64 v10; // [rsp+20h] [rbp-18h]

  v5 = 0;
  v8 = (int *)(a1 + 208LL * a2);
  if ( !*(_BYTE *)(a1 + 124) || sub_14045DFDC(*(_QWORD *)(a1 + 32), v8[50], v8[92], 1) )
  {
    v5 = sub_140356454(a1, (__int64)(v8 + 48), 1u, 6u, v10, a4);
    sub_14045EA32(*(_QWORD *)(a1 + 32), a2, v8[93], v8[92], 1);
  }
  return v5;
}
