/*
 * XREFs of sub_1405440C4 @ 0x1405440C4
 * Callers:
 *     sub_140544A9C @ 0x140544A9C (sub_140544A9C.c)
 *     sub_140544EF0 @ 0x140544EF0 (sub_140544EF0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405440C4(unsigned int a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ebp
  __int64 v6; // rdi
  unsigned int v7; // r13d
  __int64 result; // rax
  int v9; // r15d
  int v10; // r12d
  int v11; // r8d
  int v12; // edx
  int v13; // r13d
  int *v14; // rsi
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  int v20; // [rsp+78h] [rbp+10h]
  int v21; // [rsp+80h] [rbp+18h]

  v5 = 0;
  v6 = 5LL * a3;
  *(_DWORD *)(a2 + 8 * v6 + 20) = -1;
  *(_DWORD *)(a2 + 8 * v6 + 16) = 0;
  *(_QWORD *)(a2 + 8 * v6 + 24) = 0LL;
  *(_QWORD *)(a2 + 8 * v6 + 32) = 0LL;
  v7 = *(_DWORD *)(a2 + 40LL * a3 + 4);
  result = v7 >> 4;
  v9 = ~(*((_DWORD *)KeGetCurrentPrcb() + 39) * *((_DWORD *)KeGetCurrentPrcb() + 38) - 1);
  v10 = ~(*((_DWORD *)KeGetCurrentPrcb() + 39) - 1);
  v11 = (unsigned __int16)result;
  v12 = v10 & v7;
  v20 = (unsigned __int16)result;
  v13 = v9 & v7;
  v21 = v12;
  if ( a1 )
  {
    result = a1;
    v14 = (int *)(a2 + 4);
    do
    {
      if ( v5 != a3 )
      {
        if ( *((_WORD *)v14 + 2) == *(_WORD *)(a2 + 8 * v6 + 8) && v5 < a3 )
          ++*(_DWORD *)(a2 + 8 * v6 + 36);
        if ( *((_BYTE *)v14 - 3) )
        {
          if ( *((_WORD *)v14 + 4) == *(_WORD *)(a2 + 8 * v6 + 12) )
            ++*(_DWORD *)(a2 + 8 * v6 + 16);
          v15 = *v14;
          if ( (v9 & *v14) == v13 )
          {
            ++*(_DWORD *)(a2 + 8 * v6 + 24);
            v15 = *v14;
          }
          if ( (v10 & v15) == v12 )
          {
            ++*(_DWORD *)(a2 + 8 * v6 + 28);
            v15 = *v14;
          }
          if ( (unsigned __int16)(v15 >> 4) == v11 )
            ++*(_DWORD *)(a2 + 8 * v6 + 32);
          v16 = *((unsigned __int16 *)v14 + 3);
          v17 = *(unsigned __int16 *)(a2 + 8 * v6 + 10);
          if ( (_WORD)v16 == (_WORD)v17 || !qword_140D06DD8 )
          {
            v12 = v21;
          }
          else
          {
            v18 = sub_14042A5E0(v17, v16);
            v12 = v21;
            v11 = v20;
            if ( v18 >= 0 )
            {
              if ( *(_DWORD *)(a2 + 8 * v6 + 20) )
                *(_DWORD *)(a2 + 8 * v6 + 20) = 0;
            }
          }
        }
        result = a1;
      }
      ++v5;
      v14 += 10;
    }
    while ( v5 < (unsigned int)result );
  }
  return result;
}
