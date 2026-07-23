/*
 * XREFs of sub_14055DEF4 @ 0x14055DEF4
 * Callers:
 *     sub_14055D2EC @ 0x14055D2EC (sub_14055D2EC.c)
 * Callees:
 *     sub_140554800 @ 0x140554800 (sub_140554800.c)
 *     sub_140554878 @ 0x140554878 (sub_140554878.c)
 *     sub_140593218 @ 0x140593218 (sub_140593218.c)
 */

__int64 __fastcall sub_14055DEF4(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v8; // rbx
  int v9; // eax
  __int64 result; // rax
  unsigned int v11; // ecx
  char *v12; // rbx
  unsigned __int16 v13; // dx
  unsigned __int64 v14; // rdx

  v8 = (unsigned int)sub_140554878(*(_QWORD *)(a2 + 248));
  v9 = sub_140554800(*(_QWORD *)(a2 + 248), 0x100u);
  result = sub_140593218(a1, *(_QWORD *)(a2 + 248) - v8, (unsigned int)(v9 + v8));
  v11 = result;
  if ( (int)result >= 0 )
  {
    v12 = &byte_140015000;
    v13 = 144;
    while ( 1 )
    {
      v14 = *(_QWORD *)(v13 + a2);
      if ( v14 < a3 || v14 >= a4 )
      {
        result = sub_140593218(a1, v14 & 0xFFFFFFFFFFFFF000uLL, 4096LL);
        v11 = result;
        if ( (int)result < 0 )
          break;
      }
      v12 += 2;
      v13 = *(_WORD *)v12;
      if ( *(_WORD *)v12 == 0xFFFF )
        return v11;
    }
  }
  return result;
}
