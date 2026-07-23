/*
 * XREFs of sub_140582214 @ 0x140582214
 * Callers:
 *     sub_14033F41C @ 0x14033F41C (sub_14033F41C.c)
 *     sub_140582320 @ 0x140582320 (sub_140582320.c)
 * Callees:
 *     sub_140247A74 @ 0x140247A74 (sub_140247A74.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14033A410 @ 0x14033A410 (sub_14033A410.c)
 */

char __fastcall sub_140582214(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // r8
  signed __int32 *v6; // rcx
  char result; // al
  unsigned __int64 v8; // rdi
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  v5 = (a3 - *(_QWORD *)(a1 + 48)) >> 12;
  v6 = *(signed __int32 **)(*(_QWORD *)(a1 + 272) + 8LL);
  result = v5;
  if ( !_bittest64((const signed __int64 *)v6, (unsigned int)v5) )
  {
    _bittestandset(v6, v5);
    result = sub_14033A410((__int64)v6, a3) & 0xF;
    if ( result != 9 )
    {
      v8 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v14 = sub_140317A10(v8);
      v10 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v14) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v13 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
          sub_1402F32E0(&v13, v9, v11, v12);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
      sub_140247A74(a2, v8, v10);
      result = -1;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return result;
}
