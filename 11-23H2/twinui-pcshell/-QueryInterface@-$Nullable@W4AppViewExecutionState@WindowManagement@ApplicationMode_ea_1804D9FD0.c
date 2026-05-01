/*
 * XREFs of ?QueryInterface@?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804D9FD0
 * Callers:
 *     ?QueryInterface@?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18029E7C0 (-QueryInterface@-$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Wi.c)
 *     ?QueryInterface@?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18029E7E0 (-QueryInterface@-$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationMode_ea_18029E7E0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IReference<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>,Microsoft::WRL::FtmBase>>(
           a1,
           a2,
           a3);
}
