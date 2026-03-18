/*
 * XREFs of ACPIDereferenceIommuBusInterface @ 0x1C0087510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ACPIDereferenceIommuBusInterface(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 20, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
