/*
 * XREFs of MiDereferenceEnclaveModule @ 0x140A3E0B4
 * Callers:
 *     MiFreeEnclaveModules @ 0x140A3E0D8 (MiFreeEnclaveModules.c)
 *     NtLoadEnclaveData @ 0x140A3F520 (NtLoadEnclaveData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceEnclaveModule(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 8, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
