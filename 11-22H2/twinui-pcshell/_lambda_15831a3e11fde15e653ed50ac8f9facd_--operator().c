/*
 * XREFs of _lambda_15831a3e11fde15e653ed50ac8f9facd_::operator() @ 0x180212644
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x18007620C (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x180076B80 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPo.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x1800DDC9C (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_15831a3e11fde15e653ed50ac8f9facd_::operator()(__int64 **a1)
{
  __int64 *v2; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  char v9; // bl
  __int64 v10; // r8
  int v11; // eax
  __int64 *v12; // rdx
  __int64 v13; // rcx
  char v14[8]; // [rsp+20h] [rbp-69h] BYREF
  __int64 v15; // [rsp+28h] [rbp-61h] BYREF
  __int64 v16; // [rsp+30h] [rbp-59h] BYREF
  __int64 v17; // [rsp+38h] [rbp-51h] BYREF
  struct tagWINDOWPLACEMENT v18; // [rsp+40h] [rbp-49h] BYREF
  _BYTE hstringHeader[44]; // [rsp+70h] [rbp-19h] BYREF
  __int128 v20; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v21; // [rsp+B0h] [rbp+27h]
  __m128i v22; // [rsp+B8h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  LODWORD(v17) = 0;
  v2 = *a1;
  v3 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)**a1 + 72LL))(**a1, &v20);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB73,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  *(_DWORD *)hstringHeader = 44;
  *(_OWORD *)&hstringHeader[4] = v20;
  *(_QWORD *)&hstringHeader[20] = v21;
  *(__m128i *)&hstringHeader[28] = v22;
  *(_OWORD *)&v18.length = *(_OWORD *)hstringHeader;
  *(_OWORD *)&v18.ptMinPosition.y = *(_OWORD *)&hstringHeader[16];
  *(_QWORD *)&v18.rcNormalPosition.top = *(__int64 *)((char *)v22.m128i_i64 + 4);
  v18.rcNormalPosition.bottom = _mm_cvtsi128_si32(_mm_srli_si128(v22, 12));
  if ( DWORD1(v20) == 3 )
  {
    v15 = 0LL;
    v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1[1];
    v7 = **v6;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
    v8 = v7(v6, &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c, &v15);
    v4 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB79,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v8);
LABEL_13:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
      return v4;
    }
    v16 = v15;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
    v14[0] = 0;
    *(_QWORD *)&hstringHeader[24] = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      (HSTRING_HEADER *)hstringHeader,
      L"InitialPositionIsForDrag",
      0x19u,
      0x18u);
    v9 = 1;
    LODWORD(v17) = 1;
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v16,
                *(HSTRING *)&hstringHeader[24],
                v10,
                v14) < 0
      || !v14[0] )
    {
      v9 = 0;
    }
    if ( v9 )
    {
      v18.showCmd = 4;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v2);
      v11 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IOcclusionBasedApplicationViewPosition,tagWINDOWPLACEMENT &>(
              (void **)v2,
              &v18);
      v4 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB81,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v11);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
        goto LABEL_13;
      }
      v12 = a1[2];
      v13 = *v2;
      *v2 = 0LL;
      v17 = *v12;
      *v12 = v13;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  }
  return 0LL;
}
