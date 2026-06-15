/*
 * XREFs of ?GetSpatialResourceRevocationTime@CAudioDeviceGraph@@UEAAJPEA_J@Z @ 0x14005FDC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z @ 0x14001FE20 (-GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetSpatialResourceRevocationTime(CAudioDeviceGraph *this, __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  CPipeInstance *v5; // rcx
  unsigned int v6; // esi
  struct IAdaptiveSpatialAudioRenderer *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v5 = (CPipeInstance *)*((_QWORD *)this + 20);
  v8 = 0LL;
  v6 = -2147467262;
  if ( (int)CPipeInstance::GetAdaptiveSpatialAudioRenderer(v5, &v8) >= 0 )
    v6 = (*(__int64 (__fastcall **)(struct IAdaptiveSpatialAudioRenderer *, __int64 *))(*(_QWORD *)v8 + 64LL))(v8, a2);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v8);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v6;
}
