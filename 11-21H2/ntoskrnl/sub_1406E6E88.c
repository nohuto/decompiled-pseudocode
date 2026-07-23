/*
 * XREFs of sub_1406E6E88 @ 0x1406E6E88
 * Callers:
 *     sub_1406F2C30 @ 0x1406F2C30 (sub_1406F2C30.c)
 * Callees:
 *     sub_140265428 @ 0x140265428 (sub_140265428.c)
 */

__int64 __fastcall sub_1406E6E88(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 *v3; // rdi
  unsigned int v4; // ebp
  __int64 v5; // r15
  __int64 v8; // r13
  char *v9; // r12
  __int64 result; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 *v13; // rsi
  __int64 v14; // rax
  __int64 *v15; // rcx

  v3 = (unsigned __int64 *)(a1 + 88);
  v4 = 0;
  v5 = a3 - a1;
  v8 = **(_QWORD **)a1;
  v9 = (char *)qword_1400371F0 - a1;
  result = 0xFFFFFLL;
  do
  {
    v11 = *(unsigned __int64 *)((char *)v3 + v5 - 88);
    if ( v11 )
    {
      v12 = *v3;
      v13 = (__int64 *)*(v3 - 3);
      if ( v11 > 0xFFFFF )
        v11 = 0xFFFFFLL;
      if ( !v12 || v12 < v11 )
      {
        if ( (*(_DWORD *)(a1 + 60) & 2) != 0 && v11 < *(unsigned __int64 *)((char *)v3 + (_QWORD)v9 - 88) )
          v11 = *(unsigned __int64 *)((char *)v3 + (_QWORD)v9 - 88);
        v14 = sub_140265428(
                v8,
                0LL,
                0xFFFFFFFFFFFFFFFFuLL,
                0LL,
                (v11 - v12) << 12,
                v4,
                a2,
                19,
                *((_QWORD *)KeGetCurrentThread() + 23));
        if ( v14 )
        {
          *v3 += (unsigned __int64)*(unsigned int *)(v14 + 40) >> 12;
          if ( *(v3 - 3) )
          {
            v15 = (__int64 *)*v13;
            if ( *v13 )
            {
              do
              {
                v13 = v15;
                v15 = (__int64 *)*v15;
              }
              while ( v15 );
            }
            *v13 = v14;
          }
          else
          {
            *(v3 - 3) = v14;
          }
        }
        result = 0xFFFFFLL;
      }
    }
    ++v4;
    ++v3;
  }
  while ( v4 < 3 );
  return result;
}
