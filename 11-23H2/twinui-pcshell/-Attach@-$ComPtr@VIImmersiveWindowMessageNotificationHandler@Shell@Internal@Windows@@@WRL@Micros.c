/*
 * XREFs of ?Attach@?$ComPtr@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@@Z @ 0x180172AB0
 * Callers:
 *     ??$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@PEAVUndockedSearchAppExperienceManager@@P85@EAAJI_K_J@_E@Details@WRL@Microsoft@@YAJPEAPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@$$QEAPEAVUndockedSearchAppExperienceManager@@$$QEAP87@EAAJI_K_J@_E@Z @ 0x18017280C (--$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@P.c)
 *     ??$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@PEAVCortanaSharedExperienceManager@@P85@EAAJI_K_J@Z@Details@WRL@Microsoft@@YAJPEAPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@$$QEAPEAVCortanaSharedExperienceManager@@$$QEAP87@EAAJI_K_J@Z@Z @ 0x180428D70 (--$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Win_ea_180428D70.c)
 *     ??$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@PEAVSearchAppExperienceManager@@P85@EAAJI_K_J@Z@Details@WRL@Microsoft@@YAJPEAPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@$$QEAPEAVSearchAppExperienceManager@@$$QEAP87@EAAJI_K_J@Z@Z @ 0x18045D1BC (--$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Win_ea_18045D1BC.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801AA750 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImmersiveWindowM.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler>::Attach(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // rax

  if ( *a1 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IImmersiveWindowMessageNotification>::Release();
  *a1 = a2;
  return result;
}
