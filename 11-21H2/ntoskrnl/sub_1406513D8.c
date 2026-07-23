/*
 * XREFs of sub_1406513D8 @ 0x1406513D8
 * Callers:
 *     sub_14065120C @ 0x14065120C (sub_14065120C.c)
 *     sub_140651304 @ 0x140651304 (sub_140651304.c)
 *     sub_1406515E8 @ 0x1406515E8 (sub_1406515E8.c)
 *     sub_140651C24 @ 0x140651C24 (sub_140651C24.c)
 * Callees:
 *     sub_140651254 @ 0x140651254 (sub_140651254.c)
 *     sub_140651394 @ 0x140651394 (sub_140651394.c)
 */

__int64 __fastcall sub_1406513D8(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rdx

  v2 = sub_140651394(a1, 1LL, 0LL);
  if ( v2 >= 0 )
  {
    v3 = *(_QWORD *)(a1 + 264);
    if ( *(_WORD *)(v3 + 510) == 0xAA55 )
    {
      if ( *(_BYTE *)(v3 + 450) != 0xEE || *(_BYTE *)(v3 + 466) || *(_BYTE *)(v3 + 482) || *(_BYTE *)(v3 + 498) )
        *(_DWORD *)(a1 + 256) = sub_140651254(a1) != 0 ? 2 : 0;
      else
        *(_DWORD *)(a1 + 256) = 1;
    }
    else
    {
      *(_DWORD *)(a1 + 256) = 2;
    }
  }
  return (unsigned int)v2;
}
