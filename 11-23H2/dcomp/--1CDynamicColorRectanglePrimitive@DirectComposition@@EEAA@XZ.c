/*
 * XREFs of ??1CDynamicColorRectanglePrimitive@DirectComposition@@EEAA@XZ @ 0x1800F7ACC
 * Callers:
 *     ??_ECDynamicColorRectanglePrimitive@DirectComposition@@EEAAPEAXI@Z @ 0x1800F7B30 (--_ECDynamicColorRectanglePrimitive@DirectComposition@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CDynamicColorRectanglePrimitive::~CDynamicColorRectanglePrimitive(
        DirectComposition::CDynamicColorRectanglePrimitive *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &DirectComposition::CDynamicColorRectanglePrimitive::`vftable'{for `CMILCOMBaseT<IDCompositionPrimitivePartner>'};
  *((_QWORD *)this + 2) = &DirectComposition::CDynamicColorRectanglePrimitive::`vftable'{for `DirectComposition::CDirtyListener'};
  v2 = *((_QWORD *)this + 29);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  DirectComposition::CPrimitive::~CPrimitive(this);
}
