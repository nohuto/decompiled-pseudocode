/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_PinManagerPinTest@PinManagerTipTests@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18069D78C
 * Callers:
 *     ?serialize@?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1806AA220 (-serialize@-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@EEAAXAEA.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x180013820 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$process@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@tson@@V12@V?$nvp@AEAW4ConsentType@PinManagerTipTests@@@2@V?$nvp@AEA_N@2@V?$nvp@AEAK@2@V?$nvp@AEAJ@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0$$QEAV?$nvp@AEAW4ConsentType@PinManagerTipTests@@@1@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAK@1@$$QEAV?$nvp@AEAJ@1@@Z @ 0x18069D158 (--$process@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@tson@@V12@V-.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PinManagerTipTests::_tip_PinManagerPinTest::serialize<tson::output_archive>(
        __int64 a1,
        tson::output_archive *a2)
{
  __int64 v5; // [rsp+40h] [rbp-C0h] BYREF
  char v6; // [rsp+48h] [rbp-B8h]
  __int64 v7; // [rsp+50h] [rbp-B0h]
  __int64 v8; // [rsp+58h] [rbp-A8h] BYREF
  char v9; // [rsp+60h] [rbp-A0h]
  __int64 v10; // [rsp+68h] [rbp-98h]
  __int64 v11; // [rsp+70h] [rbp-90h] BYREF
  char v12; // [rsp+78h] [rbp-88h]
  __int64 v13; // [rsp+80h] [rbp-80h]
  const char *v14; // [rsp+88h] [rbp-78h] BYREF
  char v15; // [rsp+90h] [rbp-70h]
  __int64 v16; // [rsp+98h] [rbp-68h]
  const char *v17; // [rsp+A0h] [rbp-60h] BYREF
  char v18; // [rsp+A8h] [rbp-58h]
  _QWORD *v19; // [rsp+B0h] [rbp-50h]
  const char *v20; // [rsp+B8h] [rbp-48h] BYREF
  char v21; // [rsp+C0h] [rbp-40h]
  _QWORD *v22; // [rsp+C8h] [rbp-38h]
  _QWORD v23[4]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v24[4]; // [rsp+F0h] [rbp-10h] BYREF

  std::wstring::wstring(v24, (_WORD *)(a1 + 20));
  std::wstring::wstring(v23, (_WORD *)(a1 + 540));
  v5 = (__int64)"pinFailureResult";
  v6 = 16;
  v7 = a1 + 1072;
  v8 = (__int64)"caller";
  v9 = 6;
  v10 = a1 + 1068;
  v11 = (__int64)"consentDialogApproved";
  v12 = 21;
  v13 = a1 + 1064;
  v14 = "consentType";
  v15 = 11;
  v16 = a1 + 1060;
  v17 = "localRequestorProcessName";
  v18 = 25;
  v19 = v23;
  v20 = "localRequestorAppId";
  v21 = 19;
  v22 = v24;
  *(_QWORD *)a2 = "apiType";
  *((_BYTE *)a2 + 8) = 7;
  tson::output_archive::saveValue(a2, *(_DWORD *)(a1 + 16));
  tson::output_archive::process<tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<enum PinManagerTipTests::ConsentType &>,tson::nvp<bool &>,tson::nvp<unsigned long &>,tson::nvp<long &>>(
    a2,
    (__int64)&v20,
    (__int64)&v17,
    (__int64)&v14,
    (__int64)&v11,
    (__int64)&v8,
    (__int64)&v5);
  std::wstring::_Tidy_deallocate((__int64)v23);
  return std::wstring::_Tidy_deallocate((__int64)v24);
}
