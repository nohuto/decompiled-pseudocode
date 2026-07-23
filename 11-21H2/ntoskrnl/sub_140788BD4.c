/*
 * XREFs of sub_140788BD4 @ 0x140788BD4
 * Callers:
 *     sub_140788A80 @ 0x140788A80 (sub_140788A80.c)
 * Callees:
 *     sub_1402E0340 @ 0x1402E0340 (sub_1402E0340.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140788BD4(_QWORD *a1, __int64 a2, __int64 a3, _WORD *a4, unsigned int a5, unsigned int *a6)
{
  unsigned int v6; // ebx
  __int64 v8; // r10
  int v9; // r13d
  unsigned int v10; // eax
  __int64 **v11; // r15
  __int64 **v12; // rdi
  int v13; // eax
  int v14; // r12d
  unsigned int v15; // eax
  _QWORD *v17; // [rsp+70h] [rbp+8h]

  v17 = a1;
  v6 = 0;
  v8 = a2;
  v9 = 0;
  v10 = 0;
  *a6 = 0;
  if ( a4 && a5 )
  {
    *a4 = 0;
    v10 = *a6;
  }
  v11 = (__int64 **)(a1 + 2);
  v12 = (__int64 **)a1[2];
  if ( v12 != a1 + 2 )
  {
    do
    {
      if ( !v8 || (unsigned __int8)sub_14042A5E0(*a1, v12[3]) )
      {
        v13 = (*((unsigned __int16 *)v12 + 8) >> 1) + 1;
        *a6 += v13;
        if ( a4 )
        {
          v14 = v13 + v9;
          if ( v13 + v9 < a5 )
          {
            sub_1402E0340(&a4[v9], a5 - v9, (const WCHAR *)v12[3], 0LL, 0LL, 2304);
            v9 = v14;
          }
        }
      }
      v12 = (__int64 **)*v12;
      v8 = a2;
      a1 = v17;
    }
    while ( v12 != v11 );
    v10 = *a6;
  }
  v15 = v10 + 1;
  *a6 = v15;
  if ( a4 && v15 <= a5 )
    a4[v15 - 1] = 0;
  else
    return (unsigned int)-1073741789;
  return v6;
}
