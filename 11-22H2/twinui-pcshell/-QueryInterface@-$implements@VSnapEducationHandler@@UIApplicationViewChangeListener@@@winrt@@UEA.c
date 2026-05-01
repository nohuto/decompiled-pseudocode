/*
 * XREFs of ?QueryInterface@?$implements@VSnapEducationHandler@@UIApplicationViewChangeListener@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DAEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<SnapEducationHandler,IApplicationViewChangeListener>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  return winrt::impl::root_implements<SnapEducationHandler,IApplicationViewChangeListener>::query_interface(
           (volatile signed __int32 *)(a1 + 8),
           a2,
           a3);
}
