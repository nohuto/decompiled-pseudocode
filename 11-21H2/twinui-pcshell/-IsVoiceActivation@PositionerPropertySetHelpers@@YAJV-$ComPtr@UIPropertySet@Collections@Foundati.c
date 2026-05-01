/*
 * XREFs of ?IsVoiceActivation@PositionerPropertySetHelpers@@YAJV?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@PEA_N@Z @ 0x18014735C
 * Callers:
 *     ?ShouldHandleActivation@VoiceAssistantPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180092450 (-ShouldHandleActivation@VoiceAssistantPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180097FF0 (-ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAE@Z @ 0x1800937C8 (-HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAE@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802E6814 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall PositionerPropertySetHelpers::IsVoiceActivation(__int64 *a1, char *a2)
{
  __int64 v4; // rcx
  char v5; // bl
  HRESULT v6; // eax
  int v7; // edx
  unsigned int v8; // r8d
  unsigned __int8 v10[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11[2]; // [rsp+28h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-30h] BYREF
  HSTRING string; // [rsp+50h] [rbp-18h] BYREF

  v11[1] = (__int64)a1;
  v4 = *a1;
  v11[0] = v4;
  v5 = 0;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  string = 0LL;
  v6 = WindowsCreateStringReference(L"IsVoiceActivation", 0x11u, &hstringHeader, &string);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6, v7, v8);
LABEL_8:
    v5 = 1;
    goto LABEL_6;
  }
  if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::HasKey(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)v11,
              string,
              v10) >= 0
    && v10[0] )
  {
    goto LABEL_8;
  }
LABEL_6:
  *a2 = v5;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v11);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
  return 0LL;
}
