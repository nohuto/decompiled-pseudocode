/*
 * XREFs of sub_14022900C @ 0x14022900C
 * Callers:
 *     sub_140228CD0 @ 0x140228CD0 (sub_140228CD0.c)
 * Callees:
 *     sub_140273FD0 @ 0x140273FD0 (sub_140273FD0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 */

char __fastcall sub_14022900C(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  char result; // al
  __int64 v8; // rbx
  int v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+48h] [rbp+10h] BYREF

  while ( 1 )
  {
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v9);
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
    v6 = *(_QWORD *)(a2 + 24);
    if ( (v6 & 0x3FFFFFFFFFFFFFFFLL) == a3 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( a3 == 2 )
  {
    sub_140273FD0(a2);
    v6 = *(_QWORD *)(a2 + 24);
  }
  *(_QWORD *)(a2 + 24) = v6 | 0x4000000000000000LL;
  *(_QWORD *)a2 = *a1;
  *a1 = a2;
  result = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
  *(_BYTE *)(a2 + 34) = result;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 != 2 )
  {
    v8 = 48 * (*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v10);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    result = sub_140273FD0(v8);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}
