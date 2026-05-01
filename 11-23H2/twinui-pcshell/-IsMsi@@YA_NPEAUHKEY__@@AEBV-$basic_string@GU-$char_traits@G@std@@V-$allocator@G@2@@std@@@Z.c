/*
 * XREFs of ?IsMsi@@YA_NPEAUHKEY__@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180633D78
 * Callers:
 *     ?ModifyUnpackagedApp@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N1@Z @ 0x180634138 (-ModifyUnpackagedApp@@YAXV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_N1@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsMsi(HKEY a1, const WCHAR *a2)
{
  INSTALLSTATE ProductStateW; // eax
  DWORD v5[6]; // [rsp+30h] [rbp-18h] BYREF
  DWORD v6; // [rsp+60h] [rbp+18h] BYREF
  int v7; // [rsp+68h] [rbp+20h] BYREF

  v6 = 4;
  if ( RegQueryValueExW(a1, L"WindowsInstaller", 0LL, v5, (LPBYTE)&v7, &v6) || v7 != 1 )
    return 0;
  if ( *((_QWORD *)a2 + 3) >= 8uLL )
    a2 = *(const WCHAR **)a2;
  ProductStateW = MsiQueryProductStateW(a2);
  return ProductStateW == INSTALLSTATE_DEFAULT || ProductStateW == INSTALLSTATE_ADVERTISED;
}
