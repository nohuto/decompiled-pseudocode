/*
 * XREFs of ??R_lambda_55b1f7175feb20028fed27b00f720bea_@@QEBAJXZ @ 0x180076FAC
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_55b1f7175feb20028fed27b00f720bea_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x18007A700 (-Run@-$CTaskWrapper@V_lambda_55b1f7175feb20028fed27b00f720bea_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800324E8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007A3C0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18007A3C0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall _lambda_55b1f7175feb20028fed27b00f720bea_::operator()(_QWORD *a1)
{
  int v2; // eax
  __int64 v3; // r14
  __int64 (__fastcall *v4)(__int64, __int64, __int64); // r15
  __int64 v5; // rdi
  __int64 v6; // rbx
  int v7; // eax
  DWORD v8; // eax
  const char *v9; // r9
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h]

  v13 = 0LL;
  v2 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::QueryInterface(
         *a1,
         &GUID_2ca00e16_9460_4359_8491_cb98b6b53c0a,
         &v13);
  try
  {
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        6136LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v2,
        v11);
    v3 = a1[4];
    v4 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 24LL);
    v5 = a1[3];
    v14 = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = v13;
    v7 = v4(v3, v5, v13);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        283LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v7,
        v11);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v8 = WaitForSingleObjectEx(*(HANDLE *)(a1[1] + 80LL), 0xFFFFFFFF, 0);
    if ( v8 != 258 && v8 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        2572LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
        v9);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x11F,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
                           v9);
  }
  return result;
}
