/*
 * XREFs of sub_140A0282C @ 0x140A0282C
 * Callers:
 *     ExRegisterExtension @ 0x1408484A0 (ExRegisterExtension.c)
 *     sub_1408486C4 @ 0x1408486C4 (sub_1408486C4.c)
 *     ExUnregisterExtension @ 0x140A02740 (ExUnregisterExtension.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140A0282C(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 4, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
