/*
 * XREFs of sub_14083B8B0 @ 0x14083B8B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     RtlFindRange @ 0x14083BD60 (RtlFindRange.c)
 */

char __fastcall sub_14083B8B0(_QWORD *a1, _QWORD *a2)
{
  char v3; // r8
  __int64 v4; // rdx
  __int64 v6; // r9
  __int64 v7; // rcx
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r11

  v3 = 0;
  v4 = a2[5];
  v6 = *(_QWORD *)(v4 + 16);
  if ( !v6 )
  {
    a2[1] = *a2;
    return 1;
  }
  v7 = a2[4];
  if ( (*(_DWORD *)(v7 + 40) & 0xFFFFFFFD) == 0 || (*(_DWORD *)(v7 + 44) & 1) != 0 )
    v3 = 1;
  v8 = a2[2];
  v9 = a2[3];
  if ( v8 <= v9
    && ((int)RtlFindRange(
               a1[6],
               v8,
               v9,
               v6,
               *(_QWORD *)(v4 + 24),
               *(_BYTE *)(v4 + 36) & 1,
               v3,
               a1[41],
               a1[42],
               (__int64)a2) >= 0
     || (unsigned __int8)sub_14042A5E0(a1, a2)) )
  {
    a2[1] = *a2 - 1LL + *(_QWORD *)(a2[5] + 16LL);
    return 1;
  }
  return 0;
}
