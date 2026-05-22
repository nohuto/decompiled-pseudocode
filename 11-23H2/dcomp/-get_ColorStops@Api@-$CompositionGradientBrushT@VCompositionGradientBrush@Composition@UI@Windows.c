/*
 * XREFs of ?get_ColorStops@Api@?$CompositionGradientBrushT@VCompositionGradientBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJPEAPEAUICompositionColorGradientStopCollection@345@@Z @ 0x180080F80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionGradientBrushT<Windows::UI::Composition::CompositionGradientBrush,Windows::UI::Composition::CompositionBrush>::Api::get_ColorStops(
        __int64 a1,
        __int64 *a2)
{
  unsigned int v3; // esi
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rdx
  volatile signed __int32 *v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  *a2 = 0LL;
  v5 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 128);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*(_BYTE *)(a1 - 120) & 2) == 0 )
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1369,
      (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
      (const char *)0x80000013LL);
    goto LABEL_9;
  }
  v6 = *(volatile signed __int32 **)(a1 + 72);
  if ( v6 && _InterlockedIncrement(v6 + 4) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 80LL))(v6);
    v7 = v6;
  }
  else
  {
    v7 = v6;
    if ( !v6 )
    {
      *a2 = 0LL;
      goto LABEL_9;
    }
  }
  v8 = v7 + 44;
  *a2 = (unsigned __int64)v8 & -(__int64)(v6 + 40 != 0LL);
  if ( _InterlockedIncrement(v6 + 4) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 80LL))(v6);
  if ( _InterlockedExchangeAdd(v6 + 4, 0xFFFFFFFF) == 1 )
  {
    LOBYTE(v8) = 1;
    (*(void (__fastcall **)(volatile signed __int32 *, volatile signed __int32 *))(*(_QWORD *)v6 + 64LL))(v6, v8);
  }
LABEL_9:
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v3;
}
