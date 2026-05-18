/*
 * XREFs of sub_18002F68C @ 0x18002F68C
 * Callers:
 *     sub_18002EB98 @ 0x18002EB98 (sub_18002EB98.c)
 *     sub_18002F9F0 @ 0x18002F9F0 (sub_18002F9F0.c)
 *     sub_1800386C4 @ 0x1800386C4 (sub_1800386C4.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18002F68C(__int64 a1, __int64 a2, _QWORD *a3)
{
  char v3; // bl

  v3 = 0;
  if ( !*(_BYTE *)(a2 + 25) )
    return (int)_std_type_info_compare(*a3 + 8LL, *(_QWORD *)(a2 + 32) + 8LL) >= 0;
  return v3;
}
