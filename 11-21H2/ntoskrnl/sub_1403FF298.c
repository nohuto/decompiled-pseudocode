/*
 * XREFs of sub_1403FF298 @ 0x1403FF298
 * Callers:
 *     sub_1403FF3BC @ 0x1403FF3BC (sub_1403FF3BC.c)
 * Callees:
 *     sub_140400BBC @ 0x140400BBC (sub_140400BBC.c)
 *     sub_140400F4C @ 0x140400F4C (sub_140400F4C.c)
 *     sub_140401320 @ 0x140401320 (sub_140401320.c)
 *     sub_140401350 @ 0x140401350 (sub_140401350.c)
 *     sub_140401368 @ 0x140401368 (sub_140401368.c)
 *     sub_140401380 @ 0x140401380 (sub_140401380.c)
 */

__int64 __fastcall sub_1403FF298(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbp
  unsigned int i; // r14d
  unsigned int v6; // ebx
  unsigned int v7; // eax
  unsigned int j; // r14d
  __int64 v9; // rbx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // r14d
  unsigned int v13; // ebx
  unsigned int v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // eax

  result = (unsigned int)a1[6];
  v3 = 0LL;
  for ( i = 0; i < (unsigned int)result; result = (unsigned int)a1[6] )
  {
    v6 = a1[i + 9];
    v7 = sub_140401380(v6);
    *(_QWORD *)&a1[2 * i + 30] = sub_140401320(*(_QWORD *)&a1[2 * i + 14], v7, v6);
    ++i;
  }
  for ( j = 0; j < (unsigned int)result; result = (unsigned int)a1[6] )
  {
    v9 = *(_QWORD *)&a1[2 * j + 30];
    v10 = sub_140401368(v9);
    *(_QWORD *)&a1[2 * j + 34] = sub_140400F4C(*(_QWORD *)&a1[2 * j + 18], v10, v9);
    ++j;
  }
  v11 = a1[5];
  v12 = 0;
  if ( v11 )
  {
    do
    {
      v13 = a1[4];
      v14 = sub_140401350(v13, a2);
      *(_QWORD *)&a1[2 * v12 + 38] = sub_140400BBC(*(_QWORD *)&a1[2 * v12 + 22], v14, v13);
      ++v12;
      v11 = a1[5];
    }
    while ( v12 < v11 );
    result = (unsigned int)a1[6];
  }
  if ( (_DWORD)result * v11 )
  {
    do
    {
      v15 = a1[v3 + 9];
      v16 = sub_140401350(v15, a2);
      *(_QWORD *)&a1[2 * v3 + 40] = sub_140400BBC(*(_QWORD *)&a1[2 * v3 + 24], v16, v15);
      v3 = (unsigned int)(v3 + 1);
      result = (unsigned int)(a1[6] * a1[5]);
    }
    while ( (unsigned int)v3 < (unsigned int)result );
  }
  return result;
}
