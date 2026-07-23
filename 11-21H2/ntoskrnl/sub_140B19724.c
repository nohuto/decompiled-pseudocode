/*
 * XREFs of sub_140B19724 @ 0x140B19724
 * Callers:
 *     sub_140B190F0 @ 0x140B190F0 (sub_140B190F0.c)
 * Callees:
 *     sub_140273FD0 @ 0x140273FD0 (sub_140273FD0.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 */

__int64 __fastcall sub_140B19724(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rdi
  char v9; // al
  int v10; // [rsp+38h] [rbp+10h] BYREF

  result = sub_1402CCC50(128LL);
  v7 = result;
  if ( v4 )
  {
    v8 = 48 * v5 - 0x21FFFFFFFFE8LL;
    do
    {
      v10 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0x3FuLL) )
      {
        do
          sub_1402F32E0(&v10, v4, v5, v6);
        while ( *(__int64 *)v8 < 0 );
      }
      v9 = *(_BYTE *)(v8 + 10) | 0x10;
      *(_QWORD *)(v8 - 8) = v7;
      *(_BYTE *)(v8 + 10) = v9;
      sub_140273FD0(v8 - 24, v4, v5, v6);
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)v8, 0x7FFFFFFFFFFFFFFFuLL);
      v8 += 48LL;
      --a2;
    }
    while ( a2 );
  }
  return result;
}
