/*
 * XREFs of sub_18002596C @ 0x18002596C
 * Callers:
 *     sub_180023900 @ 0x180023900 (sub_180023900.c)
 *     sub_180023B10 @ 0x180023B10 (sub_180023B10.c)
 *     sub_180023DE0 @ 0x180023DE0 (sub_180023DE0.c)
 *     sub_1800241F0 @ 0x1800241F0 (sub_1800241F0.c)
 *     sub_180024400 @ 0x180024400 (sub_180024400.c)
 *     sub_1800246C0 @ 0x1800246C0 (sub_1800246C0.c)
 *     sub_180024A10 @ 0x180024A10 (sub_180024A10.c)
 *     sub_180024B70 @ 0x180024B70 (sub_180024B70.c)
 *     sub_180024E00 @ 0x180024E00 (sub_180024E00.c)
 *     sub_180024FB0 @ 0x180024FB0 (sub_180024FB0.c)
 *     sub_1800253C0 @ 0x1800253C0 (sub_1800253C0.c)
 *     sub_180025520 @ 0x180025520 (sub_180025520.c)
 *     sub_1800257C0 @ 0x1800257C0 (sub_1800257C0.c)
 * Callees:
 *     sub_180022E18 @ 0x180022E18 (sub_180022E18.c)
 *     sub_180022EC0 @ 0x180022EC0 (sub_180022EC0.c)
 *     sub_180026110 @ 0x180026110 (sub_180026110.c)
 */

__int64 __fastcall sub_18002596C(char *Str, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // ebx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  char *v7; // rax
  _BYTE *v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rbp
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 result; // rax

  LOBYTE(a2) = 1;
  v3 = sub_180026110(Str, a2);
  v4 = v3;
  if ( !v3 )
    return 0LL;
  v5 = 129LL;
  if ( v3 == 1 )
    v5 = 64LL;
  v6 = -1LL;
  do
    ++v6;
  while ( Str[v6] );
  if ( v6 >= v5 )
    return 0LL;
  v7 = strrchr(Str, 46);
  if ( !v7 )
    return 0LL;
  v8 = v7 + 1;
  o__set_errno(0LL);
  v9 = o_strtol(v8, 0LL, 10LL);
  v10 = v9;
  if ( !v9 && *v8 != 48 && v8[1] )
    return 0LL;
  if ( *(_DWORD *)o__errno() == 34 )
    return 0LL;
  if ( v4 == 1 )
  {
    v13 = (_QWORD *)o__aligned_malloc(160LL, 8LL);
    if ( v13 )
    {
      v12 = sub_180022E18(v13);
      goto LABEL_18;
    }
  }
  else
  {
    if ( v4 != 2 )
      return 0LL;
    v11 = (_QWORD *)o__aligned_malloc(160LL, 8LL);
    if ( v11 )
    {
      v12 = sub_180022EC0(v11);
LABEL_18:
      v14 = (__int64)v12;
      goto LABEL_20;
    }
  }
  v14 = 0LL;
LABEL_20:
  if ( v14 )
  {
    v15 = v8 - Str;
    o_strncpy_s(v14, 129LL, Str, v15);
    *(_QWORD *)(v14 + 136) = v15;
    v16 = *(_QWORD *)(v14 + 136);
    result = v14;
    *(_QWORD *)(v14 + 144) = v10 | ((v15 + 2) << 32);
    *(_BYTE *)(v14 + v16) = 0;
    return result;
  }
  return 0LL;
}
