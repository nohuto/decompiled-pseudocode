/*
 * XREFs of ExpDereferenceHost @ 0x140A0282C
 * Callers:
 *     ExRegisterExtension @ 0x1408484A0 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x1408486C4 (ExRegisterHost.c)
 *     ExUnregisterExtension @ 0x140A02740 (ExUnregisterExtension.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall ExpDereferenceHost(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 4, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
