/*
 * XREFs of ExpDereferenceHost @ 0x140A0183C
 * Callers:
 *     ExRegisterExtension @ 0x1408216F0 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x140821910 (ExRegisterHost.c)
 *     ExUnregisterExtension @ 0x140A01750 (ExUnregisterExtension.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall ExpDereferenceHost(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 4, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
