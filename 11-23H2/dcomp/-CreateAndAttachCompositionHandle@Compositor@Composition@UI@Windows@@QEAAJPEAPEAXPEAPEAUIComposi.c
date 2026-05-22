/*
 * XREFs of ?CreateAndAttachCompositionHandle@Compositor@Composition@UI@Windows@@QEAAJPEAPEAXPEAPEAUICompositionHandle@Internal@Handles@Foundation@4@@Z @ 0x180094308
 * Callers:
 *     ?OpenSharedResourceHandle@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAUICompositionObject@345@PEAPEAUICompositionHandle@1Handles@Foundation@5@@Z @ 0x180094200 (-OpenSharedResourceHandle@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAUICompositionObjec.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180086C8C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x180100AFC (--1-$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::CreateAndAttachCompositionHandle(
        Windows::UI::Composition::Compositor *this,
        void **a2,
        struct Windows::Foundation::Handles::Internal::ICompositionHandle **a3)
{
  __int64 *v3; // rsi
  int ActivationFactory; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rdi
  int v10; // eax
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v12; // rcx
  int v13; // eax
  __int64 (__fastcall ***v15)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-40h] BYREF
  struct Windows::Foundation::Handles::Internal::ICompositionHandle *v17; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v19; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v3 = (__int64 *)((char *)this + 1184);
  if ( !*((_QWORD *)this + 148) )
  {
    v16 = 0LL;
    v19 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Handles.Internal.CompositionHandle",
      0x36u,
      0x35u);
    ActivationFactory = RoGetActivationFactory(v19, &GUID_011681b7_9ece_462e_89f5_be2215219abb, &v16);
    v7 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x172,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
        (const char *)(unsigned int)ActivationFactory);
      Microsoft::WRL::ComPtr<IDCompositionSurfaceFactory>::~ComPtr<IDCompositionSurfaceFactory>(&v16);
      return v7;
    }
    v8 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v16;
    v9 = **v16;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v3);
    v10 = v9(v8, &GUID_1f5cee95_a9e9_464e_be2f_57bbb131e7ec, v3);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x174,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
        (const char *)(unsigned int)v10);
      v15 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v16;
      if ( v16 )
      {
        v16 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v15)[2])(v15);
      }
      return v7;
    }
    v11 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v16;
    if ( v16 )
    {
      v16 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v11)[2])(v11);
    }
  }
  v12 = *v3;
  v17 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, void **, GUID *, struct Windows::Foundation::Handles::Internal::ICompositionHandle **))(*(_QWORD *)v12 + 48LL))(
          v12,
          a2,
          &GUID_cfde6f9a_4afe_45b3_81b5_20d13cd8a81a,
          &v17);
  v7 = v13;
  if ( v13 >= 0 )
  {
    *a3 = v17;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x17A,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
    (const char *)(unsigned int)v13);
  Microsoft::WRL::ComPtr<IDCompositionSurfaceFactory>::~ComPtr<IDCompositionSurfaceFactory>(&v17);
  return v7;
}
