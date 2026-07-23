/*
 * XREFs of sub_1405672C0 @ 0x1405672C0
 * Callers:
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 *     KeEnterKernelDebugger @ 0x140566EC0 (KeEnterKernelDebugger.c)
 *     sub_1405788B0 @ 0x1405788B0 (sub_1405788B0.c)
 * Callees:
 *     HeadlessDispatch @ 0x1403C2310 (HeadlessDispatch.c)
 *     DbgBreakPointWithStatus @ 0x140429800 (DbgBreakPointWithStatus.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140567D6C @ 0x140567D6C (sub_140567D6C.c)
 */

void __fastcall sub_1405672C0(ULONG Status)
{
  do
    DbgBreakPointWithStatus(Status);
  while ( Status != 3 );
}
