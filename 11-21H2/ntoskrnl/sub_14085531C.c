/*
 * XREFs of sub_14085531C @ 0x14085531C
 * Callers:
 *     sub_1406E7CD4 @ 0x1406E7CD4 (sub_1406E7CD4.c)
 * Callees:
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 */

__int64 __fastcall sub_14085531C(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  char v5; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  v5 = (unsigned __int8)((*(_BYTE *)(*(_QWORD *)(a1 + 720) + 16LL) >> 2) | *(_BYTE *)(*(_QWORD *)(a1 + 720) + 16LL) & 0x40) >> 5;
  return sub_14077198C(
           *(__int64 *)&qword_140D00AC0,
           v3,
           1,
           a2,
           0LL,
           (__int64)qword_140012EB8,
           4099,
           (__int64)&v5,
           1u,
           0);
}
