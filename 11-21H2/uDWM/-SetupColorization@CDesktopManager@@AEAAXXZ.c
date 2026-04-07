/*
 * XREFs of ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x18005BCF8
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180016690 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 * Callees:
 *     ?ApplyColorizationParameters@CDesktopManager@@QEAAXPEBVCGlassColorizationParameters@@@Z @ 0x18000B154 (-ApplyColorizationParameters@CDesktopManager@@QEAAXPEBVCGlassColorizationParameters@@@Z.c)
 *     ?CheckAnyPolicy@CDesktopManager@@SA_NK@Z @ 0x18000B3F8 (-CheckAnyPolicy@CDesktopManager@@SA_NK@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDesktopManager::SetupColorization(CDesktopManager *this)
{
  char *v1; // rdi
  unsigned int v3; // ecx
  unsigned int v4; // eax
  int v5; // [rsp+30h] [rbp-39h] BYREF
  int v6; // [rsp+34h] [rbp-35h] BYREF
  int v7; // [rsp+38h] [rbp-31h] BYREF
  int v8; // [rsp+3Ch] [rbp-2Dh] BYREF
  _QWORD v9[14]; // [rsp+40h] [rbp-29h] BYREF

  v1 = (char *)this + 460;
  *((_DWORD *)this + 116) = 0;
  *((_DWORD *)this + 118) = 0;
  *((_DWORD *)this + 121) = 0;
  *((_DWORD *)this + 115) = -12542210;
  *((_DWORD *)this + 117) = 27;
  *((_DWORD *)this + 119) = 73;
  *((_DWORD *)this + 120) = 1;
  if ( (unsigned __int8)CDesktopManager::CheckAnyPolicy(2u) )
    goto LABEL_14;
  v9[1] = v1;
  v9[0] = L"ColorizationColor";
  v9[2] = L"ColorizationColorBalance";
  v9[3] = (char *)this + 468;
  v9[4] = L"ColorizationAfterglow";
  v9[5] = (char *)this + 464;
  v9[6] = L"ColorizationAfterglowBalance";
  v9[7] = (char *)this + 472;
  v9[8] = L"ColorizationBlurBalance";
  v9[9] = (char *)this + 476;
  v9[10] = L"EnableWindowColorization";
  v9[11] = (char *)this + 480;
  v9[12] = L"ColorizationGlassAttribute";
  v9[13] = (char *)this + 484;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                   + 8)
                                                                + 40LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8),
         0LL,
         v9,
         7LL) < 0 )
  {
LABEL_14:
    if ( (unsigned __int8)CDesktopManager::CheckAnyPolicy(4u) )
    {
      v8 = 0;
      (***((void (__fastcall ****)(_QWORD, const wchar_t *, int *))CDesktopManager::s_pDesktopManagerInstance + 8))(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8),
        L"DefaultColorizationColorAlpha",
        &v8);
      v5 = 0;
      (***((void (__fastcall ****)(_QWORD, const wchar_t *, int *))CDesktopManager::s_pDesktopManagerInstance + 8))(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8),
        L"DefaultColorizationColorRed",
        &v5);
      v6 = 0;
      (***((void (__fastcall ****)(_QWORD, const wchar_t *, int *))CDesktopManager::s_pDesktopManagerInstance + 8))(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8),
        L"DefaultColorizationColorGreen",
        &v6);
      v7 = 0;
      (***((void (__fastcall ****)(_QWORD, const wchar_t *, int *))CDesktopManager::s_pDesktopManagerInstance + 8))(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8),
        L"DefaultColorizationColorBlue",
        &v7);
      *((_DWORD *)v1 + 1) = 0;
      *((_DWORD *)v1 + 3) = 0;
      *((_DWORD *)v1 + 6) = 0;
      v3 = 100 * v8;
      v4 = v5 | 0xFFFFFF00;
      *((_DWORD *)v1 + 2) = 27;
      *(_DWORD *)v1 = v7 | ((v6 | (v4 << 8)) << 8);
      *((_DWORD *)v1 + 4) = 73;
      *((_DWORD *)v1 + 5) = 1;
      *((_DWORD *)this + 119) = 100 - v3 / 0xFF;
      *((_DWORD *)this + 117) = v3 / 0xFF;
    }
  }
  if ( *((_DWORD *)this + 117) > 0x64u )
    *((_DWORD *)this + 117) = 27;
  if ( *((_DWORD *)this + 118) > 0x64u )
    *((_DWORD *)this + 118) = 0;
  if ( *((_DWORD *)this + 119) > 0x64u )
    *((_DWORD *)this + 119) = 73;
  CDesktopManager::ApplyColorizationParameters(this, (const struct CGlassColorizationParameters *)v1);
}
