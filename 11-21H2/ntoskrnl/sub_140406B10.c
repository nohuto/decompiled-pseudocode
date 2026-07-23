/*
 * XREFs of sub_140406B10 @ 0x140406B10
 * Callers:
 *     sub_1403FF93C @ 0x1403FF93C (sub_1403FF93C.c)
 *     sub_140400318 @ 0x140400318 (sub_140400318.c)
 * Callees:
 *     sub_14040009C @ 0x14040009C (sub_14040009C.c)
 *     sub_1404000F0 @ 0x1404000F0 (sub_1404000F0.c)
 *     sub_140400BBC @ 0x140400BBC (sub_140400BBC.c)
 *     sub_140400C30 @ 0x140400C30 (sub_140400C30.c)
 *     sub_140400CA8 @ 0x140400CA8 (sub_140400CA8.c)
 *     sub_140400D10 @ 0x140400D10 (sub_140400D10.c)
 *     sub_140400FE0 @ 0x140400FE0 (sub_140400FE0.c)
 *     sub_140401350 @ 0x140401350 (sub_140401350.c)
 *     sub_140406900 @ 0x140406900 (sub_140406900.c)
 *     sub_140406D14 @ 0x140406D14 (sub_140406D14.c)
 */

__int64 __fastcall sub_140406B10(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  unsigned __int64 v12; // rsi
  __int64 result; // rax
  __int64 v14; // r15
  int v15; // ebx
  __int64 v16; // r14
  __int64 v17; // r12
  int v18; // esi
  __int64 v19; // rbx
  __int64 v20; // r15
  __int64 v21; // rax
  unsigned __int64 v22; // [rsp+90h] [rbp+18h]

  sub_14040009C(a1);
  v12 = *((unsigned int *)qword_140014878 + (int)a5);
  if ( a3 != (_DWORD)v12 * (unsigned int)sub_1404000F0(a1) )
    return 209715725LL;
  v22 = a3 / v12;
  sub_140401350();
  v14 = a8;
  sub_140400BBC();
  v15 = 0;
  if ( !*((_DWORD *)qword_140014878 + (int)a5) )
  {
LABEL_7:
    v16 = (unsigned int)(4 * *(_DWORD *)(a1 + 36) + 32);
    v17 = sub_140406900(a8, v16, a1, 4u);
    if ( v17 )
    {
      v18 = 0;
      if ( !*((_DWORD *)qword_140014878 + (int)a5) )
      {
        v19 = a9 - v16;
        v20 = v16 + a8;
        return sub_140406D14(a1, v17, a6, a5, 1, a7, v20, v19);
      }
      while ( 1 )
      {
        v21 = (unsigned int)(v18 * *(_DWORD *)(a1 + 36));
        if ( !(v21 + v17 + 32) )
          break;
        v20 = v16 + v14;
        v19 = a9 - v16;
        result = sub_140400FE0(a2, v22, a4, *(_DWORD **)(a1 + 616), (void *)(v21 + v17 + 32), v20, a9 - v16);
        if ( (_DWORD)result )
          return result;
        a2 += v22;
        if ( (unsigned int)++v18 >= *((_DWORD *)qword_140014878 + (int)a5) )
          return sub_140406D14(a1, v17, a6, a5, 1, a7, v20, v19);
        v14 = a8;
      }
    }
    return 209715724LL;
  }
  while ( 1 )
  {
    result = sub_140400D10();
    if ( (_DWORD)result )
      return result;
    sub_140400C30();
    if ( !(unsigned int)sub_140400CA8() )
      return 209715726LL;
    if ( (unsigned int)++v15 >= *((_DWORD *)qword_140014878 + (int)a5) )
      goto LABEL_7;
  }
}
