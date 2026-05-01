/*
 * XREFs of ?HandleHolographicHotkey@GamingOverlayExperienceManager@@AEAA_NXZ @ 0x1804001D4
 * Callers:
 *     ?OnMessage@GamingOverlayExperienceManager@@UEAAJI_K_J@Z @ 0x18006D530 (-OnMessage@GamingOverlayExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z @ 0x1803FFA68 (-GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall GamingOverlayExperienceManager::HandleHolographicHotkey(
        GamingOverlayExperienceManager *this,
        enum Windows::Internal::Shell::Holographic::UserDisplayContext *a2)
{
  int UserDisplayContext; // eax
  void (__fastcall *v5)(char *, GUID *, IUnknown **); // rbx
  int v6; // eax
  IUnknown *punk; // [rsp+20h] [rbp-10h] BYREF
  void *ppvOut; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  char v10; // [rsp+58h] [rbp+28h] BYREF
  int v11; // [rsp+60h] [rbp+30h] BYREF
  int v12; // [rsp+68h] [rbp+38h]

  v12 = 0;
  v10 = 0;
  v11 = 0;
  UserDisplayContext = Windows::Internal::Shell::Holographic::GetUserDisplayContext(
                         (Windows::Internal::Shell::Holographic *)&v11,
                         a2);
  if ( UserDisplayContext >= 0 )
  {
    if ( v11 == 1 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
      punk = 0LL;
      v12 = 2;
      v5 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 1) + 32LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
      v5((char *)this + 8, &GUID_00000000_0000_0000_c000_000000000046, &punk);
      LOBYTE(v5) = IUnknown_QueryService(
                     punk,
                     &GUID_40e2a5e3_4191_4768_937b_90416fbe69bd,
                     &GUID_40e2a5e3_4191_4768_937b_90416fbe69bd,
                     &ppvOut) >= 0;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
      if ( (_BYTE)v5 )
      {
        v6 = (*(__int64 (__fastcall **)(void *, __int64, char *))(*(_QWORD *)ppvOut + 48LL))(ppvOut, 2LL, &v10);
        if ( v6 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1071,
            (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
            (const char *)(unsigned int)v6);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
    }
    return v10 != 0;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1062,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)UserDisplayContext);
    return 0;
  }
}
