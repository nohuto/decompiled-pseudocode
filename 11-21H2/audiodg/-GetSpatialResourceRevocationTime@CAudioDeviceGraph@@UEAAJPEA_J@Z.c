/*
 * XREFs of ?GetSpatialResourceRevocationTime@CAudioDeviceGraph@@UEAAJPEA_J@Z @ 0x14005C2B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z @ 0x140015A20 (-GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetSpatialResourceRevocationTime(CAudioDeviceGraph *this, __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  CPipeInstance *v5; // rcx
  unsigned int v6; // ebx
  struct IAdaptiveSpatialAudioRenderer *v8; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v5 = (CPipeInstance *)*((_QWORD *)this + 20);
  v8 = 0LL;
  v9 = v2;
  v6 = -2147467262;
  if ( (int)CPipeInstance::GetAdaptiveSpatialAudioRenderer(v5, &v8) >= 0 )
    v6 = (*(__int64 (__fastcall **)(struct IAdaptiveSpatialAudioRenderer *, __int64 *))(*(_QWORD *)v8 + 64LL))(v8, a2);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v8);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v9);
  return v6;
}
