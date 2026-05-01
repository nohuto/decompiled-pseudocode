/*
 * XREFs of ?__abi_DecrementObjectCount@InProcModule@Details@Platform@@UEAAKXZ @ 0x18018E620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Platform::Details::InProcModule::__abi_DecrementObjectCount(Platform::Details::InProcModule *this)
{
  return (unsigned int)_InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
}
