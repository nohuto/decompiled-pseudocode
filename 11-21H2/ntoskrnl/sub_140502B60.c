/*
 * XREFs of sub_140502B60 @ 0x140502B60
 * Callers:
 *     sub_1402ACAD0 @ 0x1402ACAD0 (sub_1402ACAD0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140502B60(volatile signed __int32 *a1, int a2, int a3, _DWORD *a4)
{
  signed __int32 v4; // r10d
  BOOL v7; // edi
  unsigned int v8; // eax
  int v9; // edx
  int v10; // r8d
  unsigned __int64 v11; // rdx
  __int64 result; // rax

  v4 = *a1;
  v7 = a2 == 4;
  while ( 1 )
  {
    a4[1] = 0;
    v8 = v4 | 1;
    if ( (((v4 | 1u) >> 14) & 1) != v7 )
    {
      if ( ((v8 >> 5) & 0x1FF) != 0 )
      {
        a4[1] = (v8 >> 5) & 0x1FF;
        a4[2] = a2 == 0 ? 4 : 0;
        v8 = v4 & 0xFFFFC01E | 1;
      }
      v9 = 0;
      if ( a2 == 4 )
        v9 = 0x4000;
      v8 = v8 & 0xFFFFBFFF | v9;
    }
    v10 = (v8 >> 5) & 0x1FF;
    v11 = (unsigned int)(v10 + a3);
    if ( v11 > 0x1FF || v11 < (((unsigned __int64)v8 >> 5) & 0x1FF) )
    {
      LOWORD(v11) = a3;
      a4[2] = a2;
      a4[1] = v10;
    }
    result = (unsigned int)_InterlockedCompareExchange(
                             a1,
                             v8 ^ ((unsigned __int16)v8 ^ (unsigned __int16)(32 * v11)) & 0x3FE0,
                             v4);
    if ( v4 == (_DWORD)result )
      break;
    v4 = result;
  }
  a4[4] = 0;
  *a4 = (v4 & 1) == 0;
  return result;
}
