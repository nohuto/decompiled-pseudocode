/*
 * XREFs of sub_140A47330 @ 0x140A47330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A47330(unsigned __int8 *a1, __int64 a2)
{
  char v2; // r14
  int v4; // r12d
  int v5; // r13d
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r9
  unsigned int v9; // r10d
  _BYTE **v10; // rcx
  _BYTE *v11; // rdi
  __int64 result; // rax
  unsigned int v13; // ebx
  _BYTE *v14; // rbp
  _BYTE *v15; // rdx
  _BYTE *v16; // rdx
  _BYTE **v17; // [rsp+40h] [rbp+10h]

  v2 = *a1;
  v4 = a1[1];
  v5 = a1[2];
  v7 = *(_QWORD *)a2;
  v8 = *(_QWORD *)(a2 + 8);
  v9 = *(_DWORD *)(a2 + 16);
  v17 = (_BYTE **)(a2 + 16 * ((((-24993 * (v5 ^ (16 * (v4 ^ (16 * *a1))))) >> 4) & 0xFFF) + 2LL));
  v10 = (_BYTE **)(a2 + 16LL * (((-24993 * (v5 ^ (16 * (v4 ^ (16 * *a1))))) >> 4) & 0xFFF) + 40);
  v11 = *v17;
  result = 0LL;
  v13 = 0;
  v14 = *v10;
  if ( (unsigned __int64)*v17 >= *(_QWORD *)a2 && v11 < a1 && *v11 == v2 && v11[1] == (_BYTE)v4 && v11[2] == (_BYTE)v5 )
  {
    result = 3LL;
    if ( v9 > 3 )
    {
      v15 = a1 + 3;
      do
      {
        if ( (unsigned __int64)&a1[(unsigned int)result] >= v8 )
          break;
        if ( *v15 != v15[v11 - a1] )
          break;
        result = (unsigned int)(result + 1);
        ++v15;
      }
      while ( (unsigned int)result < v9 );
    }
  }
  if ( (unsigned __int64)v14 >= v7 && v14 < a1 && *v14 == v2 && v14[1] == (_BYTE)v4 && v14[2] == (_BYTE)v5 )
  {
    v13 = 3;
    if ( v9 > 3 )
    {
      v16 = a1 + 3;
      do
      {
        if ( (unsigned __int64)&a1[v13] >= v8 )
          break;
        if ( *v16 != v16[v14 - a1] )
          break;
        ++v13;
        ++v16;
      }
      while ( v13 < v9 );
    }
  }
  *v10 = v11;
  *v17 = a1;
  if ( (unsigned int)result < v13 )
  {
    *(_QWORD *)(a2 + 24) = v14;
    return v13;
  }
  else
  {
    *(_QWORD *)(a2 + 24) = v11;
  }
  return result;
}
