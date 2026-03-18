/*
 * XREFs of XmGetRegisterAddress @ 0x1403B9444
 * Callers:
 *     XmMoveRegImmediate @ 0x1403B8C30 (XmMoveRegImmediate.c)
 *     XmGroup1General @ 0x1403B90D0 (XmGroup1General.c)
 *     XmMoveGeneral @ 0x1403B91C0 (XmMoveGeneral.c)
 *     XmEvaluateAddressSpecifier @ 0x1403B922C (XmEvaluateAddressSpecifier.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XmGetRegisterAddress(__int64 a1, unsigned int a2)
{
  if ( *(_DWORD *)(a1 + 120) || a2 < 4 )
    return a1 + 4 * (a2 + 6LL);
  else
    return a1 + 25 + 4LL * (a2 - 4);
}
