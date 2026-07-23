/*
 * XREFs of sub_1407F0194 @ 0x1407F0194
 * Callers:
 *     sub_14036A698 @ 0x14036A698 (sub_14036A698.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1402DEF50 (RtlInsertElementGenericTableAvl.c)
 */

PVOID __fastcall sub_1407F0194(int a1)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF
  BOOLEAN v3; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  DWORD2(v2) = a1;
  return RtlInsertElementGenericTableAvl(&stru_140C244A0, &v2, 0x10u, &v3);
}
