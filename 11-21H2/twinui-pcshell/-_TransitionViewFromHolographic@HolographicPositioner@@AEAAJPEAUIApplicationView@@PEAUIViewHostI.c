/*
 * XREFs of ?_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1803D3728
 * Callers:
 *     ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803D0EF4 (-_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803D2038 (-_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x1800F2578 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18014F19C (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     _LogEventWithViewHostItemData__ @ 0x1803CC618 (_LogEventWithViewHostItemData__.c)
 *     ??4?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1803CCFAC (--4-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEA.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1803D1ADC (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     ?_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransitionDirection@@@Z @ 0x1803D35F0 (-_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransit.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HolographicPositioner::_TransitionViewFromHolographic(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct Windows::Internal::Shell::Holographic::IViewHostItem *a3)
{
  struct Windows::Internal::Shell::Holographic::IViewHostItem *v3; // rbx
  char *ViewHostItem; // rax
  ApplicationViewOperation *v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  ApplicationViewOperation *v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  __m256i v16; // [rsp+30h] [rbp-30h] OVERLAPPED
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct Windows::Internal::Shell::Holographic::IViewHostItem *v18; // [rsp+90h] [rbp+30h] BYREF
  ApplicationViewOperation *v19; // [rsp+98h] [rbp+38h] BYREF

  v3 = a3;
  v18 = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
  if ( v3 )
    goto LABEL_23;
  ViewHostItem = (char *)HolographicPositioner::_FindViewHostItem((__int64)this, &v19);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::operator=((__int64 *)&v18, ViewHostItem);
  v7 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(ApplicationViewOperation *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v3 = v18;
  if ( v18 )
  {
LABEL_23:
    if ( *((_QWORD *)this + 29) )
    {
      LogEventWithViewHostItemData__(
        (__int64)v3,
        (void (__fastcall *)(PCWSTR *, int *))HolographicPositionerTelemetry::TransitionViewFromHolographic<unsigned short const *,unsigned int &>);
      v8 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::Shell::Holographic::IViewHostItem *))(**((_QWORD **)this + 29) + 56LL))(
             *((_QWORD *)this + 29),
             v3);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 1836LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v8);
        goto LABEL_18;
      }
      v16.m256i_i64[0] = 0LL;
      *(__m128i *)((char *)&v16.m256i_u64[1] + 4) = _mm_load_si128((const __m128i *)&_xmm);
      v16.m256i_i32[2] = 0;
      Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v19);
      v11 = v19;
      if ( !v19 )
      {
        v9 = -2147024882;
        v12 = 2147942414LL;
        v13 = 1844LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)v12);
        Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v19);
        goto LABEL_18;
      }
      *(_OWORD *)((char *)v19 + 132) = 0LL;
      *(__m256i *)((char *)v11 + 148) = v16;
      *((_BYTE *)v11 + 128) = 1;
      v14 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 320LL))(a2);
      v9 = v14;
      if ( v14 < 0 )
      {
        v12 = (unsigned int)v14;
        v13 = 1846LL;
        goto LABEL_12;
      }
      Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v19);
    }
    v8 = HolographicPositioner::_SendViewTransitionNotification((__int64)this, (__int64)a2, 1);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 1849LL;
      goto LABEL_16;
    }
  }
  v9 = 0;
LABEL_18:
  if ( v3 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::Holographic::IViewHostItem *))(*(_QWORD *)v3 + 16LL))(v3);
  return v9;
}
