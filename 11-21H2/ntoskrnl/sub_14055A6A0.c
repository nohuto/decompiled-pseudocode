/*
 * XREFs of sub_14055A6A0 @ 0x14055A6A0
 * Callers:
 *     sub_14093A0B8 @ 0x14093A0B8 (sub_14093A0B8.c)
 *     sub_14093AAEC @ 0x14093AAEC (sub_14093AAEC.c)
 *     sub_14093B1CC @ 0x14093B1CC (sub_14093B1CC.c)
 *     sub_14093B5F8 @ 0x14093B5F8 (sub_14093B5F8.c)
 *     sub_14093BF5C @ 0x14093BF5C (sub_14093BF5C.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14055A6A0(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r9

  v3 = 0;
  if ( a1 && *(_DWORD *)(a1 + 4) || a2 && *(_DWORD *)(a2 + 4) )
    return 1;
  if ( a3 )
    return *(_DWORD *)(a3 + 4) != 0;
  return v3;
}
