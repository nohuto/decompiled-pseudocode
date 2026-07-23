/*
 * XREFs of sub_1403C9394 @ 0x1403C9394
 * Callers:
 *     sub_1403C8EF8 @ 0x1403C8EF8 (sub_1403C8EF8.c)
 * Callees:
 *     sub_1402E89B0 @ 0x1402E89B0 (sub_1402E89B0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

unsigned __int64 __fastcall sub_1403C9394(unsigned __int64 a1, int a2, int a3)
{
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  unsigned __int64 result; // rax
  __int64 v11[7]; // [rsp+20h] [rbp-38h] BYREF
  int v12; // [rsp+68h] [rbp+10h] BYREF
  int v13; // [rsp+78h] [rbp+20h] BYREF

  v11[0] = sub_140317A10(a1);
  v6 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)v11) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( !a2 && a3 == 3 )
  {
    v12 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v12, v5, v7, v8);
      while ( *(__int64 *)(v6 + 24) < 0 );
    }
    --*(_WORD *)(v6 + 32);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v9 = 48 * (*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v13 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v13, v5, v7, v8);
    while ( *(__int64 *)(v9 + 24) < 0 );
  }
  *(_QWORD *)(v9 + 24) ^= (*(_QWORD *)(v9 + 24) ^ (*(_QWORD *)(v9 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = 0LL;
  *(_QWORD *)(v6 + 16) = 0LL;
  if ( a2 )
    return sub_1402E89B0((unsigned __int64 *)(v6 + 16));
  return result;
}
