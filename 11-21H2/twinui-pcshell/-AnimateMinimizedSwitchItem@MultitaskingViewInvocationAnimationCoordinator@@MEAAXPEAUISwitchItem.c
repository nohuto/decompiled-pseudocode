/*
 * XREFs of ?AnimateMinimizedSwitchItem@MultitaskingViewInvocationAnimationCoordinator@@MEAAXPEAUISwitchItemElement@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1804C83E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_64a157c7491276baeb84d23bfd8f55fb___lambda_206313859f817381264bae84b9bbf37b_____lambda_64a157c7491276baeb84d23bfd8f55fb__&__lambda_206313859f817381264bae84b9bbf37b__&_IDCompBatchAnimationCallback___&_ @ 0x1804C8278 (Microsoft--WRL--Details--Make_DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_64a157c74.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MultitaskingViewInvocationAnimationCoordinator::AnimateMinimizedSwitchItem(
        MultitaskingViewInvocationAnimationCoordinator *this,
        struct ISwitchItemElement *a2,
        struct IDCompBatchAnimationCallback *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r8
  void (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rbx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v15; // [rsp+50h] [rbp+20h] BYREF
  struct IDCompBatchAnimationCallback *v16; // [rsp+58h] [rbp+28h] BYREF
  void (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp+30h] BYREF

  v15 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  v16 = a3;
  v15 = 0LL;
  Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_64a157c7491276baeb84d23bfd8f55fb___lambda_206313859f817381264bae84b9bbf37b_____lambda_64a157c7491276baeb84d23bfd8f55fb_____lambda_206313859f817381264bae84b9bbf37b____IDCompBatchAnimationCallback_____(
    &v17,
    v6,
    v7,
    (__int64 *)&v16);
  v9 = v17;
  if ( v17 )
    (**v17)(v17, &GUID_bac5f55a_ba7c_414c_b599_fbf850f553c6, &v15);
  if ( v9 )
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v9)[2])(v9);
  if ( !*((_QWORD *)this + 12) )
  {
    v10 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *, _QWORD, __int64, _QWORD, __int64))(*(_QWORD *)a2 + 56LL))(
            a2,
            0LL,
            v8,
            0LL,
            v15);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x26,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewinvocationanimationcoordinator.cpp",
        (const char *)(unsigned int)v10);
    v11 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 1LL);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x27,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewinvocationanimationcoordinator.cpp",
        (const char *)(unsigned int)v11);
  }
  v12 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *, _QWORD, __int64, __int64))(*(_QWORD *)a2 + 48LL))(
          a2,
          0LL,
          10LL,
          v15);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2A,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewinvocationanimationcoordinator.cpp",
      (const char *)(unsigned int)v12);
  v13 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *, __int64, __int64, __int64))(*(_QWORD *)a2 + 48LL))(
          a2,
          1LL,
          11LL,
          v15);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2B,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewinvocationanimationcoordinator.cpp",
      (const char *)(unsigned int)v13);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
}
