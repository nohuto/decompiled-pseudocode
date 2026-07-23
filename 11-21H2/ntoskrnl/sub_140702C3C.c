/*
 * XREFs of sub_140702C3C @ 0x140702C3C
 * Callers:
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 *     sub_140701F10 @ 0x140701F10 (sub_140701F10.c)
 *     sub_140702CA4 @ 0x140702CA4 (sub_140702CA4.c)
 *     sub_1409B25E0 @ 0x1409B25E0 (sub_1409B25E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140702C3C(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  if ( (a2 & 1) == 0 )
    *(_DWORD *)(a1 + 48) = 1048587;
  *(_QWORD *)(a1 + 136) = a5;
  *(_WORD *)(a1 + 66) = 43;
  *(_QWORD *)(a1 + 248) = a3;
  *(_QWORD *)(a1 + 128) = a4;
  *(_WORD *)(a1 + 56) = 51;
  result = 639LL;
  *(_DWORD *)(a1 + 58) = 2818091;
  *(_WORD *)(a1 + 256) = 639;
  *(_DWORD *)(a1 + 62) = 2818131;
  *(_DWORD *)(a1 + 52) = 8064;
  *(_DWORD *)(a1 + 280) = 8064;
  return result;
}
