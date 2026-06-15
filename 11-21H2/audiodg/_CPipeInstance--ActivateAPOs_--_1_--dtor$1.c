/*
 * XREFs of _CPipeInstance::ActivateAPOs_::_1_::dtor$1 @ 0x140038B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::ActivateAPOs_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)(a2 + 256));
}
