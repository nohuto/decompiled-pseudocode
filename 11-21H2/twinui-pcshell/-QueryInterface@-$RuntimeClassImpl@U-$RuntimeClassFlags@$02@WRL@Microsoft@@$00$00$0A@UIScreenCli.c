/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIScreenClippingExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180180170
 * Callers:
 *     ?QueryInterface@CScreenClippingExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F4EE0 (-QueryInterface@CScreenClippingExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CScreenClippingExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F4F00 (-QueryInterface@CScreenClippingExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CScreenClippingExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F4F20 (-QueryInterface@CScreenClippingExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IScreenClippingExperienceManager,Windows::Foundation::IClosable,IImmersiveWindowMessageNotification>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IScreenClippingExperienceManager,Windows::Foundation::IClosable,IImmersiveWindowMessageNotification>>(
           a1,
           a2,
           a3);
}
