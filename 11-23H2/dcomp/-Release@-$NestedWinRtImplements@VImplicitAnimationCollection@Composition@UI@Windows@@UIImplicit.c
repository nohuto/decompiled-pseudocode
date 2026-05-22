/*
 * XREFs of ?Release@?$NestedWinRtImplements@VImplicitAnimationCollection@Composition@UI@Windows@@UIImplicitAnimationCollection@234@U?$IMap@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@@Collections@Foundation@4@U?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@@Collections@Foundation@Windows@@@784@@WRL2@Microsoft@@UEAAKXZ @ 0x180083120
 * Callers:
 *     ?Release@?$NestedWinRtImplements@VImplicitAnimationCollection@Composition@UI@Windows@@UIImplicitAnimationCollection@234@U?$IMap@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@@Collections@Foundation@4@U?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@@Collections@Foundation@Windows@@@784@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800AED30 (-Release@-$NestedWinRtImplements@VImplicitAnimationCollection@Composition@UI@Window_ea_1800AED30.c)
 *     ?Release@?$NestedWinRtImplements@VImplicitAnimationCollection@Composition@UI@Windows@@UIImplicitAnimationCollection@234@U?$IMap@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@@Collections@Foundation@4@U?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@@Collections@Foundation@Windows@@@784@@WRL2@Microsoft@@WBA@EAAKXZ @ 0x1800AED50 (-Release@-$NestedWinRtImplements@VImplicitAnimationCollection@Composition@UI@Window_ea_1800AED50.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::ImplicitAnimationCollection,Windows::UI::Composition::IImplicitAnimationCollection,Windows::Foundation::Collections::IMap<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *> *>>::Release(
        __int64 a1)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx
  __int64 v4; // rdx

  v1 = (volatile signed __int32 *)(a1 - 128);
  v2 = _InterlockedDecrement(v1 + 4);
  if ( !v2 )
  {
    v4 = *(_QWORD *)v1;
    LOBYTE(v4) = 1;
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 64LL))(v1, v4);
  }
  return v2;
}
