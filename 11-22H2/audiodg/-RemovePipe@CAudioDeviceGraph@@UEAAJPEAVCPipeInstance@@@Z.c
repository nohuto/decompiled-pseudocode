/*
 * XREFs of ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14005FF40
 * Callers:
 *     <none>
 * Callees:
 *     ?SetHandle@CConnectionInstance@@QEAAJ_K@Z @ 0x140008824 (-SetHandle@CConnectionInstance@@QEAAJ_K@Z.c)
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x14000D290 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 *     ?GetNext@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@AEAPEAU__POSITION@@@Z @ 0x140011684 (-GetNext@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012E70 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14001FCC4 (-RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::RemovePipe(CPipeInstance **this, struct IUnknown **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v5; // rcx
  struct IUnknown *v6; // rax
  CConnectionInstance **Next; // rax
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown *v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(this + 31);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 31));
  CAudioDeviceGraph::RegisterSpatialPipe(this - 2, (struct CPipeInstance *)a2, 0);
  CPipeInstance::DeactivateAPOsAndRemoveConnections((CPipeInstance *)a2);
  v6 = a2[31];
  v12 = v6;
  while ( v6 )
  {
    Next = (CConnectionInstance **)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetNext(
                                     v5,
                                     (_QWORD **)&v12);
    v8 = CConnectionInstance::SetHandle(*Next, *((_QWORD *)*Next + 8));
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5CE,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v8);
      if ( v2 )
        LeaveCriticalSection(v2);
      return v9;
    }
    v6 = v12;
  }
  if ( a2[19] )
    ATL::AtlComPtrAssign(a2 + 19, 0LL);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
