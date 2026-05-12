/*
 * XREFs of sub_1C0017AF4 @ 0x1C0017AF4
 * Callers:
 *     sub_1C0009130 @ 0x1C0009130 (sub_1C0009130.c)
 *     sub_1C00176A0 @ 0x1C00176A0 (sub_1C00176A0.c)
 *     sub_1C005FDF0 @ 0x1C005FDF0 (sub_1C005FDF0.c)
 *     sub_1C0061770 @ 0x1C0061770 (sub_1C0061770.c)
 *     sub_1C0062414 @ 0x1C0062414 (sub_1C0062414.c)
 * Callees:
 *     sub_1C00035A0 @ 0x1C00035A0 (sub_1C00035A0.c)
 *     sub_1C000729C @ 0x1C000729C (sub_1C000729C.c)
 *     sub_1C0008C44 @ 0x1C0008C44 (sub_1C0008C44.c)
 *     sub_1C0017C68 @ 0x1C0017C68 (sub_1C0017C68.c)
 *     sub_1C0021EB0 @ 0x1C0021EB0 (sub_1C0021EB0.c)
 *     sub_1C0037AA8 @ 0x1C0037AA8 (sub_1C0037AA8.c)
 *     sub_1C0050448 @ 0x1C0050448 (sub_1C0050448.c)
 */

LONG __fastcall sub_1C0017AF4(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rax
  LONG result; // eax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8LL);
  if ( *(_BYTE *)(v2 + 2) == 40 )
    v3 = *(_QWORD *)(v2 + 96);
  else
    v3 = *(_QWORD *)(v2 + 48);
  v4 = *(_QWORD *)(v3 + 224);
  sub_1C0017C68(v4, a1);
  sub_1C00035A0(v3, *(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL));
  v6 = *(_QWORD *)(v4 + 24);
  if ( *(_QWORD *)(v6 + 5544) )
    sub_1C0037AA8(v6, v3);
  if ( *(_BYTE *)(v2 + 2) == 40 )
  {
    if ( (*(_BYTE *)(v3 + 16) & 0x40) != 0 )
    {
      sub_1C0021EB0(*(_QWORD *)(v3 + 752), v2);
      *(_QWORD *)(*(_QWORD *)(v3 + 752) + 48LL) = *(_QWORD *)(v3 + 176);
      *(_QWORD *)(*(_QWORD *)(v3 + 752) + 24LL) = *(_QWORD *)(v3 + 184);
      *(_QWORD *)(*(_QWORD *)(v3 + 752) + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v3 + 752) + 40LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8LL) = *(_QWORD *)(v3 + 752);
      *(_BYTE *)(v3 + 16) &= ~0x40u;
      *(_QWORD *)(v3 + 752) = 0LL;
    }
    else
    {
      *(_QWORD *)(v2 + 96) = 0LL;
      v9 = *(_QWORD *)(v3 + 184);
      *(_QWORD *)(v2 + 104) = 0LL;
      *(_QWORD *)(v2 + 64) = v9;
      v10 = *(_QWORD *)(v3 + 192);
      if ( v10 )
      {
        v11 = sub_1C0050448(v2);
        if ( v11 )
          *(_QWORD *)(v11 + 16) = v10;
      }
    }
  }
  else
  {
    *(_QWORD *)(v2 + 48) = *(_QWORD *)(v3 + 176);
    v7 = *(_QWORD *)(v3 + 184);
    *(_QWORD *)(v2 + 56) = 0LL;
    *(_QWORD *)(v2 + 40) = 0LL;
    *(_QWORD *)(v2 + 24) = v7;
  }
  sub_1C0008C44(v3, 1, v5);
  if ( *(_BYTE *)(v2 + 2) == 40 )
    result = *(_DWORD *)(v2 + 24);
  else
    result = *(_DWORD *)(v2 + 12);
  if ( (result & 0x4000) == 0 )
    return sub_1C000729C(v4);
  return result;
}
