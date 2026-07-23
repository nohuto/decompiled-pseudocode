/*
 * XREFs of sub_1405AC9A0 @ 0x1405AC9A0
 * Callers:
 *     sub_1405A931C @ 0x1405A931C (sub_1405A931C.c)
 *     sub_1405AA07C @ 0x1405AA07C (sub_1405AA07C.c)
 *     sub_1405AAA4C @ 0x1405AAA4C (sub_1405AAA4C.c)
 *     sub_1405ACB84 @ 0x1405ACB84 (sub_1405ACB84.c)
 * Callees:
 *     sub_140232154 @ 0x140232154 (sub_140232154.c)
 *     sub_14028FB74 @ 0x14028FB74 (sub_14028FB74.c)
 *     sub_1402D03D0 @ 0x1402D03D0 (sub_1402D03D0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

__int64 __fastcall sub_1405AC9A0(unsigned __int64 a1, __int64 a2, signed int a3)
{
  unsigned int v6; // ebx
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rcx
  int v14; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v7 = (__int64)(a1 << 25) >> 16 << 25 >> 16;
  if ( a2 )
  {
    v9 = 48 * (((unsigned __int64)sub_140317A10(a1) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v14, v8, v10, v11);
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
    *(_QWORD *)(v9 + 24) ^= (*(_QWORD *)(v9 + 24) ^ (*(_QWORD *)(v9 + 24) + a2)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( a1 == 0xFFFFF6FB7DBEDF68uLL || !a3 )
    return 0LL;
  v12 = sub_1402D03D0(v7);
  if ( a3 <= 0 )
  {
    if ( !(unsigned int)sub_140232154(v12, (unsigned int)-a3) )
      return 1;
  }
  else
  {
    sub_14028FB74(v12, a3);
  }
  return v6;
}
