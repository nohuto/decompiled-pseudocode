/*
 * XREFs of _ApplicationViewManagerVisibilityDebouncer::GetCachedAppViewIndex_::_1_::dtor$4 @ 0x18021DA6E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::GetCachedAppViewIndex_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>(*(_QWORD *)(a2 + 40));
}
