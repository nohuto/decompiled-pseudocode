/*
 * XREFs of sub_140589410 @ 0x140589410
 * Callers:
 *     sub_1402652C4 @ 0x1402652C4 (sub_1402652C4.c)
 * Callees:
 *     sub_140313CA0 @ 0x140313CA0 (sub_140313CA0.c)
 *     sub_1405A828C @ 0x1405A828C (sub_1405A828C.c)
 */

__int64 __fastcall sub_140589410(__int64 a1, __int64 a2, char a3, __int64 a4, unsigned int a5)
{
  unsigned int v6; // eax
  __int64 v8; // r8
  __int64 result; // rax
  __int64 v10; // r9
  int v11; // ebx
  _QWORD *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdi

  v6 = a3 & 2;
  v8 = v6 | 1;
  if ( (a3 & 4) == 0 )
    v8 = v6;
  result = sub_1405A828C(a1, a5, v8);
  v10 = result;
  if ( result )
  {
    v11 = 0;
    v12 = (_QWORD *)(a2 + 8 * (((unsigned __int64)*(unsigned int *)(a2 + 40) >> 12) + 6));
    do
    {
      v13 = *(_QWORD *)(v10 + 24) & 0xFFFFFFFFFFLL;
      if ( v13 == 0x3FFFFFFFFFLL )
        v14 = 0LL;
      else
        v14 = 48 * v13 - 0x220000000000LL;
      *v12++ = 0xAAAAAAAAAAAAAAABuLL * ((v10 + 0x220000000000LL) >> 4);
      sub_140313CA0(v10, 0LL, 0);
      ++v11;
      v10 = v14;
    }
    while ( v14 );
    result = 1LL;
    *(_DWORD *)(a2 + 40) += v11 << 12;
    *(_QWORD *)(a2 + 24) = 1LL;
  }
  return result;
}
