/*
 * XREFs of sub_14094206C @ 0x14094206C
 * Callers:
 *     sub_14081EFBC @ 0x14081EFBC (sub_14081EFBC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14094206C(_DWORD *a1, _DWORD *a2)
{
  int v2; // r14d
  _DWORD *v3; // r8
  unsigned int v4; // ebp
  unsigned int v5; // edi
  _DWORD *v6; // r10
  char v7; // r11
  unsigned int v8; // esi
  unsigned int v9; // r9d
  _DWORD *v10; // rbx
  _DWORD *v11; // rax

  v2 = 0;
  v3 = a1;
  if ( !*a1 || !*a2 )
    return 0LL;
  while ( 1 )
  {
    v4 = v3[4];
    v5 = 0;
    if ( v4 )
    {
      v6 = v3 + 5;
      do
      {
        v7 = *(_BYTE *)v6;
        if ( ((*(_BYTE *)v6 - 1) & 0xF9) == 0 && v7 != 5 )
        {
          v8 = a2[4];
          v9 = 0;
          if ( v8 )
          {
            v10 = a2 + 5;
            while ( v7 != *(_BYTE *)v10
                 || *(_QWORD *)(v6 + 1) != *(_QWORD *)(v10 + 1)
                 || (v7 == 1) != (*(_BYTE *)v10 == 1) )
            {
              ++v9;
              v10 += 5;
              if ( v9 >= v8 )
                goto LABEL_13;
            }
          }
          else
          {
LABEL_13:
            if ( v9 == v8 )
              return 0LL;
          }
        }
        ++v5;
        v6 += 5;
      }
      while ( v5 < v4 );
    }
    if ( v2 )
      return 1LL;
    v11 = a2;
    v2 = 1;
    a2 = v3;
    v3 = v11;
  }
}
