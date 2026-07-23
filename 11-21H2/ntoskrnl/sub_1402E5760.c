/*
 * XREFs of sub_1402E5760 @ 0x1402E5760
 * Callers:
 *     sub_14079C0D4 @ 0x14079C0D4 (sub_14079C0D4.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall sub_1402E5760(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  unsigned __int64 v7; // r8
  unsigned int *v8; // rdx
  unsigned __int64 v9; // rcx
  bool v10; // sf
  int v11; // r11d
  int v12; // ebx
  int v13; // r9d

  v4 = 0LL;
  if ( a2 )
  {
    v7 = a3 - a4;
    v8 = (unsigned int *)(a1 + 12LL * (unsigned int)(a2 - 1));
    v9 = *v8;
    if ( v7 < v9 )
    {
      v10 = a2 - 2 < 0;
      v11 = a2 - 2;
      v12 = 0;
      if ( !v10 )
      {
        do
        {
          v13 = (v12 + v11) >> 1;
          v8 = (unsigned int *)(a1 + 12LL * v13);
          if ( v7 < *v8 )
          {
            v11 = v13 - 1;
          }
          else
          {
            LODWORD(v9) = *v8;
            if ( v7 < v8[3] )
              break;
            v12 = v13 + 1;
          }
          LODWORD(v9) = *v8;
        }
        while ( v11 >= v12 );
      }
    }
    if ( v7 >= (unsigned int)v9 && v7 < v8[1] )
      return v8;
  }
  return (unsigned int *)v4;
}
