/*
 * XREFs of ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004A4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount()
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
}
