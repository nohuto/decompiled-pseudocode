/*
 * XREFs of ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKK_KPEAPEAUIInputTarget@@@Z @ 0x18019A3E8
 * Callers:
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x18003CFB0 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800F172C (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInputHostTargetForProcessId@DWMInputRouter@@IEAAPEAUIInputTarget@@K@Z @ 0x18019A83C (-GetInputHostTargetForProcessId@DWMInputRouter@@IEAAPEAUIInputTarget@@K@Z.c)
 *     ?Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KK_KPEAPEAU2@@Z @ 0x18019C4DC (-Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KK_KPEAPEAU2@@Z.c)
 *     ?Create@DWMLegacyInputTarget@@SAJKKK_KPEAPEAUIInputTarget@@@Z @ 0x18019CD60 (-Create@DWMLegacyInputTarget@@SAJKKK_KPEAPEAUIInputTarget@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::CreateAndRegisterTarget(
        DWMInputRouter *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        struct IInputTarget **a6)
{
  struct IInputTarget *InputHostTargetForProcessId; // rbx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rdx
  __int64 v14[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  InputHostTargetForProcessId = DWMInputRouter::GetInputHostTargetForProcessId(this, a2);
  v14[0] = (__int64)InputHostTargetForProcessId;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v14);
  if ( InputHostTargetForProcessId )
  {
    v10 = DWMFocusedInputTarget::Create(InputHostTargetForProcessId, a3, a4, a5, a6);
    v11 = retaddr;
    if ( v10 < 0 )
    {
      v12 = 933LL;
LABEL_6:
      wil::details::in1diag3::_Log_Hr(
        v11,
        v12,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v10);
    }
  }
  else
  {
    v10 = DWMLegacyInputTarget::Create(a2, a3, a4, a5, a6);
    v11 = retaddr;
    if ( v10 < 0 )
    {
      v12 = 942LL;
      goto LABEL_6;
    }
  }
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(v14);
  return 0LL;
}
