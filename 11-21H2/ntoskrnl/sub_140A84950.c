/*
 * XREFs of sub_140A84950 @ 0x140A84950
 * Callers:
 *     <none>
 * Callees:
 *     HalAllocateCrashDumpRegisters @ 0x1405055F0 (HalAllocateCrashDumpRegisters.c)
 *     sub_1405FE548 @ 0x1405FE548 (sub_1405FE548.c)
 *     sub_140A83778 @ 0x140A83778 (sub_140A83778.c)
 *     sub_140A83CA4 @ 0x140A83CA4 (sub_140A83CA4.c)
 *     sub_140A88430 @ 0x140A88430 (sub_140A88430.c)
 */

__int64 __fastcall sub_140A84950(PADAPTER_OBJECT AdapterObject, PULONG NumberOfMapRegisters)
{
  __int64 v4; // rdi
  PVOID CrashDumpRegisters; // rbx

  if ( KeGetCurrentIrql() > 2u )
    sub_1405FE548();
  v4 = sub_140A88430((int)AdapterObject);
  CrashDumpRegisters = HalAllocateCrashDumpRegisters(AdapterObject, NumberOfMapRegisters);
  if ( v4 )
  {
    sub_140A83CA4(2u);
    _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 152), *NumberOfMapRegisters);
    sub_140A83778(v4, *NumberOfMapRegisters, 0);
    if ( dword_140C1AE0C )
    {
      if ( !CrashDumpRegisters )
        return -559026163LL;
    }
  }
  return (__int64)CrashDumpRegisters;
}
