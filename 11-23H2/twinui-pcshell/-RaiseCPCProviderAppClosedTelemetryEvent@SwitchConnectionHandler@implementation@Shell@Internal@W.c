/*
 * XREFs of ?RaiseCPCProviderAppClosedTelemetryEvent@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEAAXW4DisconnectSource@23456@AEBUhstring@6@1_N@Z @ 0x1807320D0
 * Callers:
 *     _lambda_66e3247105c53d232400c257ddcfd6f2_::operator() @ 0x180282544 (_lambda_66e3247105c53d232400c257ddcfd6f2_--operator().c)
 *     _lambda_c08ce6a39495b94ac81d1bf94c809a99_::operator() @ 0x180282678 (_lambda_c08ce6a39495b94ac81d1bf94c809a99_--operator().c)
 *     _lambda_d5554fb7d1d16b7c69ea1af45fa7d089_::operator() @ 0x1802827AC (_lambda_d5554fb7d1d16b7c69ea1af45fa7d089_--operator().c)
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x1802829E0 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClou_ea_1802829E0.c)
 * Callees:
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?GetCloudPCMode@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAIXZ @ 0x1801AD86C (-GetCloudPCMode@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAIXZ.c)
 *     ??$CPCProviderAppClose@IHPEBGPEBGAEA_NAEAW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTelemetryCore@@SAX$$QEAI$$QEAH$$QEAPEBG2AEA_NAEAW4SourceOfDisconnect@0@@Z @ 0x180731038 (--$CPCProviderAppClose@IHPEBGPEBGAEA_NAEAW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTele.c)
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::RaiseCPCProviderAppClosedTelemetryEvent(
        __int64 a1,
        int a2,
        __int64 a3,
        winrt::hstring *a4,
        BOOL a5)
{
  winrt::hstring *v5; // r8
  const unsigned __int16 *v6; // rax
  char v8[8]; // [rsp+30h] [rbp-20h] BYREF
  const unsigned __int16 *v9; // [rsp+38h] [rbp-18h] BYREF
  const unsigned __int16 *v10; // [rsp+40h] [rbp-10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+10h] BYREF
  int v12; // [rsp+68h] [rbp+18h] BYREF

  v11 = a1;
  v8[0] = 1;
  a5 = a2 == 1;
  v9 = winrt::hstring::c_str(a4);
  v6 = winrt::hstring::c_str(v5);
  v12 = 0;
  v10 = v6;
  LODWORD(v11) = winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode();
  return CloudPCTelemetryCore::CPCProviderAppClose<unsigned int,int,unsigned short const *,unsigned short const *,bool &,enum CloudPCTelemetryCore::SourceOfDisconnect &>(
           (int *)&v11,
           &v12,
           (__int64 *)&v10,
           (__int64 *)&v9,
           v8,
           &a5);
}
