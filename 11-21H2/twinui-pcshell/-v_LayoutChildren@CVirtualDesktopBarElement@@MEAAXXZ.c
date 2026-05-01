/*
 * XREFs of ?v_LayoutChildren@CVirtualDesktopBarElement@@MEAAXXZ @ 0x1804C7660
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180073E70 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     GetThreadUILanguage_0 @ 0x18018A13C (GetThreadUILanguage_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1804A2F5C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1804A3024 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ActivitiesInShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1804B3858 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ActivitiesInShell@@@details@wil@@QEAAX_NW.c)
 *     ??$As@UIVirtualDesktopNewElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopNewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804C651C (--$As@UIVirtualDesktopNewElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$C.c)
 *     ?_LayoutBackground@CVirtualDesktopBarElement@@IEAAXXZ @ 0x1804C73CC (-_LayoutBackground@CVirtualDesktopBarElement@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CVirtualDesktopBarElement::v_LayoutChildren(CVirtualDesktopBarElement *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // r8d
  int v5; // eax
  int v6; // edi
  __m128i v7; // xmm6
  __int32 v8; // ebx
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rdx
  LANGID ThreadUILanguage_0; // ax
  __int32 v13; // edi
  __int64 v14; // r8
  __int64 v15; // r9
  __int32 v16; // ecx
  _DWORD v17[2]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v18; // [rsp+40h] [rbp-21h] BYREF
  __int64 v19[2]; // [rsp+48h] [rbp-19h] BYREF
  __m128i v20; // [rsp+58h] [rbp-9h] BYREF
  __int64 v21; // [rsp+68h] [rbp+7h] BYREF
  int v22; // [rsp+70h] [rbp+Fh]
  int v23; // [rsp+74h] [rbp+13h]
  __m128i v24; // [rsp+78h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v21 = *((_QWORD *)this + 28);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v19, &v21, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
  v2 = (__int64 *)*((_QWORD *)this + 11);
  v3 = *v2;
  v4 = *((_DWORD *)this + 15);
  LODWORD(v21) = *((_DWORD *)this + 14);
  HIDWORD(v21) = v4;
  v22 = v21 + 1;
  v23 = v4 + 1;
  (*(void (__fastcall **)(__int64 *, __int64 *, _QWORD, _QWORD))(v3 + 24))(v2, &v21, 0LL, 0LL);
  CVirtualDesktopBarElement::_LayoutBackground(this);
  v5 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
  v6 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  v20.m128i_i64[0] = 0LL;
  v20.m128i_i64[1] = __PAIR64__(v5, v6);
  v7 = v20;
  v8 = _mm_srli_si128(v20, 8).m128i_i32[1];
  v17[0] = 0;
  v17[1] = 0;
  v18 = 0LL;
  v9 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IVirtualDesktopNewElement>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 94,
         &v18);
  v10 = retaddr;
  if ( v9 < 0 )
  {
    v11 = 265LL;
LABEL_3:
    wil::details::in1diag3::_Log_Hr(
      v10,
      (void *)v11,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopbarelement.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_8;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v18 + 24LL))(v18, v17);
  v10 = retaddr;
  if ( v9 < 0 )
  {
    v11 = 266LL;
    goto LABEL_3;
  }
  if ( v8 <= v17[0] )
    v8 = v17[0];
LABEL_8:
  v20.m128i_i32[0] = v20.m128i_i32[2] - v8;
  ThreadUILanguage_0 = GetThreadUILanguage_0();
  if ( (unsigned int)IsBiDiLocale(ThreadUILanguage_0) )
  {
    v13 = v6 - v20.m128i_i32[2];
    v20.m128i_i32[2] += v13 - v20.m128i_i32[0];
    v20.m128i_i32[0] = v13;
  }
  (*(void (__fastcall **)(_QWORD, __m128i *))(**((_QWORD **)this + 94) + 104LL))(*((_QWORD *)this + 94), &v20);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ActivitiesInShell>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_ActivitiesInShell>::GetImpl'::`2'::impl,
    0,
    v14,
    v15);
  v24 = v7;
  v16 = *((_DWORD *)this + 84);
  if ( v16 <= v20.m128i_i32[2] - v20.m128i_i32[0] )
    v16 = v20.m128i_i32[2] - v20.m128i_i32[0];
  v24.m128i_i32[0] = v16;
  v24.m128i_i32[2] -= v16;
  (*(void (__fastcall **)(_QWORD, __m128i *))(**((_QWORD **)this + 93) + 104LL))(*((_QWORD *)this + 93), &v24);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v19);
}
