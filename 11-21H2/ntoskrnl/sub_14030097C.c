/*
 * XREFs of sub_14030097C @ 0x14030097C
 * Callers:
 *     sub_140300534 @ 0x140300534 (sub_140300534.c)
 * Callees:
 *     sub_1402D6A64 @ 0x1402D6A64 (sub_1402D6A64.c)
 *     sub_1403008B0 @ 0x1403008B0 (sub_1403008B0.c)
 */

char __fastcall sub_14030097C(__int64 a1, __int64 a2, unsigned int a3)
{
  char v3; // bl
  unsigned int v8; // edi

  v3 = 1;
  if ( (off_140C06A88[4] & 1) == 0 || !a2 )
    return 0;
  v8 = 0;
  if ( a3 )
  {
    while ( sub_1402D6A64((PCUNICODE_STRING)(a2 + 16LL * v8))
         && !sub_1403008B0(*(_QWORD *)(a1 + 776), (const UNICODE_STRING *)(a2 + 16LL * v8)) )
    {
      if ( ++v8 >= a3 )
        return v3;
    }
    return 0;
  }
  return v3;
}
