/*
 * XREFs of ?OnSessionStatusNotification@OneCoreUAPInputHost@@UEAAJII@Z @ 0x180059BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@wil@@QEAA_NXZ @ 0x180059DE0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@w.c)
 *     ?OnSessionStatusNotification@InputProviderManager@@QEAAJII@Z @ 0x180061C1C (-OnSessionStatusNotification@InputProviderManager@@QEAAJII@Z.c)
 */

__int64 __fastcall OneCoreUAPInputHost::OnSessionStatusNotification(
        OneCoreUAPInputHost *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v5; // esi

  v4 = a3;
  v5 = a2;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::__private_IsEnabled(
                          &`wil::Feature<__WilFeatureTraits_Feature_AmbientDeviceLighting>::GetImpl'::`2'::impl,
                          a2,
                          a3,
                          a4)
    && *((_BYTE *)this + 72) )
  {
    InputProviderManager::OnSessionStatusNotification((OneCoreUAPInputHost *)((char *)this + 48), v5, v4);
  }
  return 0LL;
}
