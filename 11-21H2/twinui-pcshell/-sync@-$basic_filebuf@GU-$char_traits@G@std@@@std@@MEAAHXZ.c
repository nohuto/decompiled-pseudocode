/*
 * XREFs of ?sync@?$basic_filebuf@GU?$char_traits@G@std@@@std@@MEAAHXZ @ 0x1805DEB20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::basic_filebuf<unsigned short>::sync(FILE **a1)
{
  if ( !a1[16]
    || (*(unsigned __int16 (__fastcall **)(FILE **, __int64))&(*a1)->_flag)(a1, 0xFFFFLL) == 0xFFFF
    || fflush(a1[16]) >= 0 )
  {
    return 0LL;
  }
  else
  {
    return 0xFFFFFFFFLL;
  }
}
