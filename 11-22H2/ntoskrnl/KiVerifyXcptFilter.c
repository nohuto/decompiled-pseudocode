/*
 * XREFs of KiVerifyXcptFilter @ 0x140B5FBF4
 * Callers:
 *     KiVerifyXcpt2 @ 0x140B5F4D0 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt13 @ 0x140B5F620 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt11 @ 0x140B5F670 (KiVerifyXcpt11.c)
 *     KiVerifyXcpt5 @ 0x140B5F6D0 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt4 @ 0x140B5F720 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt3 @ 0x140B5F770 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt1 @ 0x140B5F7C0 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt0 @ 0x140B5F810 (KiVerifyXcpt0.c)
 *     KiVerifyXcpt14 @ 0x140B5F860 (KiVerifyXcpt14.c)
 *     KiVerifyXcpt9 @ 0x140B5F8C0 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt8 @ 0x140B5F920 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt7 @ 0x140B5F980 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt6 @ 0x140B5F9E0 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt12 @ 0x140B5FA40 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt10 @ 0x140B5FAD0 (KiVerifyXcpt10.c)
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
