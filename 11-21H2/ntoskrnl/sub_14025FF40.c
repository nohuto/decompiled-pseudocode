/*
 * XREFs of sub_14025FF40 @ 0x14025FF40
 * Callers:
 *     sub_140260144 @ 0x140260144 (sub_140260144.c)
 * Callees:
 *     sub_14025F6B0 @ 0x14025F6B0 (sub_14025F6B0.c)
 *     sub_14025FD40 @ 0x14025FD40 (sub_14025FD40.c)
 *     sub_1402609F4 @ 0x1402609F4 (sub_1402609F4.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 */

__int64 __fastcall sub_14025FF40(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned int v3; // edi
  __int64 v6; // rbp
  unsigned int v7; // r15d
  __int64 *v8; // r14
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 *v12; // rdx
  unsigned int v14; // ebx

  v2 = -1;
  v3 = 0;
  v6 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a2 + 1838));
  v7 = *(_DWORD *)(v6 + 16728);
  if ( !v7 )
    return 3221225799LL;
  v8 = (__int64 *)(v6 + 16736);
  do
  {
    if ( (*(_BYTE *)(*v8 + 204) & 0x50) == 0 )
    {
      if ( v2 == -1 || (v14 = sub_14025FD40(*v8), v14 > (unsigned int)sub_14025FD40(*(_QWORD *)(v6 + 8LL * v2 + 16736))) )
        v2 = v3;
    }
    ++v3;
    ++v8;
  }
  while ( v3 < v7 );
  if ( v2 == -1 )
    return 3221225799LL;
  v9 = *(_DWORD *)(a2 + 1520);
  if ( !v9 )
    return 3221225738LL;
  if ( v9 > 0x2AAAAAAA )
    v9 = 715827882;
  v10 = sub_1402609F4(2 * v9);
  *(_QWORD *)(a1 + 56) = v10;
  if ( !v10 )
    return 3221225626LL;
  v11 = sub_1402CCC50(0LL, a1 + 64);
  *v12 = ((unsigned __int64)(v2 & 0xF) << 12) | v11 & 0xFFFFFFFFFFFF0FFFuLL;
  *(_DWORD *)(a1 + 72) = sub_14025F6B0(v6, v12, 6 * v9, 0x21u);
  return 0LL;
}
