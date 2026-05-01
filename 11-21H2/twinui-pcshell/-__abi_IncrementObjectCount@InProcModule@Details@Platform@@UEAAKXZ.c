/*
 * XREFs of ?__abi_IncrementObjectCount@InProcModule@Details@Platform@@UEAAKXZ @ 0x18018E640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Platform::Details::InProcModule::__abi_IncrementObjectCount(Platform::Details::InProcModule *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
}
