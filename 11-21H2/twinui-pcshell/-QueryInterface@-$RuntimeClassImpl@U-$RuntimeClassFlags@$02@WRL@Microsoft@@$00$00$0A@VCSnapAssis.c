/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnapAssistControllerBase@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18017F470
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnapAssistControllerBase@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020F630 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18020F630.c)
 *     ?QueryInterface@CSnapAssistController@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020F650 (-QueryInterface@CSnapAssistController@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSnapAssistController@@WBCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020F670 (-QueryInterface@CSnapAssistController@@WBCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSnapAssistController@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020F690 (-QueryInterface@CSnapAssistController@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSnapAssistController@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020F6B0 (-QueryInterface@CSnapAssistController@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSnapAssistController@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020F6D0 (-QueryInterface@CSnapAssistController@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSnapAssistController@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020F6F0 (-QueryInterface@CSnapAssistController@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CSnapAssistControllerBase>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CSnapAssistControllerBase>>(
           a1,
           a2,
           a3);
}
