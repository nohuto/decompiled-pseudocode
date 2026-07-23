/*
 * XREFs of sub_140389160 @ 0x140389160
 * Callers:
 *     sub_140276758 @ 0x140276758 (sub_140276758.c)
 *     sub_14038AA18 @ 0x14038AA18 (sub_14038AA18.c)
 *     sub_1403992C0 @ 0x1403992C0 (sub_1403992C0.c)
 *     sub_14053E098 @ 0x14053E098 (sub_14053E098.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14053C3E4 @ 0x14053C3E4 (sub_14053C3E4.c)
 */

LONG __fastcall sub_140389160(__int64 a1, int a2)
{
  LONG result; // eax
  int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2;
  if ( dword_140C54C60 && *(_BYTE *)(a1 + 1300) )
  {
    if ( byte_140C54C58 == 1 )
    {
      return sub_14053C3E4(a1, sub_1405398C0, &v4);
    }
    else
    {
      if ( (a2 & 1) != 0 )
      {
        result = KeSetEvent((PRKEVENT)(a1 + 816), 0, 0);
        LOBYTE(a2) = v4;
      }
      if ( (a2 & 2) != 0 )
      {
        result = KeSetEvent((PRKEVENT)(a1 + 840), 0, 0);
        LOBYTE(a2) = v4;
      }
      if ( (a2 & 4) != 0 )
      {
        if ( !*(_BYTE *)(a1 + 984) )
          KeBugCheckEx(0x34u, 0x12B3uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        result = sub_1402E2D20(a1 + 920, 0LL, 0, 0, 0LL);
        LOBYTE(a2) = v4;
      }
      if ( (a2 & 8) != 0 )
      {
        result = KeSetEvent((PRKEVENT)(a1 + 864), 0, 0);
        LOBYTE(a2) = v4;
      }
      if ( (a2 & 0x10) != 0 )
        return KeSetEvent((PRKEVENT)(a1 + 888), 0, 0);
    }
  }
  return result;
}
