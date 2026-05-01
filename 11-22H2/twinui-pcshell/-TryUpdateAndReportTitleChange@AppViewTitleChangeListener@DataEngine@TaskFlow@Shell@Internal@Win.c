/*
 * XREFs of ?TryUpdateAndReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_K@Z @ 0x1802D7214
 * Callers:
 *     ?OnShellHookMessage@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_K_J@Z @ 0x1802D6FD0 (-OnShellHookMessage@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x1802D3736 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 *     ?ReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1802D703E (-ReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::TryUpdateAndReportTitleChange(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *this,
        __int64 a2)
{
  __int64 v2; // rdi
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *v3; // rbx
  int v4; // eax
  void **v5; // rdx
  const char *v6; // r9
  const char *v7; // r9
  void *Src[4]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  try
  {
    v2 = a2;
    v3 = this;
    (*(void (__fastcall **)(Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *, void **, __int64))(*(_QWORD *)this + 72LL))(
      this,
      Src,
      a2);
    LOBYTE(v4) = std::wstring::compare((char *)v3 + 112, (char *)Src);
    if ( v4 )
    {
      if ( (void **)((char *)v3 + 112) != Src )
      {
        v5 = Src;
        if ( Src[3] >= (void *)8 )
          v5 = (void **)Src[0];
        try
        {
          std::wstring::assign((char *)v3 + 112, v5, (unsigned __int64)Src[2]);
        }
        catch ( ... )
        {
          wil::details::in1diag3::Log_CaughtException(
            retaddr,
            (void *)0xA4,
            (int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
            v6);
          v3 = this;
          v2 = a2;
        }
      }
      Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::ReportTitleChange(
        (__int64)v3,
        v2,
        Src);
    }
    std::wstring::_Tidy_deallocate((__int64)Src);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xA9,
      (int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
      v7);
  }
}
