/*
 * XREFs of _Win32kInterop::DeliverToContextualProcessing_::_1_::dtor$0 @ 0x1800F9649
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32kInterop::DeliverToContextualProcessing_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::function<void (IMPCInputProviderBase *)>::~function<void (IMPCInputProviderBase *)>(
           *(_QWORD *)(a2 + 128),
           a2);
}
