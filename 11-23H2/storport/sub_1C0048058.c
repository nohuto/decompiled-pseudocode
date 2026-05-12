/*
 * XREFs of sub_1C0048058 @ 0x1C0048058
 * Callers:
 *     sub_1C00A96E4 @ 0x1C00A96E4 (sub_1C00A96E4.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *sub_1C0048058())(__int64 a1)
{
  __int64 (__fastcall *result)(__int64); // rax

  LODWORD(xmmword_1C0093820) = 1;
  *((_QWORD *)&xmmword_1C0093820 + 1) = sub_1C0045BA0;
  *(_QWORD *)&xmmword_1C0093830 = sub_1C0045CA0;
  *((_QWORD *)&xmmword_1C0093830 + 1) = sub_1C0045A50;
  *(_QWORD *)&xmmword_1C0093840 = sub_1C0045B60;
  *((_QWORD *)&xmmword_1C0093840 + 1) = sub_1C00459A0;
  *(_QWORD *)&xmmword_1C0093850 = sub_1C0045C20;
  *((_QWORD *)&xmmword_1C0093850 + 1) = sub_1C0045960;
  *(_QWORD *)&xmmword_1C0093860 = sub_1C0045CE0;
  *((_QWORD *)&xmmword_1C0093860 + 1) = sub_1C0045B10;
  result = sub_1C0025EF0;
  qword_1C0093870 = (__int64)sub_1C0025EF0;
  return result;
}
