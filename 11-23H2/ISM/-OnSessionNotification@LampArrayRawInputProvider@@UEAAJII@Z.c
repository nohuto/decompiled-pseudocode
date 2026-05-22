/*
 * XREFs of ?OnSessionNotification@LampArrayRawInputProvider@@UEAAJII@Z @ 0x18005A2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z @ 0x18004AF84 (-Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@wil@@QEAA_NXZ @ 0x1800589B8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@w.c)
 *     ?Shutdown@LampArrayRawInputProvider@@AEAAXXZ @ 0x1800E9838 (-Shutdown@LampArrayRawInputProvider@@AEAAXXZ.c)
 */

__int64 __fastcall LampArrayRawInputProvider::OnSessionNotification(LampArrayRawInputProvider *this, int a2)
{
  const char *v4; // r9
  int v5; // ebx
  int v7; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_AmbientDeviceLighting>::GetImpl'::`2'::impl) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xAF,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      v4);
  v5 = a2 - 1;
  if ( v5 )
  {
    if ( v5 == 1 )
      LampArrayRawInputProvider::Shutdown((ULONG_PTR)this - 8);
  }
  else
  {
    v7 = LampArrayRawInputProvider::Initialize((LampArrayRawInputProvider *)((char *)this - 8), 0LL);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB4,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
        (const char *)(unsigned int)v7,
        v8);
  }
  return 0LL;
}
