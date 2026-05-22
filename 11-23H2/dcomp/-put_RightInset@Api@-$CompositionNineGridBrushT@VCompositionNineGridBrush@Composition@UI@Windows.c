/*
 * XREFs of ?put_RightInset@Api@?$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJM@Z @ 0x180049CF0
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

__int64 __fastcall Windows::UI::Composition::CompositionNineGridBrushT<Windows::UI::Composition::CompositionNineGridBrush,Windows::UI::Composition::CompositionBrush>::Api::put_RightInset(
        __int64 a1,
        float a2)
{
  __int64 *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v4; // esi
  char v5; // r15
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // r14d
  __int64 v10; // rdx
  unsigned int v11; // r14d
  int v12; // r15d
  int v13; // xmm6_4
  DirectComposition::CDevice *v14; // rdi
  _DWORD *v15; // rax
  void (__fastcall ***v16)(_QWORD); // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // edx
  DirectComposition::CDevice *v21; // rcx
  char v22; // [rsp+38h] [rbp-D0h] BYREF
  char v23; // [rsp+39h] [rbp-CFh] BYREF
  __int64 v24; // [rsp+40h] [rbp-C8h] BYREF
  void *v25[2]; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v27[24]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v28; // [rsp+90h] [rbp-78h]
  _DWORD v29[8]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v30; // [rsp+B8h] [rbp-50h]
  int v31; // [rsp+C0h] [rbp-48h]
  char v32; // [rsp+100h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]

  v2 = (__int64 *)(a1 - 152);
  v3 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 152 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (v2[4] & 2) == 0 )
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E2E,
      (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
      (const char *)0x80000013LL);
    goto LABEL_10;
  }
  *(float *)&v24 = a2;
  if ( a2 < 0.0 )
  {
    Windows::UI::Composition::OriginateInvalidArgument(14LL, L"Inset");
    v10 = 160LL;
    v8 = -2147024809;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionninegridbrush.cpp",
      (const char *)v8);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E31,
      (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
      (const char *)v8);
    v4 = v8;
    goto LABEL_10;
  }
  v4 = 0;
  if ( *((float *)v2 + 48) == a2 )
  {
    v5 = 0;
  }
  else
  {
    *((float *)v2 + 48) = a2;
    v5 = 1;
  }
  v6 = *v2;
  v22 = 0;
  if ( (*(__int64 (__fastcall **)(__int64 *))(v6 + 232))(v2) )
  {
    v25[0] = (void *)Windows::UI::Composition::CompositionNineGridBrush::sc_RightInset;
    Microsoft::WRL::Wrappers::HStringReference::HStringReference(v27, v25);
    v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const struct Microsoft::WRL::Wrappers::HStringReference *)v27);
    Windows::UI::Composition::AnimationValueData::AnimationValueData(v29, v17);
    v18 = *v2;
    v31 = v24;
    v32 = v5;
    v29[0] = 18;
    v19 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, char *))(v18 + 224))(v2, v29, &v22);
    v8 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x105,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtProxyObject.inl",
        (const char *)(unsigned int)v19);
      v30 = 0LL;
      v28 = 0LL;
LABEL_25:
      v10 = 163LL;
      goto LABEL_12;
    }
    v30 = 0LL;
    v28 = 0LL;
  }
  if ( v22 )
    goto LABEL_10;
  v25[1] = &v24;
  v25[0] = (void *)4;
  v7 = Windows::UI::Composition::ProxyObject::NotifyPropertyChanged(
         (_DWORD)v2,
         dword_180217C08,
         18,
         (unsigned int)v25,
         dword_180217C0C,
         (bool)&v23);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x119,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtProxyObject.inl",
      (const char *)(unsigned int)v7);
    goto LABEL_25;
  }
  if ( v5 || v23 )
  {
    v11 = dword_180217C08;
    if ( byte_180217C15 )
      v11 = dword_180217C0C;
    if ( byte_180217C14 )
    {
      v20 = *((_DWORD *)v2 + 32);
      v21 = *(DirectComposition::CDevice **)(v2[3] + 456);
      if ( byte_180217C14 == 1 )
        DirectComposition::CDevice::ResourceSetBufferProperty(v21, v20, v11, &v24, 4uLL);
      else
        DirectComposition::CDevice::ResourceSetIntegerProperty(v21, v20, v11, (int)v24);
    }
    else
    {
      v12 = *((_DWORD *)v2 + 32);
      v13 = v24;
      if ( v12 )
      {
        v14 = *(DirectComposition::CDevice **)(v2[3] + 456);
        DirectComposition::CDevice::BeginKernelCommand(v14, 0x10u, v25, 0);
        v15 = v25[0];
        *(_DWORD *)v25[0] = 9;
        v15[1] = v12;
        v15[2] = v11;
        v15[3] = v13;
        v16 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v14 + 10);
        if ( v16 )
          (**v16)(v16);
      }
    }
  }
LABEL_10:
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v4;
}
