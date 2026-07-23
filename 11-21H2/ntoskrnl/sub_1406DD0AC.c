/*
 * XREFs of sub_1406DD0AC @ 0x1406DD0AC
 * Callers:
 *     sub_1402555BC @ 0x1402555BC (sub_1402555BC.c)
 * Callees:
 *     sub_140346D80 @ 0x140346D80 (sub_140346D80.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

char __fastcall sub_1406DD0AC(__int64 a1, int a2)
{
  char result; // al
  unsigned int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rdx
  unsigned int v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  result = sub_140346D80(a1, a2, &v9);
  if ( result )
  {
    v4 = v9;
    v5 = 16LL * v9;
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 1888) + v5 + 8);
    v7 = *(_QWORD *)(v6 + 8);
    if ( *(_QWORD *)(v7 + 8) != v6 + 8 || (v8 = *(_QWORD **)(v6 + 16), *v8 != v6 + 8) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    sub_14042A5E0(v6, (unsigned int)(*(_DWORD *)(v6 + 24) + 32));
    result = (unsigned __int8)memmove(
                                (void *)(v5 + *(_QWORD *)(a1 + 1888)),
                                (const void *)(*(_QWORD *)(a1 + 1888) + 16LL * (v4 + 1)),
                                16LL * (*(_DWORD *)(a1 + 1872) - v4 - 1));
    --*(_DWORD *)(a1 + 1872);
  }
  return result;
}
