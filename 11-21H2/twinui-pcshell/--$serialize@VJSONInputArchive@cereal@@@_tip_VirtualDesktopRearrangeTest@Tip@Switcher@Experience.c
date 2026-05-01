/*
 * XREFs of ??$serialize@VJSONInputArchive@cereal@@@_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18048CA5C
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18048E2D0 (-deserialize@-$test_merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@Compo.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEAW4ActivationMethod@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@cereal@@V?$NameValuePair@AEAI@2@V?$NameValuePair@AEA_N@2@V42@V42@V42@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAW4ActivationMethod@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@1@$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEA_N@1@222@Z @ 0x18048C99C (--$process@V-$NameValuePair@AEAW4ActivationMethod@Tip@Switcher@Experiences@ComposableShell@Windo.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest::serialize<cereal::JSONInputArchive>(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[2]; // [rsp+40h] [rbp-9h] BYREF
  _QWORD v4[2]; // [rsp+50h] [rbp+7h] BYREF
  _QWORD v5[2]; // [rsp+60h] [rbp+17h] BYREF
  _QWORD v6[2]; // [rsp+70h] [rbp+27h] BYREF
  _QWORD v7[2]; // [rsp+80h] [rbp+37h] BYREF
  _QWORD v8[2]; // [rsp+90h] [rbp+47h] BYREF

  v3[0] = "areModificationsSuspended";
  v3[1] = a1 + 16;
  v4[0] = "isUIAlreadyUpdated";
  v4[1] = a1 + 19;
  v5[0] = "didVirtualDesktopDisappear";
  v5[1] = a1 + 18;
  v6[0] = "isRequestingSameIndex";
  v6[1] = a1 + 17;
  v7[0] = "destinationIndex";
  v7[1] = a1 + 12;
  v8[0] = "activationMethod";
  v8[1] = a1 + 8;
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<enum WindowsInternal::ComposableShell::Experiences::Switcher::Tip::ActivationMethod &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
           a2,
           v8,
           v7,
           v6,
           v5,
           v4,
           v3);
}
