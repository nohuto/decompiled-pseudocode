/*
 * XREFs of ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x140004544
 * Callers:
 *     ??1CAudioDeviceGraph@@QEAA@XZ @ 0x140004424 (--1CAudioDeviceGraph@@QEAA@XZ.c)
 * Callees:
 *     ?FreeNode@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14000460C (-FreeNode@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@AEAAXPE.c)
 *     ??1CPipeInstance@@QEAA@XZ @ 0x14000A92C (--1CPipeInstance@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@QEAAXXZ @ 0x14005AF8C (-RemoveAll@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioDeviceGraph::Cleanup(CAudioDeviceGraph *this)
{
  _QWORD *v2; // rbx
  char *v3; // rbx
  __int64 *v4; // rdx
  CPipeInstance *v5; // rdi
  __int64 v6; // rax
  char *v7; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)this + 112LL))(this);
  v2 = (_QWORD *)*((_QWORD *)this + 15);
  if ( v2 )
  {
    *v2 = &CProtectedOutputController::`vftable';
    ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll(v2 + 2);
    operator delete(v2);
  }
  *((_QWORD *)this + 15) = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  v7 = (char *)this + 216;
  v3 = (char *)this + 168;
  while ( *((_QWORD *)v3 + 2) )
  {
    v4 = *(__int64 **)v3;
    if ( !*(_QWORD *)v3 )
      ATL::AtlThrowImpl(-2147467259);
    v5 = (CPipeInstance *)v4[2];
    v6 = *v4;
    *(_QWORD *)v3 = *v4;
    if ( v6 )
      *(_QWORD *)(v6 + 8) = 0LL;
    else
      *((_QWORD *)v3 + 1) = 0LL;
    ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::FreeNode(v3);
    if ( v5 )
    {
      CPipeInstance::~CPipeInstance(v5);
      operator delete(v5);
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v7);
}
