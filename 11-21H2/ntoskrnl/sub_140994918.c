/*
 * XREFs of sub_140994918 @ 0x140994918
 * Callers:
 *     sub_1407EE90C @ 0x1407EE90C (sub_1407EE90C.c)
 *     sub_1407EEC68 @ 0x1407EEC68 (sub_1407EEC68.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140994918(__int64 a1, int a2)
{
  __int64 v2; // r8
  char v4; // r9
  unsigned int v5; // r10d
  unsigned int v6; // ecx

  v2 = qword_140C229D0;
  v4 = 1;
  while ( (__int64 *)v2 != &qword_140C229D0 )
  {
    v5 = *(_DWORD *)(v2 + 64);
    if ( v5 - 1 <= 0xFFFFFFFD )
    {
      v6 = *(_DWORD *)(v2 + 68);
      if ( v6 <= v5 * *(_DWORD *)(a1 + 16) / 0x64 + v5 / 0xC8 )
        v6 = v5 * *(_DWORD *)(a1 + 16) / 0x64 + v5 / 0xC8;
      if ( *(_DWORD *)(v2 + 88) > a2 * v5 / 0x64 + v6 )
        return 0;
    }
    v2 = *(_QWORD *)v2;
  }
  return v4;
}
