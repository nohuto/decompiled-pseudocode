/*
 * XREFs of ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x18003D5F0
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18003A654 (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?CheckAnyPolicy@CDesktopManager@@SA_NK@Z @ 0x18003D77C (-CheckAnyPolicy@CDesktopManager@@SA_NK@Z.c)
 *     ?ApplyColorizationParameters@CDesktopManager@@QEAA_NPEAVCGlassColorizationParameters@@@Z @ 0x18003D7A8 (-ApplyColorizationParameters@CDesktopManager@@QEAA_NPEAVCGlassColorizationParameters@@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDesktopManager::SetupColorization(CDesktopManager *this)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d
  unsigned int v4; // edx
  int v5; // [rsp+30h] [rbp-69h] BYREF
  int v6; // [rsp+34h] [rbp-65h] BYREF
  int v7; // [rsp+38h] [rbp-61h] BYREF
  int v8; // [rsp+3Ch] [rbp-5Dh] BYREF
  unsigned int v9; // [rsp+40h] [rbp-59h] BYREF
  int v10; // [rsp+44h] [rbp-55h] BYREF
  __int64 v11; // [rsp+48h] [rbp-51h] BYREF
  int v12; // [rsp+50h] [rbp-49h] BYREF
  __int64 v13; // [rsp+54h] [rbp-45h] BYREF
  _QWORD v14[14]; // [rsp+60h] [rbp-39h] BYREF

  v9 = -12542210;
  v10 = 0;
  v13 = 1LL;
  v11 = 27LL;
  v12 = 73;
  if ( !CDesktopManager::CheckAnyPolicy(2u) )
  {
    v14[0] = L"ColorizationColor";
    v14[1] = &v9;
    v14[2] = L"ColorizationColorBalance";
    v14[3] = &v11;
    v14[4] = L"ColorizationAfterglow";
    v14[5] = &v10;
    v14[6] = L"ColorizationAfterglowBalance";
    v14[7] = (char *)&v11 + 4;
    v14[8] = L"ColorizationBlurBalance";
    v14[9] = &v12;
    v14[10] = L"EnableWindowColorization";
    v14[11] = &v13;
    v14[12] = L"ColorizationGlassAttribute";
    v14[13] = (char *)&v13 + 4;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                     + 9)
                                                                  + 40LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9),
           0LL,
           v14,
           7LL) >= 0 )
      goto LABEL_3;
  }
  if ( CDesktopManager::CheckAnyPolicy(4u) )
  {
    v8 = 0;
    (***((void (__fastcall ****)(_QWORD, const wchar_t *, int *))CDesktopManager::s_pDesktopManagerInstance + 9))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9),
      L"DefaultColorizationColorAlpha",
      &v8);
    v5 = 0;
    (***((void (__fastcall ****)(_QWORD, const wchar_t *, int *))CDesktopManager::s_pDesktopManagerInstance + 9))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9),
      L"DefaultColorizationColorRed",
      &v5);
    v6 = 0;
    (***((void (__fastcall ****)(_QWORD, const wchar_t *, int *))CDesktopManager::s_pDesktopManagerInstance + 9))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9),
      L"DefaultColorizationColorGreen",
      &v6);
    v7 = 0;
    (***((void (__fastcall ****)(_QWORD, const wchar_t *, int *))CDesktopManager::s_pDesktopManagerInstance + 9))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9),
      L"DefaultColorizationColorBlue",
      &v7);
    v3 = 0;
    v10 = 0;
    v9 = v7 | ((v6 | ((v5 | 0xFFFFFF00) << 8)) << 8);
    v13 = 1LL;
    v4 = 100 * v8 / 0xFFu;
    v2 = 100 - *((_DWORD *)this + 121);
  }
  else
  {
LABEL_3:
    v2 = v12;
    v3 = HIDWORD(v11);
    v4 = v11;
  }
  if ( v4 > 0x64 )
    v4 = 27;
  LODWORD(v11) = v4;
  if ( v3 > 0x64 )
    v3 = 0;
  HIDWORD(v11) = v3;
  if ( v2 > 0x64 )
    v2 = 73;
  v12 = v2;
  CDesktopManager::ApplyColorizationParameters(this, (struct CGlassColorizationParameters *)&v9);
}
