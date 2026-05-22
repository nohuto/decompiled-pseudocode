/*
 * XREFs of ?put_Stretch@Api@?$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJW4CompositionStretch@345@@Z @ 0x18004B250
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSurfaceBrushT<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::CompositionBrush>::Api::put_Stretch(
        __int64 a1,
        int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v4; // rbp
  unsigned int v5; // esi
  int v6; // r14d
  DirectComposition::CDevice *v7; // rdi
  _DWORD *v8; // rcx
  void (__fastcall ***v9)(_QWORD); // rcx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 128);
  v4 = a2;
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*(_BYTE *)(a1 - 120) & 2) == 0 )
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    v11 = 11618LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
      (const char *)v5);
    goto LABEL_7;
  }
  if ( (unsigned int)v4 > 3 )
  {
    Windows::UI::Composition::OriginateInvalidArgument(19LL, L"Stretch");
    v5 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD7,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsurfacebrush.cpp",
      (const char *)0x80070057LL);
    v11 = 11621LL;
    goto LABEL_10;
  }
  v5 = 0;
  if ( (_DWORD)v4 != *(_DWORD *)(a1 + 132) )
  {
    v6 = *(_DWORD *)(a1 - 24);
    *(_DWORD *)(a1 + 132) = v4;
    if ( v6 )
    {
      v7 = *(DirectComposition::CDevice **)(*(_QWORD *)(a1 - 128) + 456LL);
      DirectComposition::CDevice::BeginKernelCommand(v7, 0x18u, &v13, 0);
      v8 = v13;
      *(_DWORD *)v13 = 8;
      v8[1] = v6;
      v8[2] = 4;
      *((_QWORD *)v8 + 2) = v4;
      v9 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v7 + 10);
      if ( v9 )
        (**v9)(v9);
    }
  }
LABEL_7:
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
