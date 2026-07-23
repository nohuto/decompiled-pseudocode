/*
 * XREFs of sub_1403A97A4 @ 0x1403A97A4
 * Callers:
 *     sub_1403A8ACC @ 0x1403A8ACC (sub_1403A8ACC.c)
 * Callees:
 *     sub_1403AA258 @ 0x1403AA258 (sub_1403AA258.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1403A97A4(__int64 a1, _QWORD *a2)
{
  char *v4; // rbx
  unsigned int i; // edx
  __int64 v6; // r9
  __int64 v7; // rax

  v4 = (char *)sub_1403AA258(17LL * *(unsigned __int16 *)(a1 + 24));
  if ( !v4 )
    return 3221225626LL;
  memset(v4, 0, 17LL * *(unsigned __int16 *)(a1 + 24));
  for ( i = 0; i < *(unsigned __int16 *)(a1 + 24); ++i )
  {
    v6 = 17LL * i;
    *(_DWORD *)&v4[v6] = *(_DWORD *)(*(_QWORD *)(a1 + 50) + 4LL * i);
    *(_DWORD *)&v4[v6 + 4] = *(_DWORD *)(*(_QWORD *)(a1 + 58) + 4LL * i);
    v7 = *(_QWORD *)(a1 + 42);
    if ( v7 )
    {
      if ( (*(_BYTE *)(v7 + i) & 1) != 0 )
        v4[v6 + 16] = 1;
    }
  }
  *a2 = v4;
  return 0LL;
}
