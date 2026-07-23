/*
 * XREFs of sub_1406452F0 @ 0x1406452F0
 * Callers:
 *     sub_140644EEC @ 0x140644EEC (sub_140644EEC.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406451CC @ 0x1406451CC (sub_1406451CC.c)
 */

char __fastcall sub_1406452F0(__int64 a1, unsigned __int64 a2, unsigned int *a3)
{
  __int64 v3; // rbp
  unsigned int v5; // ecx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // eax
  unsigned __int64 *v12; // rbx

  v3 = *a3;
  v5 = 0;
  if ( !(_DWORD)v3 )
  {
    *(_QWORD *)a1 = a2;
    *a3 = 1;
    return 1;
  }
  if ( (_DWORD)v3 != 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      v9 = *(_QWORD *)(a1 + 8 * v8);
      v10 = (unsigned int)(v8 + 1);
      if ( v9 >= *(_QWORD *)(a1 + 8 * v10) )
        break;
      if ( v9 == a2 )
        return 0;
      v11 = v8 + 1;
      if ( v9 >= a2 )
        v11 = v5;
      v5 = v11;
      v8 = (unsigned int)v10;
      if ( (unsigned int)v10 >= (int)v3 - 1 )
      {
        v12 = (unsigned __int64 *)(a1 + 8LL * v5);
        memmove((void *)(a1 + 8LL * (v5 + 1)), v12, 8LL * ((unsigned int)v3 - v5));
        *v12 = a2;
        *a3 = v3 + 1;
        return 1;
      }
    }
    *(_QWORD *)(a1 + 8 * v3) = a2;
    *a3 = v3 + 1;
    sub_1406451CC((char *)a1, v3 + 1, a3);
    return 1;
  }
  if ( a2 > *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = a2;
LABEL_6:
    *a3 = 2;
    return 1;
  }
  if ( a2 < *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = *(_QWORD *)a1;
    *(_QWORD *)a1 = a2;
    goto LABEL_6;
  }
  return 0;
}
