/*
 * XREFs of sub_14025DAA8 @ 0x14025DAA8
 * Callers:
 *     sub_14025D8EC @ 0x14025D8EC (sub_14025D8EC.c)
 *     sub_140296FC0 @ 0x140296FC0 (sub_140296FC0.c)
 *     sub_140297430 @ 0x140297430 (sub_140297430.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 */

__int64 __fastcall sub_14025DAA8(unsigned __int16 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = HIBYTE(a1) & 0xF;
  if ( (unsigned int)v1 >= 0xB )
    RtlRaiseStatus(-1073741569);
  result = *((unsigned __int8 *)qword_140015DC0 + v1);
  if ( (_DWORD)v1 == 1 && (a1 & 0xF000u) != 0 )
    return (unsigned int)(result + 1);
  return result;
}
