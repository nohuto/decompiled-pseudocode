/*
 * XREFs of ?IsMsi@@YA_NPEAUHKEY__@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180575F68
 * Callers:
 *     ?ModifyUnpackagedApp@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N1@Z @ 0x180576314 (-ModifyUnpackagedApp@@YAXV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_N1@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsMsi(HKEY a1, const WCHAR *a2)
{
  DWORD v4[6]; // [rsp+30h] [rbp-18h] BYREF
  DWORD v5; // [rsp+60h] [rbp+18h] BYREF
  int v6; // [rsp+68h] [rbp+20h] BYREF

  v5 = 4;
  if ( RegQueryValueExW(a1, L"WindowsInstaller", 0LL, v4, (LPBYTE)&v6, &v5) || v6 != 1 )
    return 0;
  if ( *((_QWORD *)a2 + 3) >= 8uLL )
    a2 = *(const WCHAR **)a2;
  return ((MsiQueryProductStateW(a2) - 1) & 0xFFFFFFFB) == 0;
}
