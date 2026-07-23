/*
 * XREFs of sub_140531850 @ 0x140531850
 * Callers:
 *     <none>
 * Callees:
 *     sub_140530348 @ 0x140530348 (sub_140530348.c)
 */

__int64 __fastcall sub_140531850(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int *v3; // r14
  unsigned int v7; // eax
  _QWORD **v9; // r14
  __int64 v10; // rbp
  _QWORD *v11; // rbx
  _QWORD *v12; // rax

  v3 = *(unsigned int **)(a1 + 208);
  v7 = *v3;
  if ( *a2 >= *v3 )
  {
    v9 = (_QWORD **)(v3 + 2);
    v10 = 0LL;
    v11 = *v9;
    if ( *v9 != v9 )
    {
      while ( 1 )
      {
        v7 = **(_DWORD **)(a1 + 208);
        if ( (unsigned int)v10 >= v7 )
          break;
        v12 = sub_140530348(*(unsigned __int16 *)(a1 + 160), (__int64)v11);
        *(_QWORD *)(a3 + 8 * v10) = v12;
        if ( !v12 )
          return 3221225626LL;
        v11 = (_QWORD *)*v11;
        v10 = (unsigned int)(v10 + 1);
        if ( v11 == v9 )
        {
          v7 = **(_DWORD **)(a1 + 208);
          break;
        }
      }
    }
    *a2 = v7;
    return 0LL;
  }
  else
  {
    *a2 = v7;
    return 3221225507LL;
  }
}
