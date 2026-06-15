/*
 * XREFs of ?AdviseVpoDeletion@CProtectedOutputController@@QEAAXPEAVCVirtualProtectedOutput@@@Z @ 0x14005A8E0
 * Callers:
 *     ?Release@CVirtualProtectedOutput@@UEAAKXZ @ 0x14005AF20 (-Release@CVirtualProtectedOutput@@UEAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14005AB60 (-FreeNode@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CProtectedOutputController::AdviseVpoDeletion(__int64 **this, struct CVirtualProtectedOutput *a2)
{
  __int64 *i; // rdx
  __int64 *v5; // rax
  __int64 *v6; // rax

  ((void (__fastcall *)(__int64 **, struct CVirtualProtectedOutput *, _QWORD))(*this)[6])(this, a2, 0LL);
  for ( i = this[2]; i && (struct CVirtualProtectedOutput *)i[2] != a2; i = (__int64 *)*i )
    ;
  if ( !i )
    ATL::AtlThrowImpl(-2147467259);
  v5 = (__int64 *)*i;
  if ( i == this[2] )
    this[2] = v5;
  else
    *(_QWORD *)i[1] = v5;
  v6 = (__int64 *)i[1];
  if ( i == this[3] )
    this[3] = v6;
  else
    *(_QWORD *)(*i + 8) = v6;
  ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::FreeNode(this + 2);
}
