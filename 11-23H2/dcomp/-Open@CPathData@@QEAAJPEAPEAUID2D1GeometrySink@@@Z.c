/*
 * XREFs of ?Open@CPathData@@QEAAJPEAPEAUID2D1GeometrySink@@@Z @ 0x180040F3C
 * Callers:
 *     ?RuntimeClassInitialize@CompositionPath@Composition@UI@Windows@@QEAAJPEAUID2D1Geometry@@@Z @ 0x180040FF8 (-RuntimeClassInitialize@CompositionPath@Composition@UI@Windows@@QEAAJPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?Reset@CPathData@@AEAAXXZ @ 0x180040B8C (-Reset@CPathData@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPathData::Open(CPathData *this, struct ID2D1GeometrySink **a2)
{
  __int64 v4; // rax

  CPathData::Reset(this);
  v4 = *(_QWORD *)this;
  *((_WORD *)this + 24) = 0;
  (*(void (__fastcall **)(CPathData *))(v4 + 8))(this);
  *a2 = this;
  return 0LL;
}
