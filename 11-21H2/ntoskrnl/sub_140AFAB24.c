/*
 * XREFs of sub_140AFAB24 @ 0x140AFAB24
 * Callers:
 *     sub_140AF968C @ 0x140AF968C (sub_140AF968C.c)
 * Callees:
 *     strstr @ 0x1403E0C40 (strstr.c)
 */

void __fastcall sub_140AFAB24(__int64 a1, __int64 a2)
{
  const char *v3; // rcx
  __int16 v4; // ax

  if ( (!a2 || (v3 = *(const char **)(a2 + 216)) == 0LL || !strstr(v3, "FORCELEGACYPLATFORM"))
    && *(_BYTE *)(a1 + 8) >= 5u )
  {
    if ( (*(_DWORD *)(a1 + 112) & 0x100000) != 0 )
      dword_140C0C60C &= ~1u;
    v4 = *(_WORD *)(a1 + 109);
    if ( (v4 & 2) == 0 )
    {
      dword_140C0C60C &= ~2u;
      v4 = *(_WORD *)(a1 + 109);
    }
    if ( (v4 & 0x20) != 0 )
      dword_140C0C60C &= ~4u;
    off_140C01EB0[0] = (__int64 (__fastcall *)())sub_1408653B0;
    if ( (*(_DWORD *)(a1 + 112) & 0x200000) != 0 )
      dword_140C0C60C |= 8u;
  }
}
