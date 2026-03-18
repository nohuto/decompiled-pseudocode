/*
 * XREFs of KiVerifyXcptFilter @ 0x140B19F5C
 * Callers:
 *     KiVerifyXcpt2 @ 0x140B19880 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt0 @ 0x140B199D0 (KiVerifyXcpt0.c)
 *     KiVerifyXcpt1 @ 0x140B19A20 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x140B19A70 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x140B19AC0 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x140B19B10 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x140B19B60 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140B19BC0 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x140B19C20 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x140B19C80 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x140B19CE0 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt11 @ 0x140B19DF0 (KiVerifyXcpt11.c)
 *     KiVerifyXcpt12 @ 0x140B19E40 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140B19EB0 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x140B19F00 (KiVerifyXcpt14.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiVerifyXcptFilter(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 16) )
  {
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 12) = -1437226411;
    ++**(_DWORD **)a1;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = 1;
  }
  return 1LL;
}
