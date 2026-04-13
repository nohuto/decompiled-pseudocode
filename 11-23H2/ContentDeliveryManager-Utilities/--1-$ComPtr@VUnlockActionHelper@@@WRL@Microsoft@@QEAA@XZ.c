/*
 * XREFs of ??1?$ComPtr@VUnlockActionHelper@@@WRL@Microsoft@@QEAA@XZ @ 0x180052D64
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_UnlockActionHelper_UnlockActionHelper_IInspectable___&__::_1_::dtor$1 @ 0x1800D60F1 (_Microsoft--WRL--Details--MakeAndInitialize_UnlockActionHelper_UnlockActionHelper_I_ea_1800D60F1.c)
 *     _ContentManagement::ContentManagementService::QueueActionAfterUnlock_::_1_::dtor$0 @ 0x1800D6B1E (_ContentManagement--ContentManagementService--QueueActionAfterUnlock_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<UnlockActionHelper>::~ComPtr<UnlockActionHelper>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<UnlockActionHelper>::InternalRelease(a1);
}
