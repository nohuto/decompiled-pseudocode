/*
 * XREFs of ?put_HorizontalAlignmentRatio@Api@?$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJM@Z @ 0x18004AAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@IPEA_N@Z @ 0x18004EA60 (-NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005DB98 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ??0AnimationValueData@Composition@UI@Windows@@QEAA@VHStringReference@Wrappers@WRL@Microsoft@@@Z @ 0x18007CDF0 (--0AnimationValueData@Composition@UI@Windows@@QEAA@VHStringReference@Wrappers@WRL@Microsoft@@@Z.c)
 *     ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z @ 0x18007DAF4 (--0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSurfaceBrushT<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::CompositionBrush>::Api::put_HorizontalAlignmentRatio(
        __int64 a1,
        float a2)
{
  __int64 *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  char v4; // si
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // r14d
  unsigned int v8; // esi
  int v9; // r14d
  float v10; // xmm6_4
  DirectComposition::CDevice *v11; // rdi
  float *v12; // rax
  void (__fastcall ***v13)(_QWORD); // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // edx
  DirectComposition::CDevice *v20; // rcx
  char v21; // [rsp+30h] [rbp-D0h] BYREF
  char v22; // [rsp+31h] [rbp-CFh] BYREF
  float v23; // [rsp+38h] [rbp-C8h] BYREF
  void *v24[2]; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v26[24]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v27; // [rsp+88h] [rbp-78h]
  _DWORD v28[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-50h]
  float v30; // [rsp+B8h] [rbp-48h]
  char v31; // [rsp+F8h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  v2 = (__int64 *)(a1 - 152);
  v3 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 152 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (v2[4] & 2) == 0 )
  {
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D34,
      (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
      (const char *)0x80000013LL);
    Microsoft::WRL2::ContextSession::EndApiEntry(v3);
    return 2147483667LL;
  }
  v23 = a2;
  if ( a2 < 0.0 || a2 > 1.0 )
  {
    Windows::UI::Composition::OriginateInvalidArgument(16LL, L"HorizontalAlignmentRatio");
    v18 = 181LL;
    v7 = -2147024809;
    goto LABEL_31;
  }
  if ( *((float *)v2 + 68) == a2 )
  {
    v4 = 0;
  }
  else
  {
    *((float *)v2 + 68) = a2;
    v4 = 1;
  }
  v5 = *v2;
  v21 = 0;
  if ( (*(__int64 (__fastcall **)(__int64 *))(v5 + 232))(v2) )
  {
    v24[0] = (void *)Windows::UI::Composition::CompositionSurfaceBrush::sc_HorizontalAlignmentRatio;
    Microsoft::WRL::Wrappers::HStringReference::HStringReference(v26, v24);
    v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const struct Microsoft::WRL::Wrappers::HStringReference *)v26);
    Windows::UI::Composition::AnimationValueData::AnimationValueData(v28, v15);
    v16 = *v2;
    v30 = v23;
    v31 = v4;
    v28[0] = 18;
    v17 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, char *))(v16 + 224))(v2, v28, &v21);
    v7 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x105,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtProxyObject.inl",
        (const char *)(unsigned int)v17);
      v29 = 0LL;
      v27 = 0LL;
LABEL_24:
      v18 = 187LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsurfacebrush.cpp",
        (const char *)v7);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D37,
        (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
        (const char *)v7);
      Microsoft::WRL2::ContextSession::EndApiEntry(v3);
      return v7;
    }
    v29 = 0LL;
    v27 = 0LL;
  }
  if ( !v21 )
  {
    v24[1] = &v23;
    v24[0] = (void *)4;
    v6 = Windows::UI::Composition::ProxyObject::NotifyPropertyChanged(
           (_DWORD)v2,
           dword_180217A88,
           18,
           (unsigned int)v24,
           dword_180217A8C,
           (bool)&v22);
    v7 = v6;
    if ( v6 >= 0 )
    {
      if ( v4 || v22 )
      {
        v8 = dword_180217A88;
        if ( byte_180217A95 )
          v8 = dword_180217A8C;
        if ( byte_180217A94 )
        {
          v19 = *((_DWORD *)v2 + 32);
          v20 = *(DirectComposition::CDevice **)(v2[3] + 456);
          if ( byte_180217A94 == 1 )
            DirectComposition::CDevice::ResourceSetBufferProperty(v20, v19, v8, &v23, 4uLL);
          else
            DirectComposition::CDevice::ResourceSetIntegerProperty(v20, v19, v8, SLODWORD(v23));
        }
        else
        {
          v9 = *((_DWORD *)v2 + 32);
          v10 = v23;
          if ( v9 )
          {
            v11 = *(DirectComposition::CDevice **)(v2[3] + 456);
            DirectComposition::CDevice::BeginKernelCommand(v11, 0x10u, v24, 0);
            v12 = (float *)v24[0];
            *(_DWORD *)v24[0] = 9;
            *((_DWORD *)v12 + 1) = v9;
            *((_DWORD *)v12 + 2) = v8;
            v12[3] = v10;
            v13 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v11 + 10);
            if ( v13 )
              (**v13)(v13);
          }
        }
      }
      goto LABEL_16;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x119,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtProxyObject.inl",
      (const char *)(unsigned int)v6);
    goto LABEL_24;
  }
LABEL_16:
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return 0LL;
}
