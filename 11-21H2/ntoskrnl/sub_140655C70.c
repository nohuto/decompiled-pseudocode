/*
 * XREFs of sub_140655C70 @ 0x140655C70
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140655C70(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // rdi
  char v4; // al
  __int64 v5; // rdx
  __int64 v6; // rdx
  char v7; // si
  char v9; // al
  __int16 v10; // r8
  char v11; // al

  v2 = a2;
  if ( !a1 )
    return 3LL;
  if ( !*(_QWORD *)a1 )
    return 3LL;
  LOBYTE(a2) = 5;
  v4 = sub_14042A5E0(a1, a2);
  if ( v4 == -1 )
    return 3LL;
  if ( (v4 & 1) != 0 )
  {
    if ( (v4 & 0xE) != 0 )
      return 2LL;
    v7 = sub_14042A5E0(a1, 0LL);
    if ( (*(_BYTE *)(a1 + 12) & 4) == 0 || (LOBYTE(v6) = 6, (sub_14042A5E0(a1, v6) & 0x80u) != 0LL) )
    {
      *v2 = v7;
      return 0LL;
    }
  }
  else
  {
    LOBYTE(v5) = 6;
    v9 = sub_14042A5E0(a1, v5);
    v10 = *(_WORD *)(a1 + 12);
    v11 = v9 & 0x40;
    if ( v11 == 0 && (v10 & 2) != 0 || v11 != 0 && (v10 & 2) == 0 )
      *(_WORD *)(a1 + 12) = v10 | 4;
  }
  return 1LL;
}
