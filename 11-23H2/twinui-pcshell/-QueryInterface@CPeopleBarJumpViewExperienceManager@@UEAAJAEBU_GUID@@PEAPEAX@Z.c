/*
 * XREFs of ?QueryInterface@CPeopleBarJumpViewExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18019D480
 * Callers:
 *     ?QueryInterface@CPeopleBarJumpViewExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180297890 (-QueryInterface@CPeopleBarJumpViewExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPeopleBarJumpViewExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802978B0 (-QueryInterface@CPeopleBarJumpViewExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPeopleBarJumpViewExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802978D0 (-QueryInterface@CPeopleBarJumpViewExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CPeopleBarJumpViewExperienceManager::QueryInterface(__int64 this, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>>(
           this,
           a2,
           a3);
}
