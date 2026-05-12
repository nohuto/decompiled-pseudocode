/*
 * XREFs of sub_1C005E1A8 @ 0x1C005E1A8
 * Callers:
 *     sub_1C00224F4 @ 0x1C00224F4 (sub_1C00224F4.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C000729C @ 0x1C000729C (sub_1C000729C.c)
 *     sub_1C0019C38 @ 0x1C0019C38 (sub_1C0019C38.c)
 *     sub_1C001DFEC @ 0x1C001DFEC (sub_1C001DFEC.c)
 *     sub_1C0022A14 @ 0x1C0022A14 (sub_1C0022A14.c)
 *     sub_1C0058AEC @ 0x1C0058AEC (sub_1C0058AEC.c)
 */

__int64 __fastcall sub_1C005E1A8(__int64 a1, IRP *a2)
{
  unsigned int v3; // eax
  __int64 v5; // rax
  unsigned int v6; // eax

  v3 = *(_DWORD *)(a1 + 48) - 5;
  *(_DWORD *)(a1 + 48) = 7;
  if ( v3 > 1 )
    sub_1C001DFEC(a1);
  *(_BYTE *)(a1 + 448) &= ~1u;
  while ( 1 )
  {
    v5 = sub_1C0022A14(a1 + 640);
    if ( !v5 )
      break;
    sub_1C0058AEC(a1, 8, v5);
  }
  sub_1C000729C(a1);
  v6 = sub_1C0019C38(a1);
  return sub_1C0003440(a2, 0, v6);
}
