/*
 * XREFs of HvFoldBackUnreconciledData @ 0x140A20D9C
 * Callers:
 *     CmpFlushHive @ 0x140753078 (CmpFlushHive.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140293800 (RtlNumberOfSetBits.c)
 *     RtlMergeBitMaps @ 0x1402F6570 (RtlMergeBitMaps.c)
 *     HvFreeUnreconciledData @ 0x1407D9D64 (HvFreeUnreconciledData.c)
 */

void __fastcall HvFoldBackUnreconciledData(__int64 a1)
{
  ULONG v2; // eax
  bool v3; // zf

  RtlMergeBitMaps(a1 + 112, (unsigned int *)(a1 + 1736));
  v2 = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 112));
  v3 = *(_BYTE *)(a1 + 1732) == 0;
  *(_DWORD *)(a1 + 128) = v2;
  if ( !v3 )
    *(_BYTE *)(a1 + 195) = 1;
  HvFreeUnreconciledData(a1);
}
