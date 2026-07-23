/*
 * XREFs of sub_14021BBE4 @ 0x14021BBE4
 * Callers:
 *     sub_14021BB70 @ 0x14021BB70 (sub_14021BB70.c)
 * Callees:
 *     sub_140694554 @ 0x140694554 (sub_140694554.c)
 */

_OWORD *__fastcall sub_14021BBE4(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  _OWORD *v5; // rax
  _OWORD *v6; // r8
  _QWORD *v7; // rcx
  __int64 v8; // rax

  v3 = a2;
  v4 = 1 << (a2 + 4);
  v5 = (_OWORD *)sub_140694554(24 * v4 + 8);
  v6 = v5;
  if ( v5 )
  {
    *v5 = 0LL;
    v5[1] = 0LL;
    if ( v4 )
    {
      v7 = v5 + 1;
      v8 = v4;
      do
      {
        *(v7 - 1) = 0LL;
        v7[1] = v7;
        *v7 = v7;
        v7 += 3;
        --v8;
      }
      while ( v8 );
    }
    *(_QWORD *)(a1 + 8 * v3) = v6;
  }
  return v6;
}
