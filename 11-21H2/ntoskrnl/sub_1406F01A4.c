/*
 * XREFs of sub_1406F01A4 @ 0x1406F01A4
 * Callers:
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 * Callees:
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall sub_1406F01A4(__int64 a1, const UNICODE_STRING *a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  unsigned int i; // esi
  __int64 v8; // rax
  __int64 v9; // rdi

  v3 = 0;
  for ( i = -1073741162; v3 < *(_DWORD *)(a1 + 16); ++v3 )
  {
    v8 = sub_140797594(a1, v3, 0LL);
    v9 = v8;
    if ( v8 )
    {
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v8 + 136), a2, 1u) )
      {
        sub_1407981E8(v9, 0LL);
        i = 0;
        *a3 = v3;
        return i;
      }
      sub_1407981E8(v9, 0LL);
    }
  }
  return i;
}
