/*
 * XREFs of ??1?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@UEAA@XZ @ 0x180141B6C
 * Callers:
 *     ??_G?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@UEAAPEAXI@Z @ 0x1801419F0 (--_G-$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@deta.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>::~Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>(
        __int64 a1)
{
  *(_QWORD *)a1 = &details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>::`vftable';
  *(_QWORD *)(a1 + 8) = &details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>::`vftable'{for `IWeakReferenceSource'};
  *(_QWORD *)(a1 + 16) = &details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,wil::details::IEventInvocationContextProvider,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,wil::details::IEventInvocationContextProvider,Microsoft::WRL::FtmBase>(a1);
}
