/*
 * XREFs of ?GetLogo@TrayInfoTipDisplayInfo@SystemTray@@UEAAJUSize@Foundation@Windows@@PEAPEAUIRandomAccessStreamReference@Streams@Storage@5@@Z @ 0x180492C60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemTray::TrayInfoTipDisplayInfo::GetLogo(__int64 a1, __int64 a2, _QWORD *a3)
{
  int ActivationFactory; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER v10; // [rsp+28h] [rbp-30h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a3 = 0LL;
  v9 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v10,
    L"Windows.Storage.Streams.RandomAccessStreamReference",
    0x34u,
    0x33u);
  ActivationFactory = RoGetActivationFactory(v11, &GUID_857309dc_3fbf_4e7d_986f_ef3b1a07a964, &v9);
  v6 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v9 + 64LL))(
                          v9,
                          *(_QWORD *)(a1 + 80),
                          a3);
    v6 = ActivationFactory;
    if ( ActivationFactory >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v7 = 165LL;
  }
  else
  {
    v7 = 164LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_7:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v9);
  return v6;
}
