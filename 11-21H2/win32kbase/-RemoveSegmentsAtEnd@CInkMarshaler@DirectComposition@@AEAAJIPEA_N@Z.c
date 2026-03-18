/*
 * XREFs of ?RemoveSegmentsAtEnd@CInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z @ 0x1C02189A8
 * Callers:
 *     ?SetIntegerProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0218BA0 (-SetIntegerProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z.c)
 * Callees:
 *     ?Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z @ 0x1C000B678 (-Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z.c)
 */

__int64 __fastcall DirectComposition::CInkMarshaler::RemoveSegmentsAtEnd(
        DirectComposition::CInkMarshaler *this,
        unsigned int a2,
        bool *a3)
{
  __int64 result; // rax
  unsigned __int64 v6; // r9

  result = DirectComposition::CDCompDynamicArrayBase::Shrink(
             (DirectComposition::CInkMarshaler *)((char *)this + 120),
             a2);
  if ( (int)result >= 0 )
  {
    v6 = *((unsigned int *)this + 40);
    if ( v6 >= *((_QWORD *)this + 18) )
      LODWORD(v6) = *((_QWORD *)this + 18);
    *((_DWORD *)this + 4) &= ~0x80u;
    *((_DWORD *)this + 40) = v6;
    *a3 = 1;
  }
  return result;
}
