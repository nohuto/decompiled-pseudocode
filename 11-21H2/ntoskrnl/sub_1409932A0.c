/*
 * XREFs of sub_1409932A0 @ 0x1409932A0
 * Callers:
 *     sub_14098FDE4 @ 0x14098FDE4 (sub_14098FDE4.c)
 *     sub_14098FFD0 @ 0x14098FFD0 (sub_14098FFD0.c)
 * Callees:
 *     sub_140256CA0 @ 0x140256CA0 (sub_140256CA0.c)
 */

void __fastcall sub_1409932A0(char a1, char a2, char a3)
{
  __int64 *v3; // rax
  __int64 *v4; // rcx

  if ( a1 )
  {
    if ( a2 )
    {
      v3 = (__int64 *)&stru_140039528;
      v4 = qword_1400395E8;
    }
    else
    {
      v4 = qword_140037FE0;
      v3 = qword_1400378C8;
    }
  }
  else if ( a2 )
  {
    v3 = qword_1400394D8;
    v4 = qword_140039030;
  }
  else
  {
    v4 = qword_1400392F0;
    v3 = qword_140039658;
  }
  if ( !a3 )
    v4 = v3;
  sub_140256CA0((PCEVENT_DESCRIPTOR)v4);
}
