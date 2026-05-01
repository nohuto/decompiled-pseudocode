/*
 * XREFs of ?sync@?$basic_filebuf@GU?$char_traits@G@std@@@std@@MEAAHXZ @ 0x1806E4DE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::basic_filebuf<unsigned short>::sync(FILE **a1)
{
  int v1; // ebx

  v1 = 0;
  if ( !a1[16] || (*(unsigned __int16 (__fastcall **)(FILE **, __int64))&(*a1)->_flag)(a1, 0xFFFFLL) == 0xFFFF )
    return 0LL;
  LOBYTE(v1) = fflush(a1[16]) >= 0;
  return (unsigned int)(v1 - 1);
}
