/*
 * XREFs of CmpHashCompressedComponent @ 0x140769664
 * Callers:
 *     CmDeleteLayeredKey @ 0x140616E3C (CmDeleteLayeredKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1407694D0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140A20648 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpPartialPromoteSubkeys @ 0x140A26650 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     NLS_UPCASE @ 0x14022D420 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall CmpHashCompressedComponent(unsigned __int8 *a1, int a2)
{
  unsigned int v2; // r9d
  int v3; // r11d
  unsigned __int8 *i; // r10
  unsigned __int16 v5; // r8
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned __int16 v8; // r8

  v2 = 0;
  v3 = a2;
  for ( i = a1; v3; --v3 )
  {
    v5 = *i;
    if ( (unsigned __int8)v5 >= 0x61u )
    {
      if ( (unsigned __int8)v5 <= 0x7Au )
      {
        v5 -= 32;
      }
      else
      {
        CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
        v5 = NLS_UPCASE(CurrentServerSiloGlobals[154], v8);
      }
    }
    ++i;
    v2 = v5 + 37 * v2;
  }
  return v2;
}
