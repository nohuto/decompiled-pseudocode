/*
 * XREFs of ?IsSpatializerAllowed@CProcess@@UEAA_NXZ @ 0x180014790
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180015BC0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x1800165A0 (__security_check_cookie.c)
 *     ?GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ @ 0x18001C500 (-GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800233A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall CProcess::IsSpatializerAllowed(CProcess *this)
{
  __int64 v1; // rax
  int v2; // eax
  bool v3; // bl
  __int64 v5; // [rsp+20h] [rbp-40h] BYREF
  __int64 *v6; // [rsp+28h] [rbp-38h] BYREF
  HSTRING string; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v6 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Graphics.Holographic.HolographicDisplay", 0x2Fu, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  if ( (int)RoGetActivationFactory(string, &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, &v6) >= 0 )
  {
    v1 = *v6;
    v5 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v1 + 64))(v6, &v5);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF61,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)v2,
        v5);
    if ( v5 )
    {
      v3 = (unsigned int)CWindowsPolicyManager::GetAccessibilityAudioMonoMixState(g_PolicyManager) == 0;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v5);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v6);
      return v3;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v5);
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64 *))(*v6 + 16))(v6);
  return 0;
}
