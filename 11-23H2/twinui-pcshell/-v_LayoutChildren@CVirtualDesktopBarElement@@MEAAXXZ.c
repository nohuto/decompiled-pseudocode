/*
 * XREFs of ?v_LayoutChildren@CVirtualDesktopBarElement@@MEAAXXZ @ 0x180581FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     GetThreadUILanguage_0 @ 0x1801C8376 (GetThreadUILanguage_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180562760 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x180562828 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??$As@UIVirtualDesktopNewElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopNewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x180580EAC (--$As@UIVirtualDesktopNewElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$C.c)
 *     ?_LayoutBackground@CVirtualDesktopBarElement@@IEAAXXZ @ 0x180581D4C (-_LayoutBackground@CVirtualDesktopBarElement@@IEAAXXZ.c)
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
  unsigned __int64 v8; // rbx
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rdx
  LANGID ThreadUILanguage_0; // ax
  __int32 v13; // edi
  __int32 v14; // ecx
  _DWORD v15[2]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v16; // [rsp+40h] [rbp-21h] BYREF
  __int64 v17[2]; // [rsp+48h] [rbp-19h] BYREF
  __m128i v18; // [rsp+58h] [rbp-9h] BYREF
  __int64 v19; // [rsp+68h] [rbp+7h] BYREF
  int v20; // [rsp+70h] [rbp+Fh]
  int v21; // [rsp+74h] [rbp+13h]
  __m128i v22; // [rsp+78h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v19 = *((_QWORD *)this + 28);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v17, &v19, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
  v2 = (__int64 *)*((_QWORD *)this + 11);
  v3 = *v2;
  v4 = *((_DWORD *)this + 15);
  LODWORD(v19) = *((_DWORD *)this + 14);
  HIDWORD(v19) = v4;
  v20 = v19 + 1;
  v21 = v4 + 1;
  (*(void (__fastcall **)(__int64 *, __int64 *, _QWORD, _QWORD))(v3 + 24))(v2, &v19, 0LL, 0LL);
  CVirtualDesktopBarElement::_LayoutBackground(this);
  v5 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
  v6 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  v18.m128i_i64[0] = 0LL;
  v18.m128i_i64[1] = __PAIR64__(v5, v6);
  v7 = v18;
  v8 = HIDWORD(_mm_srli_si128(v18, 8).m128i_u64[0]);
  v15[0] = 0;
  v15[1] = 0;
  v16 = 0LL;
  v9 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IVirtualDesktopNewElement>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 94,
         &v16);
  v10 = retaddr;
  if ( v9 < 0 )
  {
    v11 = 265LL;
LABEL_3:
    wil::details::in1diag3::_Log_Hr(
      v10,
      (void *)v11,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopbarelement.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_8;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v16 + 24LL))(v16, v15);
  v10 = retaddr;
  if ( v9 < 0 )
  {
    v11 = 266LL;
    goto LABEL_3;
  }
  if ( (int)v8 <= v15[0] )
    LODWORD(v8) = v15[0];
LABEL_8:
  v18.m128i_i32[0] = v18.m128i_i32[2] - v8;
  ThreadUILanguage_0 = GetThreadUILanguage_0();
  if ( (unsigned int)IsBiDiLocale(ThreadUILanguage_0) )
  {
    v13 = v6 - v18.m128i_i32[2];
    v18.m128i_i32[2] += v13 - v18.m128i_i32[0];
    v18.m128i_i32[0] = v13;
  }
  (*(void (__fastcall **)(_QWORD, __m128i *))(**((_QWORD **)this + 94) + 104LL))(*((_QWORD *)this + 94), &v18);
  v22 = v7;
  v14 = *((_DWORD *)this + 84);
  if ( v14 <= v18.m128i_i32[2] - v18.m128i_i32[0] )
    v14 = v18.m128i_i32[2] - v18.m128i_i32[0];
  v22.m128i_i32[0] = v14;
  v22.m128i_i32[2] -= v14;
  (*(void (__fastcall **)(_QWORD, __m128i *))(**((_QWORD **)this + 93) + 104LL))(*((_QWORD *)this + 93), &v22);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v17);
}
