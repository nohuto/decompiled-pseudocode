/*
 * XREFs of ?get_Source@Api@?$CompositionMaskBrushT@VCompositionMaskBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBrush@345@@Z @ 0x18004ADA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionMaskBrushT<Windows::UI::Composition::CompositionMaskBrush,Windows::UI::Composition::CompositionBrush>::Api::get_Source(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int v3; // esi
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 v6; // rdx
  volatile signed __int32 *v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  *a2 = 0LL;
  v5 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 128);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*(_BYTE *)(a1 - 120) & 2) != 0 )
  {
    v7 = *(volatile signed __int32 **)(a1 + 24);
    if ( v7 )
    {
      if ( _InterlockedIncrement(v7 + 4) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 80LL))(v7);
      *a2 = v7 + 34;
      if ( _InterlockedIncrement(v7 + 4) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 80LL))(v7);
      if ( _InterlockedExchangeAdd(v7 + 4, 0xFFFFFFFF) == 1 )
      {
        LOBYTE(v6) = 1;
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 64LL))(v7, v6);
      }
    }
    else
    {
      *a2 = 0LL;
    }
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C47,
      (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
      (const char *)0x80000013LL);
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v3;
}
