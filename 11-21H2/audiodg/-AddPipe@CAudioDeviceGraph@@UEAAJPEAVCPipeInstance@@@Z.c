/*
 * XREFs of ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400192A0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14001575C (-RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x140018B80 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x140019B28 (-GetLatency@CPipeInstance@@QEBAJPEA_J@Z.c)
 *     ??4?$CComPtr@UIAudioProcessor@@@ATL@@QEAAPEAUIAudioProcessor@@PEAU2@@Z @ 0x14001B610 (--4-$CComPtr@UIAudioProcessor@@@ATL@@QEAAPEAUIAudioProcessor@@PEAU2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioDeviceGraph::AddPipe(CAudioDeviceGraph *this, struct CPipeInstance *a2)
{
  char *v2; // rbx
  unsigned int v5; // esi
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char *v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v2 = (char *)this + 248;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  v14 = v2;
  v5 = 0;
  if ( *((_QWORD *)a2 + 19) )
  {
    v7 = -2005139410;
    v11 = 1384LL;
    v10 = 2289827886LL;
    goto LABEL_13;
  }
  ATL::CComPtr<IAudioProcessor>::operator=((char *)a2 + 152, *((_QWORD *)this + 16));
  v6 = CPipeInstance::AddConnectionsAndActivateAPOs(
         a2,
         *((struct Windows::Media::Devices::IAudioDeviceModulesManager **)this + 46));
  v7 = v6;
  if ( v6 < 0 )
  {
    v10 = (unsigned int)v6;
    v11 = 1385LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)v10,
      v12);
    v5 = v7;
    goto LABEL_5;
  }
  v8 = CAudioDeviceGraph::RegisterSpatialPipe((CPipeInstance **)this - 2, a2, 1);
  v7 = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 1386LL;
    goto LABEL_13;
  }
  CPipeInstance::GetLatency(a2, &v15);
  if ( *((_DWORD *)a2 + 28) == 2 && ++*((_QWORD *)this + 49) == 2LL && *((_DWORD *)this + 74) == 3 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 88LL))(*((_QWORD *)this + 17));
LABEL_5:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v14);
  return v5;
}
