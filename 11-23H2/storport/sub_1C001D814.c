/*
 * XREFs of sub_1C001D814 @ 0x1C001D814
 * Callers:
 *     sub_1C001C288 @ 0x1C001C288 (sub_1C001C288.c)
 * Callees:
 *     sub_1C006B938 @ 0x1C006B938 (sub_1C006B938.c)
 *     sub_1C0070474 @ 0x1C0070474 (sub_1C0070474.c)
 */

__int64 __fastcall sub_1C001D814(__int64 a1)
{
  __int64 v2; // rax
  int v3; // edi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  bool v6; // zf
  __int64 v8; // r9
  __int64 v9; // [rsp+B0h] [rbp-18h] BYREF
  unsigned __int64 v10; // [rsp+B8h] [rbp-10h]

  v9 = 0LL;
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 5284);
    LODWORD(v9) = v3;
  }
  else
  {
    LOBYTE(v3) = v9;
  }
  v4 = *(_QWORD *)(a1 + 3320);
  v5 = v4 / 0x989680;
  if ( v4 >= 0x98968000 )
    v5 = 255LL;
  v6 = *(_QWORD *)(a1 + 2168) == 0LL;
  v10 = v5;
  if ( !v6 || *(_QWORD *)(a1 + 2176) || *(_DWORD *)(a1 + 2184) || (*(_BYTE *)(a1 + 450) & 2) != 0 )
  {
    if ( (byte_1C0093B18 != 1 || dword_1C0093B1C) && dword_1C0093BDC < (unsigned int)dword_1C0093418 )
    {
      if ( (*(_DWORD *)(a1 + 2040) & 0x20) != 0 )
        dword_1C0093B1C = -1;
      if ( *(_BYTE *)(a1 + 2044) )
        dword_1C0093B1C = -1;
      if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
        dword_1C0093B1C = -1;
    }
    sub_1C0070474(a1, &v9);
    if ( (byte_1C0093A04 & 8) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 24);
      sub_1C006B938(
        a1 + 186,
        a1 + 169,
        a1 + 160,
        *(_QWORD *)(v8 + 4656),
        *(_DWORD *)(v8 + 56),
        v8 + 5000,
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        a1 + 2024,
        a1 + 160,
        a1 + 169,
        a1 + 186,
        *(_QWORD *)(a1 + 2152),
        *(_QWORD *)(a1 + 2160),
        v10,
        *(_QWORD *)(a1 + 2176),
        *(_QWORD *)(a1 + 2168),
        *(_DWORD *)(a1 + 2184),
        *(_DWORD *)(a1 + 2188),
        v3);
    }
  }
  *(_QWORD *)(a1 + 2152) = 0LL;
  *(_QWORD *)(a1 + 2160) = 0LL;
  *(_QWORD *)(a1 + 2168) = 0LL;
  *(_QWORD *)(a1 + 2176) = 0LL;
  *(_DWORD *)(a1 + 2188) = 0;
  return 0LL;
}
