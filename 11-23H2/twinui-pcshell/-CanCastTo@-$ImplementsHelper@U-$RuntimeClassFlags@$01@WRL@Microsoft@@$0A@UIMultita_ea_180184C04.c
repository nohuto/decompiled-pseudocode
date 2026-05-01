/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@UIMultitaskingViewGestureState@@UIMultitaskingViewGestureStateInternal@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180184C04
 * Callers:
 *     ??$MakeAndInitialize@VMultitaskingViewGestureState@@UIMultitaskingViewGestureStateInternal@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewGestureStateInternal@@@Z @ 0x180184AE4 (--$MakeAndInitialize@VMultitaskingViewGestureState@@UIMultitaskingViewGestureStateInternal@@$$V@.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewGestureState@@UIMultitaskingViewGestureStateInternal@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180184BA0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180184BA0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CD1C0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,IMultitaskingViewGestureState,IMultitaskingViewGestureStateInternal,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r10
  void **v5; // r8
  unsigned int CanCastTo; // r9d
  __int64 v7; // r10
  const struct _GUID *v8; // r11

  if ( InlineIsEqualGUID(a2, &GUID_4639c886_cffe_492c_915a_1e3f02d22434) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_2e123451_6a45_4fbf_bcb0_36d47e161041) )
    {
      *v5 = (void *)v7;
    }
    else
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v7 + 8), v8, v5);
      if ( CanCastTo == -2147467262 )
        return (unsigned int)-2147467262;
    }
    return CanCastTo;
  }
}
