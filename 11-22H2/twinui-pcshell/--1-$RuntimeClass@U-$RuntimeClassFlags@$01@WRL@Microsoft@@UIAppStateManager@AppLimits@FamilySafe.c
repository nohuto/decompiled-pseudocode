/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x180396520
 * Callers:
 *     _AgileRegistrationList::AgileCallbackArray::AgileCallbackArray_::_1_::dtor$0 @ 0x1801D068A (_AgileRegistrationList--AgileCallbackArray--AgileCallbackArray_--_1_--dtor$0.c)
 *     _Win32AppStateManager::Win32AppStateManager_::_1_::dtor$0 @ 0x1802B8859 (_Win32AppStateManager--Win32AppStateManager_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::FamilySafety::AppLimits::IAppStateManager,Microsoft::WRL::FtmBase>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::FamilySafety::AppLimits::IAppStateManager,Microsoft::WRL::FtmBase>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 44) = -1073741823;
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 32));
}
