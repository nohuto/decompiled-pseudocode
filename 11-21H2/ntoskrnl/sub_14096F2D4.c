/*
 * XREFs of sub_14096F2D4 @ 0x14096F2D4
 * Callers:
 *     sub_140393EC0 @ 0x140393EC0 (sub_140393EC0.c)
 * Callees:
 *     sub_1403CF51C @ 0x1403CF51C (sub_1403CF51C.c)
 *     sub_14059D5EC @ 0x14059D5EC (sub_14059D5EC.c)
 *     sub_14096EEE8 @ 0x14096EEE8 (sub_14096EEE8.c)
 */

unsigned __int64 __fastcall sub_14096F2D4(__int64 a1)
{
  __int64 v1; // r14
  unsigned __int64 v3; // rbx
  unsigned __int64 result; // rax
  unsigned int v5; // r15d
  __int64 v6; // r15
  unsigned __int64 v7; // rsi
  BOOL v8; // ebp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 **v12; // rdx
  __int64 v13; // r9
  unsigned __int64 *v14; // rcx
  unsigned int v15; // r13d
  __int64 *v16; // r12

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 32);
  result = *(unsigned __int8 *)(a1 + 76);
  v5 = *(_DWORD *)(v1 + 16728);
  if ( !v5 )
    return result;
  if ( (unsigned int)result < v5 )
  {
    _mm_lfence();
    v6 = *(_QWORD *)(v1 + 8 * result + 16736);
    if ( *(_QWORD *)(v6 + 8) - *(_QWORD *)v6 < v3 )
      return result;
    result = sub_14096EEE8(a1, *(_QWORD *)(v1 + 8 * result + 16736), v3);
    v7 = result;
    if ( result && (*(_BYTE *)(a1 + 79) & 2) != 0 )
      result = sub_14059D5EC(v6, result);
    v8 = (*(_BYTE *)(v6 + 204) & 0x50) == 0;
    goto LABEL_24;
  }
  v8 = 1;
  if ( (*(_BYTE *)(a1 + 79) & 1) == 0 )
  {
    v9 = *(_QWORD *)(v1 + 17256);
    v10 = *(_QWORD *)(v1 + 17496);
    result = v3 + v9 + *(_QWORD *)(v1 + 16048);
    if ( result < v9 )
      return result;
    if ( result <= v10 )
    {
      *(_QWORD *)(a1 + 40) = 1LL;
      return result;
    }
    v3 = result - v10;
  }
  v11 = 0LL;
  v12 = (unsigned __int64 **)(v1 + 16736);
  v13 = *(unsigned int *)(v1 + 16728);
  do
  {
    v14 = *v12;
    if ( (*((_BYTE *)*v12 + 204) & 0x50) == 0 )
    {
      result = *v14;
      v11 += v14[1] - *v14;
    }
    ++v12;
    --v13;
  }
  while ( v13 );
  if ( v11 >= v3 )
  {
    v7 = 0LL;
    v15 = 0;
    v16 = (__int64 *)(v1 + 16736);
    do
    {
      if ( (*(_BYTE *)(*v16 + 204) & 0x50) == 0 )
      {
        result = sub_14096EEE8(a1, *v16, v3 - v7);
        v7 += result;
        if ( v7 >= v3 )
          break;
      }
      ++v15;
      ++v16;
    }
    while ( v15 < v5 );
LABEL_24:
    if ( v7 )
    {
      *(_QWORD *)(a1 + 40) = v7;
      if ( v8 )
        return sub_1403CF51C(v1, v7, 0LL, 0, 0LL);
    }
  }
  return result;
}
