/*
 * XREFs of ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x14005F008
 * Callers:
 *     ??1CAudioDeviceGraph@@QEAA@XZ @ 0x14005EBA0 (--1CAudioDeviceGraph@@QEAA@XZ.c)
 * Callees:
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x140006804 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B99C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x140055DAC (-FreeNode@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@AEAAXPE.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@QEAAXXZ @ 0x140055DD4 (-RemoveAll@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioDeviceGraph::Cleanup(__int64 **this)
{
  __int64 *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 *v4; // rbx
  __int64 *v5; // rdx
  CPipeInstance *v6; // rsi
  __int64 v7; // rax

  ((void (__fastcall *)(__int64 **))(*this)[14])(this);
  v2 = this[15];
  if ( v2 )
  {
    *v2 = (__int64)&CProtectedOutputController::`vftable';
    ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll(v2 + 2);
    operator delete(v2);
  }
  this[15] = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)(this + 27);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 27));
  v4 = (__int64 *)(this + 21);
  while ( v4[2] )
  {
    v5 = (__int64 *)*v4;
    if ( !*v4 )
      ATL::AtlThrowImpl(-2147467259);
    v6 = (CPipeInstance *)v5[2];
    v7 = *v5;
    *v4 = *v5;
    if ( v7 )
      *(_QWORD *)(v7 + 8) = 0LL;
    else
      v4[1] = 0LL;
    ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::FreeNode((__int64)v4, v5);
    if ( v6 )
      CPipeInstance::`scalar deleting destructor'(v6);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
}
