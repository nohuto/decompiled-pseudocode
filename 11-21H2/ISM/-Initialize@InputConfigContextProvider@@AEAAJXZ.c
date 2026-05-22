/*
 * XREFs of ?Initialize@InputConfigContextProvider@@AEAAJXZ @ 0x180041088
 * Callers:
 *     ?Create@InputConfigContextProvider@@CAJPEAPEAV1@@Z @ 0x180040FF8 (-Create@InputConfigContextProvider@@CAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z@std@@@Z @ 0x18004112C (-Initialize@-$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSes.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputConfigContextProvider::Initialize(
        InputConfigContextProvider *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v5; // eax
  __int64 v6; // r8
  unsigned int v7; // ebx
  _QWORD v9[8]; // [rsp+20h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  __int64 v11; // [rsp+78h] [rbp+18h] BYREF

  if ( !ISMScenarios::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
      a4);
  if ( *(_DWORD *)ISMScenarios::s_instance )
    return 0LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v11);
  v5 = CoreUICreate(&v11);
  v7 = v5;
  if ( v5 >= 0 )
  {
    v9[0] = off_1801DC810;
    v9[1] = this;
    v9[7] = v9;
    ((void (__fastcall *)(char *, __int64 *, __int64, _QWORD *))KernelInputConnection<_MIT_INPUT_CONFIG_MESSAGE>::Initialize)(
      (char *)this + 88,
      &v11,
      v6,
      v9);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v11);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x33,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\inputconfigcontextprovider.cpp",
    (const char *)(unsigned int)v5,
    v9[0]);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v11);
  return v7;
}
