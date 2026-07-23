/*
 * XREFs of sub_1403CB160 @ 0x1403CB160
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1403CB204 @ 0x1403CB204 (sub_1403CB204.c)
 */

__int64 __fastcall sub_1403CB160(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  signed __int32 v8; // eax
  unsigned int v9; // ebp
  __int64 v10; // r9
  __int64 result; // rax
  __int64 v12; // r9
  int v13; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  v8 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v9 = ~v8 & 0x80000000;
  if ( (v8 & 0x7FFFFFFF) != 0 )
  {
    v13 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v9 )
      sub_1402F32E0(&v13, a2, (__int64)a3, a4);
  }
  else
  {
    *(_DWORD *)a4 = v9 | *(_DWORD *)(a4 + 4);
  }
  v10 = 1024LL;
  do
  {
    result = sub_1403CB204(a2, a2, a3, v10);
    v4 += result;
    v10 = v12 - 1;
  }
  while ( v10 );
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 136));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 128), v4);
  _InterlockedDecrement(a3);
  return result;
}
