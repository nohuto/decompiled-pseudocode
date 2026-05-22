/*
 * XREFs of ?put_IsCenterHollow@Api@?$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJE@Z @ 0x18004ACD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionNineGridBrushT<Windows::UI::Composition::CompositionNineGridBrush,Windows::UI::Composition::CompositionBrush>::Api::put_IsCenterHollow(
        __int64 a1,
        char a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v5; // ebp
  unsigned int v6; // esi
  DirectComposition::CDevice *v7; // rdi
  _DWORD *v8; // rcx
  void (__fastcall ***v9)(_QWORD); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 128);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*(_BYTE *)(a1 - 120) & 2) != 0 )
  {
    v5 = *(_DWORD *)(a1 - 24);
    v6 = 0;
    *(_BYTE *)(a1 + 56) = a2 != 0;
    if ( v5 )
    {
      v7 = *(DirectComposition::CDevice **)(*(_QWORD *)(a1 - 128) + 456LL);
      DirectComposition::CDevice::BeginKernelCommand(v7, 0x18u, &v12, 0);
      v8 = v12;
      *(_DWORD *)v12 = 8;
      v8[1] = v5;
      v8[2] = 2;
      *((_QWORD *)v8 + 2) = a2 != 0;
      v9 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v7 + 10);
      if ( v9 )
        (**v9)(v9);
    }
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DA4,
      (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
      (const char *)0x80000013LL);
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v6;
}
