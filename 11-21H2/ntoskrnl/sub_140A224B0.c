/*
 * XREFs of sub_140A224B0 @ 0x140A224B0
 * Callers:
 *     sub_140A22034 @ 0x140A22034 (sub_140A22034.c)
 * Callees:
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     wcsnlen @ 0x1403E3480 (wcsnlen.c)
 */

bool __fastcall sub_140A224B0(_DWORD *a1, __int64 a2)
{
  const wchar_t *v3; // rcx
  bool result; // al

  result = 0;
  if ( a1[5] )
  {
    if ( (a1[3] & 4) != 0 && a1[6] >= 0x18u )
      return 1;
    v3 = (const wchar_t *)(a2
                         + 12
                         + 2
                         * (wcsnlen((const wchar_t *)(a2 + 12), (unsigned __int64)*(unsigned int *)(a2 + 4) >> 1) + 1));
    if ( (unsigned __int64)v3 < (unsigned __int64)*(unsigned int *)(a2 + 4) + a2 + 12
      && !wcsicmp(v3, L"\\EFI\\Microsoft\\Boot\\bootmgfw.efi") )
    {
      return 1;
    }
  }
  return result;
}
