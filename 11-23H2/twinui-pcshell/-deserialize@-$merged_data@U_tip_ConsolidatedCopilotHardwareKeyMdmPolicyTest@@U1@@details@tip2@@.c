/*
 * XREFs of ?deserialize@?$merged_data@U_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180274E70
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RV?$nvp@AEA_N@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@@Z @ 0x180461B94 (--$-RV-$nvp@AEA_N@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x18046E058 (-startNode@input_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tip2::details::merged_data<_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest,_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  const char *v5; // [rsp+20h] [rbp-28h] BYREF
  char v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]

  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::startNode((tson::input_archive *)a2);
  v6 = 20;
  v5 = "policyValueIncorrect";
  v4 = a1 + 264;
  if ( !a1 )
    v4 = 16LL;
  v7 = v4;
  tson::input_archive::operator()<tson::nvp<bool &>>(a2, &v5);
  tson::input_archive::finishNode((tson::input_archive *)a2);
}
