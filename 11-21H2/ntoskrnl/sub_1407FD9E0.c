/*
 * XREFs of sub_1407FD9E0 @ 0x1407FD9E0
 * Callers:
 *     sub_1407FF888 @ 0x1407FF888 (sub_1407FF888.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1403697C8 @ 0x1403697C8 (sub_1403697C8.c)
 *     sub_14038B454 @ 0x14038B454 (sub_14038B454.c)
 */

void __fastcall sub_1407FD9E0(char a1)
{
  __int16 v2; // bx

  v2 = -1;
  if ( (unsigned int)sub_14038B454() < 0xFFFF )
    v2 = sub_14038B454();
  sub_1402D66A8((ULONG_PTR)&qword_140C24600);
  WORD6(xmmword_140C54798) = v2;
  BYTE8(xmmword_140C54798) = (16 * a1) | BYTE8(xmmword_140C54798) & 0xF;
  BYTE14(xmmword_140C54798) = dword_140C22C9C & 0xF | BYTE14(xmmword_140C54798) & 0xF0;
  sub_1403697C8(8);
  sub_1402935D0((ULONG_PTR)&qword_140C24600);
}
