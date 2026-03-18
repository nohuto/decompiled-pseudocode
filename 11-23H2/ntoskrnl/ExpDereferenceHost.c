/*
 * XREFs of ExpDereferenceHost @ 0x140A015AC
 * Callers:
 *     ExRegisterExtension @ 0x1408213F0 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x140821610 (ExRegisterHost.c)
 *     ExUnregisterExtension @ 0x140A014C0 (ExUnregisterExtension.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall ExpDereferenceHost(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 4, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
