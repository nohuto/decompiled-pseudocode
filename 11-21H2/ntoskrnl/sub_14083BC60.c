/*
 * XREFs of sub_14083BC60 @ 0x14083BC60
 * Callers:
 *     sub_14083BB70 @ 0x14083BB70 (sub_14083BB70.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14083BA44 @ 0x14083BA44 (sub_14083BA44.c)
 *     RtlFindRange @ 0x14083BD60 (RtlFindRange.c)
 */

char __fastcall sub_14083BC60(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // r10
  unsigned __int64 v4; // r8
  __int64 v6; // r9
  int v7; // ecx
  int v8; // edx
  char v9; // r11

  v2 = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 24);
  if ( v2 > v4 )
    return 0;
  v6 = *(_QWORD *)(a2 + 40);
  if ( !*(_QWORD *)(v6 + 16) )
  {
    *(_QWORD *)a2 = v2;
    *(_QWORD *)(a2 + 8) = v2;
    return 1;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 40LL) & 0xFFFFFFFD) == 0 )
    *(_BYTE *)(a2 + 67) |= 1u;
  v7 = *(_DWORD *)(v6 + 36);
  v8 = (*(unsigned __int16 *)(a2 + 64) >> 2) & 2;
  v9 = v8 | 1;
  if ( (v7 & 1) == 0 )
    v9 = v8;
  if ( (v7 & 8) != 0 )
    *(_BYTE *)(a2 + 67) |= 0x40u;
  if ( (int)RtlFindRange(
              a1[6],
              v2,
              v4,
              *(_QWORD *)(v6 + 16),
              *(_QWORD *)(v6 + 24),
              v9,
              *(_BYTE *)(a2 + 67),
              a1[41],
              a1[42],
              a2) >= 0 )
  {
    *(_QWORD *)(a2 + 8) = *(_QWORD *)a2 - 1LL + *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL);
    return 1;
  }
  if ( sub_14083BA44((__int64)a1, a2) )
    return 1;
  return sub_14042A5E0(a1, a2);
}
