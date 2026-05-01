/*
 * XREFs of ?InvokeInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@UViewOptions@@@Z @ 0x180524A60
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x180526850 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewShowingResponseEventArgs@45678@@Z @ 0x180527AE0 (-OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x18022B2D4 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x1802D2954 (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@URect@Foundation@Windows@winrt@@@?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@QEAAPEAURect@Foundation@Windows@winrt@@QEAU2345@$$QEAU2345@@Z @ 0x18052085C (--$_Emplace_reallocate@URect@Foundation@Windows@winrt@@@-$vector@URect@Foundation@Windows@winrt@.c)
 *     ??$as@UIViewOptions@Text@Shell@Internal@Windows@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIViewOptions@Text@Shell@Internal@Windows@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180520CFC (--$as@UIViewOptions@Text@Shell@Internal@Windows@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@.c)
 *     ??$make@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@@winrt@@YA?A_P$$QEAV?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@@Z @ 0x180520D64 (--$make@U-$vector_impl@URect@Foundation@Windows@winrt@@V-$vector@URect@Foundation@Windows@winrt@.c)
 *     ??$make@UInputViewOptions@implementation@KeyboardHosting@Shell@Internal@Windows@winrt@@AEA_NAEA_NAEA_NAEA_NW4ViewAnimationKind@Text@4567@W4ViewEffectKind@94567@W4ViewZOrder@94567@URect@Foundation@67@AEAU?$IVectorView@URect@Foundation@Windows@winrt@@@Collections@Foundation@67@@winrt@@YA?A_PAEA_N000$$QEAW4ViewAnimationKind@Text@Shell@Internal@Windows@0@$$QEAW4ViewEffectKind@23450@$$QEAW4ViewZOrder@23450@$$QEAURect@Foundation@50@AEAU?$IVectorView@URect@Foundation@Windows@winrt@@@Collections@950@@Z @ 0x180520E14 (--$make@UInputViewOptions@implementation@KeyboardHosting@Shell@Internal@Windows@winrt@@AEA_NAEA_.c)
 *     ?GetView@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowId@UI@45@@impl@winrt@@QEBA@XZ @ 0x180523C1C (-GetView@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UWindowId@UI@Windows@winrt@.c)
 *     ?_Reallocate_exactly@?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x18052E838 (-_Reallocate_exactly@-$vector@URect@Foundation@Windows@winrt@@V-$allocator@URect@Foundation@Wind.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall KeyboardHosting::TabTipAdapter::InvokeInputAppRequestedShow(
        __int64 a1,
        unsigned int a2,
        int *a3,
        __int64 a4)
{
  unsigned __int64 v8; // rdx
  __int128 *v9; // rbx
  __int128 *v10; // rsi
  _BYTE *v11; // rdx
  __int128 v12; // xmm0
  __int128 v13; // xmm6
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(__int64, _QWORD, __int128 *, _QWORD); // r14
  __int64 v16; // rbx
  int v17; // eax
  const char *v18; // r9
  __int64 result; // rax
  int v20; // [rsp+20h] [rbp-C8h]
  __int128 v21; // [rsp+50h] [rbp-98h] BYREF
  __int128 v22; // [rsp+60h] [rbp-88h] BYREF
  int v23; // [rsp+70h] [rbp-78h] BYREF
  int v24; // [rsp+74h] [rbp-74h] BYREF
  __int64 (__fastcall ***v25)(_QWORD, void *, __int64 *); // [rsp+78h] [rbp-70h] BYREF
  void *v26; // [rsp+80h] [rbp-68h] BYREF
  __int128 v27; // [rsp+88h] [rbp-60h] BYREF
  _BYTE *v28; // [rsp+98h] [rbp-50h]
  __int64 v29; // [rsp+A0h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  try
  {
    v29 = a4;
    v27 = 0LL;
    v28 = 0LL;
    v8 = (__int64)(*(_QWORD *)(a4 + 40) - *(_QWORD *)(a4 + 32)) >> 4;
    if ( v8 )
    {
      if ( v8 > 0xFFFFFFFFFFFFFFFLL )
        std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
      std::vector<winrt::Windows::Foundation::Rect>::_Reallocate_exactly(&v27);
    }
    v9 = *(__int128 **)(a4 + 32);
    v10 = *(__int128 **)(a4 + 40);
    v11 = (_BYTE *)*((_QWORD *)&v27 + 1);
    while ( v9 != v10 )
    {
      v12 = *v9;
      v21 = *v9;
      if ( v11 == v28 )
      {
        std::vector<winrt::Windows::Foundation::Rect>::_Emplace_reallocate<winrt::Windows::Foundation::Rect>(
          (const void **)&v27,
          v11,
          &v21);
        v11 = (_BYTE *)*((_QWORD *)&v27 + 1);
      }
      else
      {
        *(_OWORD *)v11 = v12;
        v11 += 16;
        *((_QWORD *)&v27 + 1) = v11;
      }
      ++v9;
    }
    winrt::make<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>,std::vector<winrt::Windows::Foundation::Rect>>(
      &v21,
      (__int64 *)&v27);
    winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetView(
      (__int64 *)&v21,
      &v26);
    if ( (_QWORD)v21 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v21);
    v22 = *(_OWORD *)(a4 + 16);
    v23 = *(_DWORD *)(a4 + 12);
    v24 = *(_DWORD *)(a4 + 8);
    LODWORD(v21) = *(_DWORD *)(a4 + 4);
    winrt::make<winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions,bool &,bool &,bool &,bool &,enum winrt::Windows::Internal::Shell::Text::ViewAnimationKind,enum winrt::Windows::Internal::Shell::Text::ViewEffectKind,enum winrt::Windows::Internal::Shell::Text::ViewZOrder,winrt::Windows::Foundation::Rect,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::Rect> &>(
      (__int64 *)&v25,
      (_BYTE *)a4,
      (_BYTE *)(a4 + 1),
      (_BYTE *)(a4 + 2),
      (char *)(a4 + 3),
      (int *)&v21,
      &v24,
      &v23,
      &v22,
      &v26);
    *(float *)&v22 = (float)*a3;
    *((float *)&v22 + 1) = (float)a3[1];
    *((float *)&v22 + 2) = (float)(a3[2] - *a3);
    *((float *)&v22 + 3) = (float)(a3[3] - a3[1]);
    v13 = v22;
    v14 = *(_QWORD *)(a1 + 72);
    v15 = *(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, _QWORD))(*(_QWORD *)v14 + 80LL);
    winrt::impl::as<Windows::Internal::Shell::Text::IViewOptions,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v21,
      v25);
    v22 = v13;
    v16 = v21;
    v17 = v15(v14, a2, &v22, v21);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x9F,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v17,
        v20);
    if ( v16 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v21);
    if ( v25 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v25);
    if ( v26 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v26);
    if ( (_QWORD)v27 )
      std::_Deallocate<16,0>((void *)v27, (unsigned __int64)&v28[-v27] & 0xFFFFFFFFFFFFFFF0uLL);
    std::vector<Geometry::CRect>::_Tidy(a4 + 32);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v21) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xA1,
                     (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
                     v18);
    std::vector<Geometry::CRect>::_Tidy(v29 + 32);
    return (unsigned int)v21;
  }
  return result;
}
