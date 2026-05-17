/*
 * XREFs of _ctrlfp @ 0x180097E44
 * Callers:
 *     fabs @ 0x180092350 (fabs.c)
 *     _call_matherr @ 0x180096C7C (_call_matherr.c)
 *     _handle_error @ 0x180096DA8 (_handle_error.c)
 *     _except1 @ 0x1800974F0 (_except1.c)
 *     _handle_qnan1 @ 0x18009784C (_handle_qnan1.c)
 *     _umatherr @ 0x180097B98 (_umatherr.c)
 * Callees:
 *     _set_fpsr @ 0x180098E30 (_set_fpsr.c)
 *     _get_fpsr @ 0x1800A58F0 (_get_fpsr.c)
 */

__int64 __fastcall ctrlfp(int a1, int a2)
{
  unsigned int fpsr; // esi
  __int64 v5; // rcx

  fpsr = get_fpsr();
  v5 = a2 & a1 | fpsr & (~(_WORD)a2 | 0xFFFF807F);
  if ( byte_18017EE90 && (((unsigned __int8)(a2 & a1) | fpsr & ((unsigned __int8)~(_BYTE)a2 | 0x7F)) & 0x40) != 0 )
    set_fpsr(v5);
  else
    set_fpsr((unsigned int)v5 & 0xFFFFFFBF);
  return fpsr;
}
