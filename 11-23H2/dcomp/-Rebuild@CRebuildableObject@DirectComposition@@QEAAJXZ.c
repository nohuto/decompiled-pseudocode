/*
 * XREFs of ?Rebuild@CRebuildableObject@DirectComposition@@QEAAJXZ @ 0x1800FAC54
 * Callers:
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ??1CVirtualSurface@DirectComposition@@MEAA@XZ @ 0x18003A9DC (--1CVirtualSurface@DirectComposition@@MEAA@XZ.c)
 *     ?RebuildAndRemoveFromDirtyList@CPrimitiveGroup@DirectComposition@@IEAAJXZ @ 0x1800FA8E8 (-RebuildAndRemoveFromDirtyList@CPrimitiveGroup@DirectComposition@@IEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CRebuildableObject::Rebuild(DirectComposition::CRebuildableObject *this)
{
  __int64 result; // rax

  *((_BYTE *)this + 16) |= 2u;
  result = (*(__int64 (__fastcall **)(DirectComposition::CRebuildableObject *))(*(_QWORD *)this + 8LL))(this);
  *((_BYTE *)this + 16) &= ~2u;
  return result;
}
