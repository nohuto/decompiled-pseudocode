/*
 * XREFs of KiVerifyXcptFilter @ 0x140B5CBB4
 * Callers:
 *     KiVerifyXcpt2 @ 0x140B5C490 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt13 @ 0x140B5C5E0 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt11 @ 0x140B5C630 (KiVerifyXcpt11.c)
 *     KiVerifyXcpt5 @ 0x140B5C690 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt4 @ 0x140B5C6E0 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt3 @ 0x140B5C730 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt1 @ 0x140B5C780 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt0 @ 0x140B5C7D0 (KiVerifyXcpt0.c)
 *     KiVerifyXcpt14 @ 0x140B5C820 (KiVerifyXcpt14.c)
 *     KiVerifyXcpt9 @ 0x140B5C880 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt8 @ 0x140B5C8E0 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt7 @ 0x140B5C940 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt6 @ 0x140B5C9A0 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt12 @ 0x140B5CA00 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt10 @ 0x140B5CA90 (KiVerifyXcpt10.c)
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
