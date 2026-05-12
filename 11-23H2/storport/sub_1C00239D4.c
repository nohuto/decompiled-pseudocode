/*
 * XREFs of sub_1C00239D4 @ 0x1C00239D4
 * Callers:
 *     sub_1C0001770 @ 0x1C0001770 (sub_1C0001770.c)
 *     sub_1C0023A9C @ 0x1C0023A9C (sub_1C0023A9C.c)
 * Callees:
 *     sub_1C0023B80 @ 0x1C0023B80 (sub_1C0023B80.c)
 */

__int64 __fastcall sub_1C00239D4(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r10
  __int64 v4; // rdi
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r8

  result = *(unsigned int *)(a1 + 3384);
  if ( !(_DWORD)result )
  {
    v3 = *(_QWORD *)(a1 + 3376);
    v4 = *(unsigned int *)(a1 + 868);
    v5 = *(_QWORD *)(a1 + 3328);
    v6 = v4 * (v3 + 1) / v5;
    if ( v6 > 0xFFFFFFFF )
    {
      if ( byte_1C0093BE8 && (byte_1C0093A04 & 4) != 0 )
        sub_1C0023B80(a1 + 186, a1 + 169, v6, a1 + 160, a1 + 169, a1 + 186, v3, v4, v5, v4 * (v3 + 1) / v5);
      v6 = 0xFFFFFFFFLL;
    }
    if ( v6 != 0xFFFFFFFF )
      LODWORD(v6) = v6 + 1;
    *(_DWORD *)(a1 + 3384) = v6;
    return (unsigned int)v6;
  }
  return result;
}
