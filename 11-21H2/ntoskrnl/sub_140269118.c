/*
 * XREFs of sub_140269118 @ 0x140269118
 * Callers:
 *     sub_140268E74 @ 0x140268E74 (sub_140268E74.c)
 *     sub_1402690B4 @ 0x1402690B4 (sub_1402690B4.c)
 *     sub_1405A54BC @ 0x1405A54BC (sub_1405A54BC.c)
 * Callees:
 *     sub_14033BC30 @ 0x14033BC30 (sub_14033BC30.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140269118(__int64 a1)
{
  ULONG_PTR v1; // rcx
  ULONG_PTR v2; // r9
  __int64 v3; // rdx

  v1 = a1 - 4080;
  v2 = *(_QWORD *)(v1 + 4064);
  if ( v2 != (v1 ^ qword_140C53430) )
    KeBugCheckEx(0x1Au, 0x3472uLL, v1, v2, v1 ^ qword_140C53430);
  v3 = 8LL;
  if ( *(_DWORD *)(v1 + 4088) != 2 )
    v3 = 0LL;
  return sub_14033BC30(((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v3);
}
