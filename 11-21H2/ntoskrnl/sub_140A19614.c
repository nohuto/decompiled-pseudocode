/*
 * XREFs of sub_140A19614 @ 0x140A19614
 * Callers:
 *     sub_14084192C @ 0x14084192C (sub_14084192C.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140841A58 @ 0x140841A58 (sub_140841A58.c)
 *     sub_140841E14 @ 0x140841E14 (sub_140841E14.c)
 *     sub_140A18CD0 @ 0x140A18CD0 (sub_140A18CD0.c)
 *     sub_140A18E64 @ 0x140A18E64 (sub_140A18E64.c)
 */

__int64 __fastcall sub_140A19614(__int64 a1, __int64 a2)
{
  int v4; // edi
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // [rsp+60h] [rbp+18h] BYREF
  wchar_t *v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0;
  v10 = 0LL;
  v4 = sub_140841A58(a2);
  if ( v4 < 0 )
    goto LABEL_2;
  if ( *(_DWORD *)(a2 + 64) != 6 )
  {
    *(_DWORD *)(a1 + 824) |= 2u;
LABEL_5:
    *(_DWORD *)(a1 + 760) |= 2u;
    return 0;
  }
  if ( (int)sub_140A18CD0(&v9, a2) < 0 )
  {
    v6 = 2;
  }
  else
  {
    *(_QWORD *)(a1 + 816) = v9;
    v6 = 1;
    *(_DWORD *)(a1 + 800) = 2;
    *(_QWORD *)(a1 + 808) = 4LL;
  }
  *(_DWORD *)(a1 + 824) |= v6;
  if ( (int)sub_140A18E64(&v10, a2) < 0 )
    goto LABEL_5;
  v4 = sub_140841E14(v10);
  if ( v4 >= 0 )
  {
    *(_DWORD *)(a1 + 736) = 4;
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)(v7 + 2 * v8) );
    *(_DWORD *)(a1 + 760) |= 5u;
    *(_QWORD *)(a1 + 744) = v8;
    *(_QWORD *)(a1 + 752) = v7;
    return 0;
  }
LABEL_2:
  sub_1406E0C3C(1LL, (__int64)"AslpFileGetPeExportNameExeWrapper");
  return (unsigned int)v4;
}
