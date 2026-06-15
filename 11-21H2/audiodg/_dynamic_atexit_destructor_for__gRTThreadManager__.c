/*
 * XREFs of _dynamic_atexit_destructor_for__gRTThreadManager__ @ 0x14003A010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__gRTThreadManager__()
{
  return ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&gRTThreadManager);
}
