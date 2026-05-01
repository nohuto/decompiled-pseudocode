/*
 * XREFs of ?QueryInterface@CortanaSharedExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18035AC60
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIInitializeTrustedComponentForegroundControl@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F2C90 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaEx.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIInitializeTrustedComponentForegroundControl@@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F2CB0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1801F2CB0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIInitializeTrustedComponentForegroundControl@@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F2CD0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1801F2CD0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CortanaSharedExperienceManager::QueryInterface(__int64 this, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>>(
           this,
           a2,
           a3);
}
