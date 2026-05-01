/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_SnapFlyoutShowTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180221108
 * Callers:
 *     ?serialize@?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180223430 (-serialize@-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tso.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V?$nvp@AEAW4SnapControlType@SnapComponent@Shell@Internal@Windows@winrt@@@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000000$$QEAV?$nvp@AEAW4SnapControlType@SnapComponent@Shell@Internal@Windows@winrt@@@1@0@Z @ 0x180220D6C (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V-$nvp@AEAW4SnapControlType@SnapComponent@.c)
 */

__int64 __fastcall _tip_SnapFlyoutShowTest::serialize<tson::output_archive>(__int64 a1, tson::output_archive *a2)
{
  __int64 v3; // [rsp+98h] [rbp-68h] BYREF
  char v4; // [rsp+A0h] [rbp-60h]
  __int64 v5; // [rsp+A8h] [rbp-58h]
  __int64 v6; // [rsp+B0h] [rbp-50h] BYREF
  char v7; // [rsp+B8h] [rbp-48h]
  __int64 v8; // [rsp+C0h] [rbp-40h]
  __int64 v9; // [rsp+C8h] [rbp-38h] BYREF
  char v10; // [rsp+D0h] [rbp-30h]
  __int64 v11; // [rsp+D8h] [rbp-28h]
  __int64 v12; // [rsp+E0h] [rbp-20h] BYREF
  char v13; // [rsp+E8h] [rbp-18h]
  __int64 v14; // [rsp+F0h] [rbp-10h]
  __int64 v15; // [rsp+F8h] [rbp-8h] BYREF
  char v16; // [rsp+100h] [rbp+0h]
  __int64 v17; // [rsp+108h] [rbp+8h]
  __int64 v18; // [rsp+110h] [rbp+10h] BYREF
  char v19; // [rsp+118h] [rbp+18h]
  __int64 v20; // [rsp+120h] [rbp+20h]

  v4 = 13;
  v7 = 19;
  v3 = (__int64)"noMonitorInfo";
  v5 = a1 + 23;
  v6 = (__int64)"controlFailedToLoad";
  v8 = a1 + 21;
  v9 = (__int64)"threadFailedToStart";
  v11 = a1 + 22;
  v12 = (__int64)"reused";
  v14 = a1 + 24;
  v15 = (__int64)"shown";
  v17 = a1 + 17;
  v18 = (__int64)"canceled";
  v20 = a1 + 18;
  v10 = 19;
  v13 = 6;
  v16 = 5;
  v19 = 8;
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<enum winrt::Windows::Internal::Shell::SnapComponent::SnapControlType &>,tson::nvp<bool &>>(
           a2,
           (__int64)&v18,
           (__int64)&v15,
           &v12,
           &v9,
           (__int64)&v6,
           (__int64)&v3);
}
