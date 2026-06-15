/*
 * XREFs of ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140008030
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x14000AE50 (-GetLatency@CPipeInstance@@QEBAJPEA_J@Z.c)
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x140011338 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012E70 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14001FCC4 (-RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::AddPipe(CAudioDeviceGraph *this, struct IUnknown **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  struct IUnknown *v5; // rdx
  int v6; // esi
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  v5 = (struct IUnknown *)*((_QWORD *)this + 16);
  if ( a2[19] )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A9,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x887C002ELL,
      v9);
    if ( v2 )
      LeaveCriticalSection(v2);
    return 2289827886LL;
  }
  else
  {
    if ( v5 )
      ATL::AtlComPtrAssign(a2 + 19, v5);
    v6 = CPipeInstance::AddConnectionsAndActivateAPOs(
           (CPipeInstance *)a2,
           *((struct Windows::Media::Devices::IAudioDeviceModulesManager **)this + 45));
    if ( v6 < 0 )
    {
      v8 = 1450LL;
    }
    else
    {
      v6 = CAudioDeviceGraph::RegisterSpatialPipe(
             (CAudioDeviceGraph *)((char *)this - 16),
             (struct CPipeInstance *)a2,
             1);
      if ( v6 >= 0 )
      {
        CPipeInstance::GetLatency((CPipeInstance *)a2, &v11);
        if ( *((_DWORD *)a2 + 28) == 2 && ++*((_QWORD *)this + 48) == 2LL && *((_DWORD *)this + 73) == 3 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 88LL))(*((_QWORD *)this + 17));
        if ( v2 )
          LeaveCriticalSection(v2);
        return 0LL;
      }
      v8 = 1451LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v6,
      v9);
    if ( v2 )
      LeaveCriticalSection(v2);
    return (unsigned int)v6;
  }
}
