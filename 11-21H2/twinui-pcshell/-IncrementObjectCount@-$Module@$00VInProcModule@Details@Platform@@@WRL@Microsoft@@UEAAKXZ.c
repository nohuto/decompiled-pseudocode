/*
 * XREFs of ?IncrementObjectCount@?$Module@$00VInProcModule@Details@Platform@@@WRL@Microsoft@@UEAAKXZ @ 0x18018E390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 Microsoft::WRL::Module<1,Platform::Details::InProcModule>::IncrementObjectCount()
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
}
