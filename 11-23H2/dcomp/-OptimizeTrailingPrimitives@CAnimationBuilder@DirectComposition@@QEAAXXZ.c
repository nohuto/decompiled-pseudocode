/*
 * XREFs of ?OptimizeTrailingPrimitives@CAnimationBuilder@DirectComposition@@QEAAXXZ @ 0x180063C9C
 * Callers:
 *     ?GetAnimationResourceHandle@CAnimationBuilder@DirectComposition@@QEAAJPEAVCDevice@2@_NPEAPEAVCAnimationProxy@2@@Z @ 0x180063974 (-GetAnimationResourceHandle@CAnimationBuilder@DirectComposition@@QEAAJPEAVCDevice@2@_NPEAPEAVCAn.c)
 * Callees:
 *     ?PrimitiveAtIndex@CAnimationData@DirectComposition@@QEBAAEAUDwmAnimationPrimitive@@_K@Z @ 0x180063D90 (-PrimitiveAtIndex@CAnimationData@DirectComposition@@QEBAAEAUDwmAnimationPrimitive@@_K@Z.c)
 */

void __fastcall DirectComposition::CAnimationBuilder::OptimizeTrailingPrimitives(
        DirectComposition::CAnimationBuilder *this)
{
  DirectComposition::CAnimationData *v2; // rsi
  struct DwmAnimationPrimitive *v3; // rax
  struct DwmAnimationPrimitive *v4; // rdi
  struct DwmAnimationPrimitive *v5; // rax

  if ( *((_QWORD *)this + 10) )
  {
    v2 = (DirectComposition::CAnimationBuilder *)((char *)this + 48);
    v3 = DirectComposition::CAnimationData::PrimitiveAtIndex(
           (DirectComposition::CAnimationBuilder *)((char *)this + 48),
           *((_QWORD *)this + 10) - 1LL);
    if ( *(_DWORD *)v3 == 1
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v3 + 4) - 0.0) & _xmm) <= 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v3 + 5) - 0.0) & _xmm) <= 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v3 + 6) - 0.0) & _xmm) <= 0.0000011920929 )
    {
      *(_DWORD *)v3 = 4;
      *((_DWORD *)v3 + 4) = *((_DWORD *)v3 + 7);
    }
    while ( *((_QWORD *)this + 10) >= 2uLL )
    {
      v4 = DirectComposition::CAnimationData::PrimitiveAtIndex(v2, *((_QWORD *)v2 + 4) - 1LL);
      v5 = DirectComposition::CAnimationData::PrimitiveAtIndex(v2, *((_QWORD *)this + 10) - 2LL);
      if ( *(_DWORD *)v4 != 4
        || *(_DWORD *)v5 != 1
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v5 + 4) - 0.0) & _xmm) > 0.0000011920929
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v5 + 5) - 0.0) & _xmm) > 0.0000011920929
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v5 + 6) - 0.0) & _xmm) > 0.0000011920929
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v5 + 7) - *((float *)v4 + 4)) & _xmm) > 0.0000011920929 )
      {
        break;
      }
      *(_DWORD *)v5 = 4;
      *((_DWORD *)v5 + 4) = *((_DWORD *)v4 + 4);
      --*((_QWORD *)this + 10);
    }
  }
}
