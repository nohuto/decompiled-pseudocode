/*
 * XREFs of sub_14053D2E4 @ 0x14053D2E4
 * Callers:
 *     sub_14035D970 @ 0x14035D970 (sub_14035D970.c)
 *     sub_1403992C0 @ 0x1403992C0 (sub_1403992C0.c)
 *     sub_1405398C0 @ 0x1405398C0 (sub_1405398C0.c)
 *     sub_14053D880 @ 0x14053D880 (sub_14053D880.c)
 *     sub_14053DA58 @ 0x14053DA58 (sub_14053DA58.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

LONG __fastcall sub_14053D2E4(__int64 a1, char a2)
{
  LONG result; // eax

  if ( *(_BYTE *)(a1 + 1173) && *(_BYTE *)(a1 + 1236) )
  {
    if ( (a2 & 1) != 0 )
      result = KeSetEvent((PRKEVENT)(a1 + 816), 0, 0);
    if ( (a2 & 2) != 0 )
      result = KeSetEvent((PRKEVENT)(a1 + 840), 0, 0);
    if ( (a2 & 4) != 0 )
    {
      if ( !*(_BYTE *)(a1 + 984) )
        KeBugCheckEx(0x34u, 0x5EBuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      result = sub_1402E2D20(a1 + 920, 0LL, 0, 0, 0LL);
    }
    if ( (a2 & 8) != 0 )
      result = KeSetEvent((PRKEVENT)(a1 + 864), 0, 0);
    if ( (a2 & 0x10) != 0 )
      result = KeSetEvent((PRKEVENT)(a1 + 888), 0, 0);
    if ( (a2 & 0x20) != 0 )
      return KeSetEvent((PRKEVENT)(a1 + 1560), 0, 0);
  }
  return result;
}
