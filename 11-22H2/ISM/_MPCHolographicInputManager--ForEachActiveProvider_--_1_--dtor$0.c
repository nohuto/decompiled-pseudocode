/*
 * XREFs of _MPCHolographicInputManager::ForEachActiveProvider_::_1_::dtor$0 @ 0x1800C6117
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCHolographicInputManager::ForEachActiveProvider_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::function<void (IMPCInputProviderBase *)>::~function<void (IMPCInputProviderBase *)>(
           *(_QWORD *)(a2 + 72),
           a2);
}
