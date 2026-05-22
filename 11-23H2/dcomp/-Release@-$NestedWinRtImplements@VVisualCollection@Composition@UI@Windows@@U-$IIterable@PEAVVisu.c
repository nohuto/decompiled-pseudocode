/*
 * XREFs of ?Release@?$NestedWinRtImplements@VVisualCollection@Composition@UI@Windows@@U?$IIterable@PEAVVisual@Composition@UI@Windows@@@Collections@Foundation@4@UIVisualCollection@234@@WRL2@Microsoft@@UEAAKXZ @ 0x180073D30
 * Callers:
 *     ?Release@?$NestedWinRtImplements@VVisualCollection@Composition@UI@Windows@@U?$IIterable@PEAVVisual@Composition@UI@Windows@@@Collections@Foundation@4@UIVisualCollection@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800B0CE0 (-Release@-$NestedWinRtImplements@VVisualCollection@Composition@UI@Windows@@U-$IIter_ea_1800B0CE0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::VisualCollection,Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Visual *>,Windows::UI::Composition::IVisualCollection>::Release(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int32 *v2; // rcx
  unsigned __int32 v3; // ebx

  v2 = (volatile signed __int32 *)(a1 - 128);
  v3 = _InterlockedDecrement(v2 + 4);
  if ( !v3 )
  {
    LOBYTE(a2) = 1;
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 64LL))(v2, a2);
  }
  return v3;
}
