/*
 * XREFs of sub_140505330 @ 0x140505330
 * Callers:
 *     <none>
 * Callees:
 *     sub_140213A40 @ 0x140213A40 (sub_140213A40.c)
 *     sub_1405050E0 @ 0x1405050E0 (sub_1405050E0.c)
 */

__int64 __fastcall sub_140505330(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int *a5, int a6)
{
  unsigned int v7; // ebx
  int *v8; // rax
  __int64 v9; // rax

  v7 = 1;
  if ( a4 == 2 && a6 == 1 )
  {
    if ( *(_QWORD *)a3 )
    {
      v8 = *(int **)(a3 + 8);
      if ( v8 )
      {
        if ( a5 )
        {
          v9 = sub_140213A40(0LL, *v8, 0, 0);
          if ( v9 )
            return (unsigned int)sub_1405050E0(*(unsigned __int8 **)a3, *(_DWORD *)(v9 + 32), *a5) != 0 ? 2 : 0;
        }
      }
    }
  }
  return v7;
}
