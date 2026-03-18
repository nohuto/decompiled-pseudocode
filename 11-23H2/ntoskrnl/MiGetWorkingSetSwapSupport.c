/*
 * XREFs of MiGetWorkingSetSwapSupport @ 0x140342978
 * Callers:
 *     MmInSwapWorkingSet @ 0x1402000BC (MmInSwapWorkingSet.c)
 *     MiOutPageSingleKernelStack @ 0x14021B580 (MiOutPageSingleKernelStack.c)
 *     MiCheckReservePageFileSpace @ 0x140282FE0 (MiCheckReservePageFileSpace.c)
 *     MmOutSwapWorkingSet @ 0x140342000 (MmOutSwapWorkingSet.c)
 *     MiOutlawInswaps @ 0x1403428E4 (MiOutlawInswaps.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x140653184 (MmQueryProcessWorkingSetSwapPages.c)
 * Callees:
 *     MiGetSharedVm @ 0x140286E74 (MiGetSharedVm.c)
 */

__int64 __fastcall MiGetWorkingSetSwapSupport(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return 0LL;
  else
    return *((_QWORD *)MiGetSharedVm(a1) + 3);
}
