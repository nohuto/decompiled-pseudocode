/*
 * XREFs of ?deserialize@?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180274F50
 * Callers:
 *     <none>
 * Callees:
 *     ??$process@V?$nvp@W4reason@_tip_CopilotHardwareKeyInvokedTest@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@W4reason@_tip_CopilotHardwareKeyInvokedTest@@@1@@Z @ 0x18025FDE4 (--$process@V-$nvp@W4reason@_tip_CopilotHardwareKeyInvokedTest@@@tson@@@input_archive@tson@@AEAAX.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x18046E058 (-startNode@input_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  const char *v3; // [rsp+20h] [rbp-28h] BYREF
  char v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+2Ch] [rbp-1Ch]
  const char *v6; // [rsp+30h] [rbp-18h] BYREF
  char v7; // [rsp+38h] [rbp-10h]
  int v8; // [rsp+3Ch] [rbp-Ch]

  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::startNode((tson::input_archive *)a2);
  v7 = 20;
  v6 = "reason::searchInvoke";
  v8 = 2;
  v3 = "reason::settingsInvoke";
  v4 = 22;
  v5 = 3;
  tson::input_archive::process<tson::nvp<enum _tip_CopilotHardwareKeyInvokedTest::reason>>(a2, (__int64)&v3);
  tson::input_archive::process<tson::nvp<enum _tip_CopilotHardwareKeyInvokedTest::reason>>(a2, (__int64)&v6);
  tson::input_archive::finishNode((tson::input_archive *)a2);
}
