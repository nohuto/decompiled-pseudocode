/*
 * XREFs of ??0Win32AppStateManager@@QEAA@XZ @ 0x1800A7084
 * Callers:
 *     ??$MakeOrThrow@VWin32AppStateManager@@$$V@wil@@YA?AV?$ComPtr@VWin32AppStateManager@@@WRL@Microsoft@@XZ @ 0x1800AA5AC (--$MakeOrThrow@VWin32AppStateManager@@$$V@wil@@YA-AV-$ComPtr@VWin32AppStateManager@@@WRL@Microso.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800AA164 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAppStateManager@AppLimits@FamilySafe.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
Win32AppStateManager *__fastcall Win32AppStateManager::Win32AppStateManager(Win32AppStateManager *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rax
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF
  char *v8; // [rsp+40h] [rbp+18h]

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::FamilySafety::AppLimits::IAppStateManager,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::FamilySafety::AppLimits::IAppStateManager,Microsoft::WRL::FtmBase>();
  *(_QWORD *)this = &Win32AppStateManager::`vftable'{for `Windows::Internal::FamilySafety::AppLimits::IAppStateManager'};
  *((_QWORD *)this + 1) = &Win32AppStateManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_DWORD *)this + 12) = SHTaskPoolGetUniqueContext();
  *((_QWORD *)this + 7) = 0LL;
  v8 = (char *)this + 64;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  v2 = operator new(0x50uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *((_QWORD *)this + 8) = v2;
  v8 = (char *)this + 80;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  v3 = operator new(0x48uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 10) = v3;
  *((_QWORD *)this + 12) = 0LL;
  v8 = (char *)this + 104;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  v4 = operator new(0x70uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *((_QWORD *)this + 13) = v4;
  *((_QWORD *)this + 15) = 0LL;
  v8 = (char *)this + 128;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(96LL);
  *(_QWORD *)v5 = v5;
  *(_QWORD *)(v5 + 8) = v5;
  *(_QWORD *)(v5 + 16) = v5;
  *(_WORD *)(v5 + 24) = 257;
  *((_QWORD *)this + 16) = v5;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 5;
  *((_DWORD *)this + 41) = 10;
  if ( (int)SHRegGetDWORD(
              HKEY_LOCAL_MACHINE,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Parental Controls\\AppLimits",
              L"TerminationMaxAttempts",
              &v7) >= 0
    && v7 - 1 <= 9 )
  {
    *((_DWORD *)this + 41) = v7;
  }
  if ( (int)SHRegGetDWORD(
              HKEY_LOCAL_MACHINE,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Parental Controls\\AppLimits",
              L"TerminationRetryWaitSeconds",
              &v7) >= 0
    && v7 - 1 <= 0x257 )
  {
    *((_DWORD *)this + 40) = v7;
  }
  return this;
}
