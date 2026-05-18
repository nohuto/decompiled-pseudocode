/*
 * XREFs of sub_1800258F0 @ 0x1800258F0
 * Callers:
 *     sub_180025598 @ 0x180025598 (sub_180025598.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

__int64 __fastcall sub_1800258F0(__int64 a1)
{
  __int64 v2; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v2 = sub_18001C190();
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *(_QWORD *)a1 = v2;
  Mtx_init_in_situ((_Mtx_t)(a1 + 16), 2);
  return a1;
}
