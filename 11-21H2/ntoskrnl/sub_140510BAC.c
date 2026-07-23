/*
 * XREFs of sub_140510BAC @ 0x140510BAC
 * Callers:
 *     sub_140510A40 @ 0x140510A40 (sub_140510A40.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140510BAC(__int64 a1, char a2, __int64 a3)
{
  __int16 v3; // ax
  unsigned __int8 v4; // r11
  __int16 v5; // dx

  *(_OWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_DWORD *)a3 = 1;
  v3 = *(_WORD *)(a1 + 4);
  *(_WORD *)(a3 + 8) = v3;
  if ( !*(_DWORD *)a1 )
    goto LABEL_7;
  if ( *(_DWORD *)a1 == 1 || *(_DWORD *)a1 == 2 )
  {
    v4 = a2 & 3;
    *(_WORD *)(a3 + 10) &= ~4u;
    v5 = *(_WORD *)(a3 + 10);
    *(_WORD *)(a3 + 12) = *(_BYTE *)(a1 + 10) & 7 | (8
                                                   * ((32 * *(unsigned __int8 *)(a1 + 8)) | *(_BYTE *)(a1 + 9) & 0x1F));
    v3 = v5 & 0xFFFC | v4;
    *(_WORD *)(a3 + 10) = v3;
    return v3;
  }
  if ( *(_DWORD *)a1 != 3 )
  {
LABEL_7:
    *(_DWORD *)a3 = 0;
    return v3;
  }
  *(_WORD *)(a3 + 10) |= 4u;
  *(_BYTE *)(a3 + 12) = *(_BYTE *)(a1 + 9);
  LOBYTE(v3) = *(_BYTE *)(a1 + 8);
  *(_BYTE *)(a3 + 13) = v3;
  return v3;
}
