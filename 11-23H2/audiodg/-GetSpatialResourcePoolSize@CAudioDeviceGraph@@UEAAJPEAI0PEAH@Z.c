/*
 * XREFs of ?GetSpatialResourcePoolSize@CAudioDeviceGraph@@UEAAJPEAI0PEAH@Z @ 0x14005FCA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z @ 0x14001FE20 (-GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetSpatialResourcePoolSize(
        CAudioDeviceGraph *this,
        unsigned int *a2,
        unsigned int *a3,
        int *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  CPipeInstance *v9; // rcx
  unsigned int v10; // esi
  struct IAdaptiveSpatialAudioRenderer *v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v9 = (CPipeInstance *)*((_QWORD *)this + 20);
  v12 = 0LL;
  v10 = -2147467262;
  if ( (int)CPipeInstance::GetAdaptiveSpatialAudioRenderer(v9, &v12) >= 0 )
    v10 = (*(__int64 (__fastcall **)(struct IAdaptiveSpatialAudioRenderer *, unsigned int *, unsigned int *, int *))(*(_QWORD *)v12 + 56LL))(
            v12,
            a2,
            a3,
            a4);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v12);
  if ( v4 )
    LeaveCriticalSection(v4);
  return v10;
}
