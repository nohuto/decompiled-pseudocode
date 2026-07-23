/*
 * XREFs of sub_1403CC31C @ 0x1403CC31C
 * Callers:
 *     sub_1403CC230 @ 0x1403CC230 (sub_1403CC230.c)
 *     sub_140536000 @ 0x140536000 (sub_140536000.c)
 *     sub_140536090 @ 0x140536090 (sub_140536090.c)
 *     sub_1405362F0 @ 0x1405362F0 (sub_1405362F0.c)
 *     sub_140536510 @ 0x140536510 (sub_140536510.c)
 *     sub_140536590 @ 0x140536590 (sub_140536590.c)
 *     sub_140536620 @ 0x140536620 (sub_140536620.c)
 * Callees:
 *     sub_1403A3520 @ 0x1403A3520 (sub_1403A3520.c)
 *     longjmp @ 0x1403DF970 (longjmp.c)
 */

int *__fastcall sub_1403CC31C(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // r10
  int v5; // ecx
  unsigned int v6; // edx
  unsigned int v7; // r8d

  v4 = a2;
  v5 = *(_DWORD *)(a1 + 120) + 1;
  if ( (*(_DWORD *)(a1 + 16) & 0x400) != 0 )
    v5 = -v5;
  if ( *(_BYTE *)(a1 + 137) )
  {
    v6 = *(_DWORD *)(a1 + 4LL * a3 + 24);
    *(_DWORD *)(a1 + 4LL * a3 + 24) = v6 + v5;
  }
  else
  {
    v6 = *(unsigned __int16 *)(a1 + 4LL * a3 + 24);
    *(_WORD *)(a1 + 4LL * a3 + 24) = v5 + v6;
  }
  v7 = *(unsigned __int16 *)(a1 + 2 * v4 + 68);
  if ( v6 > v7 || v6 + *(_DWORD *)(a1 + 120) > v7 )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  return sub_1403A3520(*(_WORD *)(a1 + 2 * v4 + 56), v6);
}
