/*
 * XREFs of sub_1C004D6F0 @ 0x1C004D6F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0008990 @ 0x1C0008990 (sub_1C0008990.c)
 *     sub_1C0008B84 @ 0x1C0008B84 (sub_1C0008B84.c)
 *     sub_1C004B778 @ 0x1C004B778 (sub_1C004B778.c)
 *     sub_1C004D914 @ 0x1C004D914 (sub_1C004D914.c)
 */

void __fastcall sub_1C004D6F0(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  if ( a2 && sub_1C0008B84(a2) )
  {
    v3 = *(_QWORD *)(a2 + 1792);
    if ( (*(_DWORD *)(v3 + 148) & 1) != 0 )
    {
      if ( (byte_1C0093A06 & 8) != 0 )
        sub_1C004B778(
          a2 + 169,
          a2 + 160,
          a2 + 2024,
          *(const wchar_t **)(*(_QWORD *)(a2 + 24) + 4656LL),
          *(_QWORD *)(a2 + 24) + 5000LL,
          *(_DWORD *)(*(_QWORD *)(a2 + 24) + 56LL),
          *(_BYTE *)(a2 + 96),
          *(_BYTE *)(a2 + 97),
          *(_BYTE *)(a2 + 98),
          a2 + 2024,
          (const char *)(a2 + 160),
          (const char *)(a2 + 169),
          (const char *)(a2 + 186),
          *(_DWORD *)(v3 + 144) == 0,
          *(_DWORD *)(v3 + 144));
      *(_DWORD *)(*(_QWORD *)(a2 + 1792) + 148LL) &= ~1u;
      sub_1C0008990(a2, 0, 0, 0LL);
      if ( *(_DWORD *)(*(_QWORD *)(a2 + 1792) + 144LL) )
        sub_1C004D914(a2);
      else
        *(_QWORD *)(*(_QWORD *)(a2 + 1792) + 136LL) = MEMORY[0xFFFFF78000000014];
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 1784));
  }
}
