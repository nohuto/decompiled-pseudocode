/*
 * XREFs of sub_140651254 @ 0x140651254
 * Callers:
 *     sub_1406513D8 @ 0x1406513D8 (sub_1406513D8.c)
 * Callees:
 *     sub_140651D0C @ 0x140651D0C (sub_140651D0C.c)
 */

char __fastcall sub_140651254(__int64 a1)
{
  __int64 v1; // rsi
  char v2; // bl
  int v4; // ecx
  _BYTE *i; // rax
  __int64 v6; // r8
  unsigned int v7; // edi

  v1 = *(_QWORD *)(a1 + 264);
  v2 = 0;
  if ( *(_WORD *)(v1 + 510) == 0xAA55 && ((*(_BYTE *)v1 + 23) & 0xFD) == 0 )
  {
    v2 = 1;
    if ( *(_DWORD *)(a1 + 224) == 11 )
    {
      if ( *(_QWORD *)(v1 + 3) == 0x202020205346544ELL )
        return v2;
      v4 = 0;
      for ( i = (_BYTE *)(v1 + 450); !*i; i += 16 )
      {
        if ( (unsigned int)++v4 >= 4 )
          return v2;
      }
    }
    v6 = *(_QWORD *)(a1 + 248);
    v7 = 0;
    while ( (unsigned __int8)sub_140651D0C(16LL * v7 + v1 + 446, 0LL, v6) )
    {
      if ( ++v7 >= 4 )
        return 0;
    }
  }
  return v2;
}
