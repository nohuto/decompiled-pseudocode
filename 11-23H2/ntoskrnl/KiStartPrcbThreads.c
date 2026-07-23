/*
 * XREFs of KiStartPrcbThreads @ 0x140382A50
 * Callers:
 *     KiInitializeKernel @ 0x140A8BF10 (KiInitializeKernel.c)
 * Callees:
 *     KiStartPrcbThread @ 0x140382BC0 (KiStartPrcbThread.c)
 */

__int64 __fastcall KiStartPrcbThreads(__int64 a1)
{
  return KiStartPrcbThread(*(_QWORD *)(a1 + 13112), a1);
}
