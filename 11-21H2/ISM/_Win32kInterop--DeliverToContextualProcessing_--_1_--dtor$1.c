/*
 * XREFs of _Win32kInterop::DeliverToContextualProcessing_::_1_::dtor$1 @ 0x1800DF9CD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32kInterop::DeliverToContextualProcessing_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::function<void (IMPCInputProviderBase *)>::~function<void (IMPCInputProviderBase *)>(
           *(_QWORD *)(a2 + 120),
           a2);
}
