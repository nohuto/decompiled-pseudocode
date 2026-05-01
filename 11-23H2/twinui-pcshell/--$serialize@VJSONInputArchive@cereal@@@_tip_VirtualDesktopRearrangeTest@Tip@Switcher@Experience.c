/*
 * XREFs of ??$serialize@VJSONInputArchive@cereal@@@_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1805415B0
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x180543B70 (-deserialize@-$test_merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@Compo.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEAW4ActivationMethod@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@cereal@@V?$NameValuePair@AEAI@2@V?$NameValuePair@AEA_N@2@V42@V42@V42@V?$NameValuePair@AEAW4SwitcherType@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@2@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAW4ActivationMethod@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@1@$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEA_N@1@222$$QEAV?$NameValuePair@AEAW4SwitcherType@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@1@@Z @ 0x180540FB0 (--$process@V-$NameValuePair@AEAW4ActivationMethod@Tip@Switcher@Experiences@ComposableShell@Windo.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest::serialize<cereal::JSONInputArchive>(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[2]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v4[2]; // [rsp+50h] [rbp-9h] BYREF
  _QWORD v5[2]; // [rsp+60h] [rbp+7h] BYREF
  _QWORD v6[2]; // [rsp+70h] [rbp+17h] BYREF
  _QWORD v7[2]; // [rsp+80h] [rbp+27h] BYREF
  _QWORD v8[2]; // [rsp+90h] [rbp+37h] BYREF
  _QWORD v9[2]; // [rsp+A0h] [rbp+47h] BYREF

  v3[0] = "switcherType";
  v3[1] = a1 + 12;
  v4[0] = "areModificationsSuspended";
  v4[1] = a1 + 20;
  v5[0] = "isUIAlreadyUpdated";
  v5[1] = a1 + 23;
  v6[0] = "didVirtualDesktopDisappear";
  v6[1] = a1 + 22;
  v7[0] = "isRequestingSameIndex";
  v7[1] = a1 + 21;
  v8[0] = "destinationIndex";
  v8[1] = a1 + 16;
  v9[0] = "activationMethod";
  v9[1] = a1 + 8;
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<enum WindowsInternal::ComposableShell::Experiences::Switcher::Tip::ActivationMethod &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<enum WindowsInternal::ComposableShell::Experiences::Switcher::Tip::SwitcherType &>>(
           a2,
           v9,
           v8,
           (int)v7,
           (__int64)v6,
           (__int64)v5,
           (__int64)v4,
           (__int64)v3);
}
