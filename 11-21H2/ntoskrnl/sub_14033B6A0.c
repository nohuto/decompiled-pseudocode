/*
 * XREFs of sub_14033B6A0 @ 0x14033B6A0
 * Callers:
 *     sub_1402416A4 @ 0x1402416A4 (sub_1402416A4.c)
 *     sub_140246160 @ 0x140246160 (sub_140246160.c)
 *     sub_140265BE4 @ 0x140265BE4 (sub_140265BE4.c)
 *     sub_140266158 @ 0x140266158 (sub_140266158.c)
 *     sub_140267060 @ 0x140267060 (sub_140267060.c)
 *     sub_14028C230 @ 0x14028C230 (sub_14028C230.c)
 *     sub_14028CB64 @ 0x14028CB64 (sub_14028CB64.c)
 *     sub_1402C15F0 @ 0x1402C15F0 (sub_1402C15F0.c)
 *     sub_1402C7DF0 @ 0x1402C7DF0 (sub_1402C7DF0.c)
 *     sub_1402C8740 @ 0x1402C8740 (sub_1402C8740.c)
 *     sub_1402CA210 @ 0x1402CA210 (sub_1402CA210.c)
 *     sub_1402CB2D0 @ 0x1402CB2D0 (sub_1402CB2D0.c)
 *     sub_1402CC9A0 @ 0x1402CC9A0 (sub_1402CC9A0.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402E86F0 @ 0x1402E86F0 (sub_1402E86F0.c)
 *     sub_140315EE0 @ 0x140315EE0 (sub_140315EE0.c)
 *     sub_14033AC90 @ 0x14033AC90 (sub_14033AC90.c)
 *     sub_14033B190 @ 0x14033B190 (sub_14033B190.c)
 *     sub_14033E970 @ 0x14033E970 (sub_14033E970.c)
 *     sub_14033FAA4 @ 0x14033FAA4 (sub_14033FAA4.c)
 *     sub_140340078 @ 0x140340078 (sub_140340078.c)
 *     sub_14037B44C @ 0x14037B44C (sub_14037B44C.c)
 *     sub_14037E338 @ 0x14037E338 (sub_14037E338.c)
 *     sub_14038E608 @ 0x14038E608 (sub_14038E608.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 *     sub_1403B770C @ 0x1403B770C (sub_1403B770C.c)
 *     sub_1403D5CF4 @ 0x1403D5CF4 (sub_1403D5CF4.c)
 *     sub_1405827E0 @ 0x1405827E0 (sub_1405827E0.c)
 *     sub_14059B62C @ 0x14059B62C (sub_14059B62C.c)
 *     sub_14059D170 @ 0x14059D170 (sub_14059D170.c)
 *     sub_1405C0D40 @ 0x1405C0D40 (sub_1405C0D40.c)
 *     sub_1406EC2D4 @ 0x1406EC2D4 (sub_1406EC2D4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14033B6A0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 && qword_140C50780 )
  {
    if ( (a1 & 0x10) != 0 )
      LODWORD(a1) = a1 & 0xFFFFFFEF;
    else
      LODWORD(a1) = ~(_DWORD)qword_140C50780 & a1;
  }
  result = (a2 << 32) | (unsigned int)a1;
  if ( qword_140C50780 )
  {
    if ( (qword_140C50780 & result) != 0 )
      return result | 0x10;
    else
      return qword_140C50780 | result;
  }
  return result;
}
