/*
 * XREFs of ?PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C00725D4
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0072BDC (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?PerformWin8DpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C01BADB4 (-PerformWin8DpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 */

__int64 __fastcall PerformLegacyDpiUpgrade(struct _UNICODE_STRING *a1, int a2)
{
  unsigned int v2; // ebx
  int v5; // ecx
  int v6; // eax
  int v8; // [rsp+34h] [rbp-1Ch] BYREF
  unsigned int v9; // [rsp+38h] [rbp-18h] BYREF
  int v10; // [rsp+3Ch] [rbp-14h]
  int v11; // [rsp+40h] [rbp-10h] BYREF

  v2 = 0;
  v8 = 0;
  v10 = 0;
  v11 = 0;
  FastGetProfileDword(a1, 4LL, L"Win8DpiScaling");
  FastGetProfileDword(a1, 4LL, L"DpiScalingVer");
  v9 = 0;
  FastGetProfileIntW(a1, 4LL, L"DesktopDPIOverride", 0xFFFFLL, &v11, 0);
  v5 = v11;
  if ( a2 || v11 != 0xFFFF )
    v6 = v10;
  else
    v6 = v10;
  v10 = v6;
  if ( v11 == 0xFFFF )
    v5 = 0;
  v11 = v5;
  DrvDxgkUpgradeLegacyDpiSettings(&v9, &v8);
  if ( v10 )
    *(_DWORD *)(gpsi + 2236LL) |= 0x20u;
  else
    *(_DWORD *)(gpsi + 2236LL) &= ~0x20u;
  FastWriteProfileValue(a1, 4LL, L"DpiScalingVer", 4LL);
  if ( v10 || v8 )
    return 1;
  return v2;
}
