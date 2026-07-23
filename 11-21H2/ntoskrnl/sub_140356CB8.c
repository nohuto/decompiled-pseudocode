/*
 * XREFs of sub_140356CB8 @ 0x140356CB8
 * Callers:
 *     sub_140356BCC @ 0x140356BCC (sub_140356BCC.c)
 * Callees:
 *     sub_1403999AC @ 0x1403999AC (sub_1403999AC.c)
 *     sub_140419CD4 @ 0x140419CD4 (sub_140419CD4.c)
 */

__int64 __fastcall sub_140356CB8(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // rbx
  int v8; // r8d
  int v9; // ecx
  __int64 v10; // [rsp+20h] [rbp-18h]

  result = (unsigned int)dword_140002ED4[34 * a3];
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 1 )
    {
      v7 = a1 + 120;
      sub_1403999AC(a1 + 72, a3, 0, 0, a1 + 120);
      v10 = v7;
LABEL_4:
      v8 = 4;
      v9 = a1 + 72;
      return sub_1403999AC(v9, a3, v8, 5, v10);
    }
    if ( (_DWORD)result != 2 )
      return result;
    if ( !(unsigned int)sub_140419CD4() )
    {
      v8 = 0;
      v10 = a2 + 104;
      v9 = a2 + 56;
      return sub_1403999AC(v9, a3, v8, 5, v10);
    }
    if ( *(_BYTE *)(a1 + 125) )
      sub_1403999AC(a1 + 72, a3, 0, 0, a1 + 120);
    result = sub_1403999AC((int)a2 + 56, a3, 1, 3, a2 + 104);
    if ( *(_BYTE *)(a1 + 125) )
    {
      v10 = a1 + 120;
      goto LABEL_4;
    }
  }
  return result;
}
