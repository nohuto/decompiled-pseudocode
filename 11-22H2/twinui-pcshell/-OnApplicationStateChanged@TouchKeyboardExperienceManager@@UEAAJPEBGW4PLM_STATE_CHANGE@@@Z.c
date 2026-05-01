/*
 * XREFs of ?OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x1805142E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?OnApplicationStateChanged_Dispatched@TouchKeyboardExperienceManager@@AEAAJV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4PLM_STATE_CHANGE@@@Z @ 0x18020A9BC (-OnApplicationStateChanged_Dispatched@TouchKeyboardExperienceManager@@AEAAJV-$basic_string@GU-$c.c)
 *     ?OnApplicationStateChanged_Old@TouchKeyboardExperienceManager@@AEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x18020AA5C (-OnApplicationStateChanged_Old@TouchKeyboardExperienceManager@@AEAAJPEBGW4PLM_STATE_CHANGE@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_IAIRV2@@@details@wil@@QEAA_NXZ @ 0x18020C248 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_IAIRV2@@@details@wil@@QEAA_NXZ.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnApplicationStateChanged(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned int a3)
{
  __int64 v5; // rsi
  _QWORD *v6; // rax
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = a1 - 152;
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_IAIRV2>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_IAIRV2>::GetImpl'::`2'::impl) )
    return TouchKeyboardExperienceManager::OnApplicationStateChanged_Old(v5, a2, a3);
  v6 = std::wstring::wstring(v8, a2);
  return TouchKeyboardExperienceManager::OnApplicationStateChanged_Dispatched(v5, (__int64)v6, a3);
}
