/*
 * XREFs of sub_140513728 @ 0x140513728
 * Callers:
 *     sub_140512C04 @ 0x140512C04 (sub_140512C04.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140513728(__int64 a1, __int64 *a2, __int64 **a3, int a4, char a5, _DWORD *a6)
{
  __int64 *v6; // r10
  __int64 v8; // r9
  int v9; // r11d
  unsigned int j; // ecx
  unsigned int v11; // edi
  char i; // bp
  __int64 v13; // r14
  unsigned int v14; // r15d
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rax
  __int64 result; // rax

  v6 = *a3;
  if ( !*a3 )
  {
    if ( *((_DWORD *)a3 + 2) == -1 )
    {
      v8 = 0LL;
      v9 = 0;
      j = 0;
      goto LABEL_27;
    }
    *((_DWORD *)a3 + 2) = 0;
    v6 = a2;
    *a3 = a2;
  }
  v11 = *((_DWORD *)a3 + 2);
  j = 0;
  for ( i = 1; ; i = 0 )
  {
    v13 = 0LL;
    v8 = 0LL;
    v9 = 0;
    while ( v6 )
    {
      v14 = *((_DWORD *)v6 + 2);
      v15 = v6[2] + 72LL * v11;
      for ( j = v11; j < v14; ++j )
      {
        if ( (*(_QWORD *)(v15 + 48) & 0xFFFFFFFFFFFFF000uLL) != 0 )
        {
          if ( v8 )
            *(_QWORD *)(v13 + 8) = v15;
          else
            v8 = v15;
          ++v9;
          v13 = v15;
          if ( v9 == a4 )
            goto LABEL_27;
        }
        else
        {
          v16 = 0;
          if ( !a5 )
            v16 = v9;
          v9 = v16;
          v17 = 0LL;
          if ( !a5 )
            v17 = v8;
          v8 = v17;
        }
        v15 += 72LL;
      }
      v6 = (__int64 *)*v6;
      v11 = 0;
    }
    if ( !a5 )
      break;
    if ( !i || *a3 == a2 && !*((_DWORD *)a3 + 2) )
    {
      *((_DWORD *)a3 + 2) = 0;
      result = 0LL;
      *a3 = a2;
      return result;
    }
    v11 = 0;
    v6 = a2;
  }
LABEL_27:
  *a3 = v6;
  *((_DWORD *)a3 + 2) = j;
  if ( !a5 )
  {
    if ( !v6 )
      j = -1;
    *((_DWORD *)a3 + 2) = j;
    *a6 = v9;
  }
  return v8;
}
