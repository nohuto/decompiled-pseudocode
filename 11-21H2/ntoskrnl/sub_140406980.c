/*
 * XREFs of sub_140406980 @ 0x140406980
 * Callers:
 *     sub_140401470 @ 0x140401470 (sub_140401470.c)
 * Callees:
 *     sub_1404000F0 @ 0x1404000F0 (sub_1404000F0.c)
 *     sub_140400F64 @ 0x140400F64 (sub_140400F64.c)
 *     sub_140406900 @ 0x140406900 (sub_140406900.c)
 *     sub_140406D14 @ 0x140406D14 (sub_140406D14.c)
 */

__int64 __fastcall sub_140406980(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v11; // rbp
  unsigned __int64 v12; // rdi
  __int64 result; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  int v16; // r15d
  __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // r14
  int v20; // ebx
  int v21; // edi
  __int64 v22; // rdx

  v11 = a4;
  v12 = *((unsigned int *)qword_140014878 + a4);
  if ( a6 != (_DWORD)v12 * (unsigned int)sub_1404000F0(a1) )
    return 209715725LL;
  v14 = a6 / v12;
  v15 = (unsigned int)(4 * *(_DWORD *)(a1 + 36) + 32);
  v16 = v14;
  v17 = sub_140406900(a8, v15, a1, 4u);
  if ( !v17 )
    return 209715724LL;
  v18 = v15 + a8;
  v19 = a9 - v15;
  result = sub_140406D14(a1, a2, v17, a4, 0, a7, v15 + a8, a9 - v15);
  if ( !(_DWORD)result )
  {
    v20 = 0;
    if ( *((_DWORD *)qword_140014878 + v11) )
    {
      v21 = a5;
      while ( 1 )
      {
        v22 = (unsigned int)(v20 * *(_DWORD *)(a1 + 36)) + v17 + 32;
        if ( !v22 )
          break;
        result = sub_140400F64(*(_QWORD *)(a1 + 616), v22, v21, v16, a3, v18, v19);
        if ( !(_DWORD)result )
        {
          v21 += v16;
          if ( (unsigned int)++v20 < *((_DWORD *)qword_140014878 + v11) )
            continue;
        }
        return result;
      }
      return 209715724LL;
    }
  }
  return result;
}
