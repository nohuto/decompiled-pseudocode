/*
 * XREFs of sub_1409312DC @ 0x1409312DC
 * Callers:
 *     sub_14082A2D4 @ 0x14082A2D4 (sub_14082A2D4.c)
 * Callees:
 *     sub_140544640 @ 0x140544640 (sub_140544640.c)
 *     sub_1409311AC @ 0x1409311AC (sub_1409311AC.c)
 */

__int64 __fastcall sub_1409312DC(__int64 a1, int a2)
{
  int *v3; // rax
  int *v4; // rbx
  __int64 result; // rax
  char v6; // cl
  int v7; // eax
  bool v8; // zf

  v3 = sub_140544640(a2);
  v4 = v3;
  if ( (dword_140D068B8 & 0x40) == 0 || (result = sub_1409311AC((__int64)v3, *(_DWORD *)(a1 + 36)), (int)result >= 0) )
  {
    v6 = byte_140C0CAF0;
    *(_QWORD *)(a1 + 34512) = *((_QWORD *)v4 + 4);
    v7 = *(_DWORD *)(a1 + 36);
    v8 = v7 == v4[1];
    v4[6] = v7;
    if ( !v8 )
      v6 = 0;
    result = 0LL;
    byte_140C0CAF0 = v6;
  }
  return result;
}
