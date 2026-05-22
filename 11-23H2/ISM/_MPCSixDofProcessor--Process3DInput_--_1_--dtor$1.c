/*
 * XREFs of _MPCSixDofProcessor::Process3DInput_::_1_::dtor$1 @ 0x1801DF9E1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCSixDofProcessor::Process3DInput_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)(a2 + 64));
}
