/*
 * XREFs of _ctrlfp @ 0x1403E5C18
 * Callers:
 *     sub_1403E5260 @ 0x1403E5260 (sub_1403E5260.c)
 *     sub_1403E53A0 @ 0x1403E53A0 (sub_1403E53A0.c)
 *     sub_1403E54DC @ 0x1403E54DC (sub_1403E54DC.c)
 * Callees:
 *     sub_1403E5CF0 @ 0x1403E5CF0 (sub_1403E5CF0.c)
 *     _get_fpsr @ 0x14042B9F0 (_get_fpsr.c)
 */

__int64 __fastcall ctrlfp(int a1, int a2)
{
  unsigned int fpsr; // esi
  __int64 v5; // rcx

  fpsr = get_fpsr();
  v5 = a2 & a1 | fpsr & (~(_WORD)a2 | 0xFFFF807F);
  if ( byte_140C094C8 && (((unsigned __int8)(a2 & a1) | fpsr & ((unsigned __int8)~(_BYTE)a2 | 0x7F)) & 0x40) != 0 )
    sub_1403E5CF0(v5);
  else
    sub_1403E5CF0((unsigned int)v5 & 0xFFFFFFBF);
  return fpsr;
}
