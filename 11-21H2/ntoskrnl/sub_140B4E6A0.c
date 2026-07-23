/*
 * XREFs of sub_140B4E6A0 @ 0x140B4E6A0
 * Callers:
 *     sub_1403DE4F0 @ 0x1403DE4F0 (sub_1403DE4F0.c)
 * Callees:
 *     sub_1409312AC @ 0x1409312AC (sub_1409312AC.c)
 */

int *sub_140B4E6A0()
{
  int *result; // rax
  unsigned int v1; // edi
  unsigned int v2; // edx
  int *v3; // rbx
  unsigned int v4; // r8d
  unsigned int v5; // ebp
  unsigned int v6; // r14d
  bool v7; // zf
  char v8; // r10
  char v9; // r11
  _DWORD *v10; // r9
  char v11; // cl
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (int *)&retaddr;
  v1 = 0;
  if ( (_DWORD)NumOfElements )
  {
    v2 = dword_140D01AEC;
    v3 = &dword_140D125E8;
    v4 = dword_140D01AF0;
    do
    {
      if ( v3[4] == -1 )
      {
        result = (int *)sub_1409312AC();
        v2 = dword_140D01AEC;
        v4 = dword_140D01AF0;
      }
      v5 = v3[2];
      v6 = v3[3];
      if ( v5 > v2 )
        v2 = v3[2];
      dword_140D01AEC = v2;
      if ( v6 > v4 )
        v4 = v6;
      v7 = *((_BYTE *)v3 + 104) == 0;
      dword_140D01AF0 = v4;
      if ( !v7 )
      {
        v8 = 1;
        result = dword_140D125E0;
        v9 = 1;
        if ( dword_140D125E0 == v3 - 2 )
          goto LABEL_19;
        v10 = &unk_140D125F0;
        do
        {
          if ( *((_BYTE *)v10 + 96) )
          {
            v11 = 0;
            if ( *v10 != v5 )
              v11 = v8;
            v8 = v11;
            if ( v10[1] == v6 )
              v9 = 0;
          }
          v10 += 30;
          result = v10 - 4;
        }
        while ( v10 - 4 != v3 - 2 );
        if ( v8 )
LABEL_19:
          ++dword_140D06D68;
        if ( v9 )
          ++dword_140D06D64;
      }
      ++v1;
      v3 += 30;
    }
    while ( v1 < (unsigned int)NumOfElements );
  }
  return result;
}
