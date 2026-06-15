/*
 * XREFs of ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14001C290
 * Callers:
 *     <none>
 * Callees:
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x14000AA20 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 *     ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14001575C (-RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??4?$CComPtr@UIAudioProcessor@@@ATL@@QEAAPEAUIAudioProcessor@@PEAU2@@Z @ 0x14001B610 (--4-$CComPtr@UIAudioProcessor@@@ATL@@QEAAPEAUIAudioProcessor@@PEAU2@@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@AEAPEAU__POSITION@@@Z @ 0x14002BD58 (-GetNext@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 */

__int64 __fastcall CAudioDeviceGraph::RemovePipe(CPipeInstance **this, struct CPipeInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(this + 31);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 31));
  v9 = v2;
  CAudioDeviceGraph::RegisterSpatialPipe(this - 2, a2, 0);
  CPipeInstance::DeactivateAPOsAndRemoveConnections((struct IAudioProcessor **)a2);
  v6 = *((_QWORD *)a2 + 31);
  v8 = v6;
  while ( v6 )
  {
    v5 = *(_QWORD *)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetNext(v5, &v8);
    v6 = v8;
    *(_QWORD *)(v5 + 8) = -1LL;
  }
  ATL::CComPtr<IAudioProcessor>::operator=((__int64 *)a2 + 19, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v9);
  return 0LL;
}
