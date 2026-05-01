/*
 * XREFs of ?_NotifyWin32VtcAppManagerOfSidebarEviction@PPIWin32VtcLayoutOperation@@MEAAJXZ @ 0x180516BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PPIWin32VtcLayoutOperation::_NotifyWin32VtcAppManagerOfSidebarEviction(
        PPIWin32VtcLayoutOperation *this)
{
  int ActivationFactory; // eax
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, __int64 *); // rdi
  __int64 v7; // [rsp+20h] [rbp-40h] BYREF
  __int64 v8; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  __int64 v10; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v8 = 0LL;
  v7 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
  v10 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.Vtc.Win32VtcAppManager",
    0x28u,
    0x27u);
  ActivationFactory = RoGetActivationFactory(v10, &GUID_891d562f_7e54_589d_9f16_5e4fbb2f16c5, &v7);
  v2 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v4 = v7;
    v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 56LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
    ActivationFactory = v5(v4, &v8);
    v2 = ActivationFactory;
    if ( ActivationFactory >= 0 )
    {
      ActivationFactory = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 72LL))(v8);
      v2 = ActivationFactory;
      if ( ActivationFactory >= 0 )
      {
        v2 = 0;
        goto LABEL_9;
      }
      v3 = 779LL;
    }
    else
    {
      v3 = 776LL;
    }
  }
  else
  {
    v3 = 775LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
  return v2;
}
