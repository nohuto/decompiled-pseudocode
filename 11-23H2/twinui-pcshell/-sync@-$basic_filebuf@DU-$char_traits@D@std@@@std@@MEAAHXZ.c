/*
 * XREFs of ?sync@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAHXZ @ 0x18064BEE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::filebuf::sync(FILE **a1)
{
  int v1; // ebx

  v1 = 0;
  if ( !a1[16] || (*(unsigned int (__fastcall **)(FILE **, __int64))&(*a1)->_flag)(a1, 0xFFFFFFFFLL) == -1 )
    return 0LL;
  LOBYTE(v1) = fflush(a1[16]) >= 0;
  return (unsigned int)(v1 - 1);
}
