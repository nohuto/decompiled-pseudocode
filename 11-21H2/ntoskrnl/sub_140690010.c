/*
 * XREFs of sub_140690010 @ 0x140690010
 * Callers:
 *     sub_140700D70 @ 0x140700D70 (sub_140700D70.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140690010(_DWORD *a1, _DWORD *a2)
{
  unsigned int v4; // eax
  int v5; // r14d
  _DWORD *v6; // r15
  unsigned int *v7; // rbx
  unsigned int v8; // ebp
  unsigned int v9; // edi
  unsigned int i; // ecx
  int v11; // r9d
  __int64 v12; // rax
  unsigned int v13; // ecx
  _DWORD *v14; // r8
  __int64 result; // rax
  unsigned int v16; // ecx

  if ( !a1[78] )
    return 0LL;
  v4 = a1[36];
  v5 = 0;
  v6 = a1 + 38;
  v7 = a1 + 38;
  v8 = 0;
  v9 = 0;
  for ( i = v4; v9 < v4; i = v4 )
  {
    if ( *((_QWORD *)v7 + 2) )
    {
      v16 = *v7;
      if ( *v7 == a1[78] )
      {
        v16 = sub_14042A5E0(a1, v7 + 6);
        *v7 = v16;
      }
      if ( v16 )
      {
        if ( v8 )
        {
          if ( v8 >= v16 )
            v8 = v16;
        }
        else
        {
          v8 = v16;
        }
      }
    }
    v4 = a1[36];
    ++v9;
    v7 += 10;
  }
  if ( a2 && v8 )
  {
    v11 = 0;
    if ( v4 )
    {
      v12 = i;
      do
      {
        if ( *v6 == v8 )
          v11 |= v6[1];
        v6 += 10;
        --v12;
      }
      while ( v12 );
      v4 = i;
    }
    v13 = 0;
    if ( v4 )
    {
      v14 = a1 + 32;
      do
      {
        if ( (v11 & *v14) != 0 )
          v5 |= 1 << v13;
        ++v13;
        ++v14;
      }
      while ( v13 < a1[36] );
    }
    *a2 = v5;
  }
  result = v8;
  a1[78] = v8;
  return result;
}
