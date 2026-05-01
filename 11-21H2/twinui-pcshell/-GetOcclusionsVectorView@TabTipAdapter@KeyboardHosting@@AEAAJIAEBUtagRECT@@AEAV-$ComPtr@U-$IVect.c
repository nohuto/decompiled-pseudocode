/*
 * XREFs of ?GetOcclusionsVectorView@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@AEAV?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180471300
 * Callers:
 *     ?NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x180472230 (-NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z.c)
 *     ?NotifyPrimaryViewAnimationStarting@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@I@Z @ 0x180472B68 (-NotifyPrimaryViewAnimationStarting@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@I@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@1234@Upermission@01234@@Z @ 0x18046EB40 (--0-$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U-$DefaultEqualityPredica.c)
 *     ?GetOcclusionKind@TabTipAdapterPolicy@KeyboardHosting@@QEAA?AW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@I@Z @ 0x180480D8C (-GetOcclusionKind@TabTipAdapterPolicy@KeyboardHosting@@QEAA-AW4CoreInputViewOcclusionKind@Core@V.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall KeyboardHosting::TabTipAdapter::GetOcclusionsVectorView(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        __int64 *a4)
{
  __m128i v6; // xmm1
  __int64 v7; // r8
  unsigned int OcclusionKind; // eax
  int v9; // eax
  int v10; // ebx
  void *v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64 *); // rdi
  __int64 v18; // rcx
  __int64 v20; // [rsp+30h] [rbp-20h] BYREF
  float v21; // [rsp+38h] [rbp-18h]
  float v22; // [rsp+3Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v24; // [rsp+70h] [rbp+20h] BYREF
  __int64 v25; // [rsp+80h] [rbp+30h] BYREF

  v25 = 0LL;
  v6 = *a3;
  v7 = a3->m128i_i64[0];
  *(float *)&v20 = (float)(int)v7;
  *((float *)&v20 + 1) = (float)SHIDWORD(v7);
  v6.m128i_i64[0] = _mm_srli_si128(v6, 8).m128i_u64[0];
  v21 = (float)(v6.m128i_i32[0] - v7 + 1);
  v22 = (float)(v6.m128i_i32[1] - HIDWORD(v7) + 1);
  OcclusionKind = KeyboardHosting::TabTipAdapterPolicy::GetOcclusionKind(*(_QWORD *)(a1 + 112));
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, __int64 *))(**(_QWORD **)(a1 + 40) + 64LL))(
         *(_QWORD *)(a1 + 40),
         &v20,
         OcclusionKind,
         &v25);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD4D,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_17;
  }
  v24 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
  v24 = 0LL;
  v10 = 0;
  v20 = 0LL;
  v11 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11
    && (v12 = Windows::Foundation::Collections::Internal::Vector<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::Vector<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64)v11),
        (v20 = v12) != 0) )
  {
    v20 = 0LL;
    v24 = v12;
  }
  else
  {
    v10 = -2147024882;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
  if ( v10 >= 0 )
  {
    v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 104LL))(v24, v25);
    v10 = v15;
    if ( v15 >= 0 )
    {
      v16 = v24;
      v17 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 64LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a4);
      v15 = v17(v16, a4);
      v10 = v15;
      if ( v15 >= 0 )
      {
        v10 = 0;
        goto LABEL_16;
      }
      v14 = 3409LL;
    }
    else
    {
      v14 = 3408LL;
    }
    v13 = (unsigned int)v15;
  }
  else
  {
    v13 = (unsigned int)v10;
    v14 = 3407LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)v13);
LABEL_16:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
LABEL_17:
  v18 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return (unsigned int)v10;
}
