/*
 * XREFs of ProcgrpQueryMaximumProcessorCountEx @ 0x1C008A580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ProcgrpQueryMaximumProcessorCountEx(unsigned __int16 GroupNumber)
{
  if ( (unsigned __int16)(GroupNumber - 1) > 0xFFFDu )
    return ((__int64 (*)(void))PfnKeQueryMaximumProcessorCount)();
  else
    return 0LL;
}
