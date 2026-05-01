/*
 * XREFs of ?GetOcclusionsVectorView@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@AEAV?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1802DD43C
 * Callers:
 *     ?NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x180525280 (-NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z.c)
 *     ?NotifyPrimaryViewAnimationStarting@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@I@Z @ 0x180525490 (-NotifyPrimaryViewAnimationStarting@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@I@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@1234@Upermission@01234@@Z @ 0x180521100 (--0-$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U-$DefaultEqualityPredica.c)
 *     ?GetOcclusionKind@TabTipAdapter@KeyboardHosting@@QEAA?AW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@I@Z @ 0x18052396C (-GetOcclusionKind@TabTipAdapter@KeyboardHosting@@QEAA-AW4CoreInputViewOcclusionKind@Core@ViewMan.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall KeyboardHosting::TabTipAdapter::GetOcclusionsVectorView(
        __int64 a1,
        __int64 a2,
        int *a3,
        __int64 *a4)
{
  unsigned int OcclusionKind; // eax
  int v7; // eax
  int v8; // ebx
  void *v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64 *); // rdi
  __int64 v16; // rcx
  __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  float v19; // [rsp+38h] [rbp-18h]
  float v20; // [rsp+3Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v22; // [rsp+70h] [rbp+20h] BYREF
  __int64 v23; // [rsp+80h] [rbp+30h] BYREF

  v23 = 0LL;
  *(float *)&v18 = (float)*a3;
  *((float *)&v18 + 1) = (float)a3[1];
  v19 = (float)(a3[2] - *a3);
  v20 = (float)(a3[3] - a3[1]);
  OcclusionKind = KeyboardHosting::TabTipAdapter::GetOcclusionKind();
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, __int64 *))(**(_QWORD **)(a1 + 48) + 64LL))(
         *(_QWORD *)(a1 + 48),
         &v18,
         OcclusionKind,
         &v23);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBDB,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_17;
  }
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
  v22 = 0LL;
  v8 = 0;
  v18 = 0LL;
  v9 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9
    && (v10 = Windows::Foundation::Collections::Internal::Vector<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::Vector<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(v9),
        (v18 = v10) != 0) )
  {
    v18 = 0LL;
    v22 = v10;
  }
  else
  {
    v8 = -2147024882;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
  if ( v8 >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 104LL))(v22, v23);
    v8 = v13;
    if ( v13 >= 0 )
    {
      v14 = v22;
      v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 64LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a4);
      v13 = v15(v14, a4);
      v8 = v13;
      if ( v13 >= 0 )
      {
        v8 = 0;
        goto LABEL_16;
      }
      v12 = 3039LL;
    }
    else
    {
      v12 = 3038LL;
    }
    v11 = (unsigned int)v13;
  }
  else
  {
    v11 = (unsigned int)v8;
    v12 = 3037LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)v11);
LABEL_16:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
LABEL_17:
  v16 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return (unsigned int)v8;
}
