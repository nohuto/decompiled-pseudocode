/*
 * XREFs of sub_1403B2B00 @ 0x1403B2B00
 * Callers:
 *     sub_140390D20 @ 0x140390D20 (sub_140390D20.c)
 *     sub_14050A93C @ 0x14050A93C (sub_14050A93C.c)
 *     sub_14050AABC @ 0x14050AABC (sub_14050AABC.c)
 *     sub_14051F6C4 @ 0x14051F6C4 (sub_14051F6C4.c)
 *     sub_140A50388 @ 0x140A50388 (sub_140A50388.c)
 *     sub_140A5072C @ 0x140A5072C (sub_140A5072C.c)
 *     sub_140A622EC @ 0x140A622EC (sub_140A622EC.c)
 *     sub_140A625DC @ 0x140A625DC (sub_140A625DC.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1403B2B00(int a1, unsigned int a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v6; // rbx
  __int64 v7; // rdx

  v6 = 6LL * a1;
  v7 = *(unsigned int *)&byte_140C4A4A0[48 * a1 + 24];
  if ( (unsigned int)v7 > a4 )
    return 3221225507LL;
  sub_14042A5E0(*(_QWORD *)&byte_140C4A4A0[48 * a1 + 8] + a2, v7);
  if ( a5 )
    *a5 = *(_DWORD *)&byte_140C4A4A0[8 * v6 + 24];
  return 0LL;
}
