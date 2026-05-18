/*
 * XREFs of sub_180023FC4 @ 0x180023FC4
 * Callers:
 *     sub_180022590 @ 0x180022590 (sub_180022590.c)
 *     sub_1800226F0 @ 0x1800226F0 (sub_1800226F0.c)
 *     sub_180022990 @ 0x180022990 (sub_180022990.c)
 *     sub_180022CE0 @ 0x180022CE0 (sub_180022CE0.c)
 *     sub_180022E40 @ 0x180022E40 (sub_180022E40.c)
 *     sub_1800230D0 @ 0x1800230D0 (sub_1800230D0.c)
 *     sub_180023330 @ 0x180023330 (sub_180023330.c)
 *     sub_180023460 @ 0x180023460 (sub_180023460.c)
 *     sub_1800236D0 @ 0x1800236D0 (sub_1800236D0.c)
 *     sub_180023830 @ 0x180023830 (sub_180023830.c)
 *     sub_180023BA0 @ 0x180023BA0 (sub_180023BA0.c)
 *     sub_180023CD0 @ 0x180023CD0 (sub_180023CD0.c)
 *     sub_180023E70 @ 0x180023E70 (sub_180023E70.c)
 * Callees:
 *     sub_180021C1C @ 0x180021C1C (sub_180021C1C.c)
 *     sub_180021C90 @ 0x180021C90 (sub_180021C90.c)
 *     sub_180024544 @ 0x180024544 (sub_180024544.c)
 */

__int64 __fastcall sub_180023FC4(char *Str, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // ebx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  char *v7; // rax
  _BYTE *v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 result; // rax

  LOBYTE(a2) = 1;
  v3 = sub_180024544(Str, a2);
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
    v13 = o__aligned_malloc(160LL, 8LL);
    if ( v13 )
    {
      v12 = sub_180021C1C(v13);
      goto LABEL_18;
    }
  }
  else
  {
    if ( v4 != 2 )
      return 0LL;
    v11 = o__aligned_malloc(160LL, 8LL);
    if ( v11 )
    {
      v12 = sub_180021C90(v11);
LABEL_18:
      v14 = v12;
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
