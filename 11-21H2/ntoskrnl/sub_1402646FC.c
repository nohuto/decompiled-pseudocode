/*
 * XREFs of sub_1402646FC @ 0x1402646FC
 * Callers:
 *     sub_140265D40 @ 0x140265D40 (sub_140265D40.c)
 *     StartRoutine @ 0x14026C240 (StartRoutine.c)
 *     sub_1405C0D40 @ 0x1405C0D40 (sub_1405C0D40.c)
 *     sub_140982F64 @ 0x140982F64 (sub_140982F64.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1402646FC(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 14, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
