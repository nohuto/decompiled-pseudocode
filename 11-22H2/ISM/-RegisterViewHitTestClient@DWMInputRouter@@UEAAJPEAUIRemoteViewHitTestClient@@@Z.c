/*
 * XREFs of ?RegisterViewHitTestClient@DWMInputRouter@@UEAAJPEAUIRemoteViewHitTestClient@@@Z @ 0x1801C7310
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBUtagMsgRoutingInfo@@@Z @ 0x1801C50B8 (--$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@V-$ComPtr.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMInputRouter::RegisterViewHitTestClient(DWMInputRouter *this, struct IRemoteViewHitTestClient *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rbx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v11; // [rsp+20h] [rbp-29h] BYREF
  __int64 v12; // [rsp+28h] [rbp-21h] BYREF
  _BYTE v13[16]; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v14[16]; // [rsp+40h] [rbp-9h] BYREF
  int v15; // [rsp+50h] [rbp+7h]
  int v16; // [rsp+54h] [rbp+Bh]
  _DWORD v17[10]; // [rsp+60h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v11 = 0LL;
  v4 = *((_QWORD *)this + 16);
  v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 32LL);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v11);
  v6 = v5(v4, &v11);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x84A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v6,
      v11);
  v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v11 + 24LL))(v11, v14);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x84C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v7,
      v11);
  v17[0] = v15;
  v17[1] = v16;
  v8 = std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>>,0>>::_Try_emplace<tagMsgRoutingInfo const &,>(
         (float *)this + 172,
         (__int64)v13,
         (__int64)v17);
  v9 = *(_QWORD *)v8;
  if ( *(struct IRemoteViewHitTestClient **)(*(_QWORD *)v8 + 56LL) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IRemoteViewHitTestClient *))(*(_QWORD *)a2 + 8LL))(a2);
    v12 = *(_QWORD *)(v9 + 56);
    *(_QWORD *)(v9 + 56) = a2;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v12);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v11);
  return 0LL;
}
