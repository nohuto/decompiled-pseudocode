/*
 * XREFs of ?FinalUnregisterForDevice@CpuManager@@EEAAXPEAURegistrationData@DeviceRegistrations@1@@Z @ 0x1400532D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CpuManager::FinalUnregisterForDevice(
        CpuManager *this,
        struct CpuManager::DeviceRegistrations::RegistrationData *a2)
{
  __int64 v3; // rcx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  (***(void (__fastcall ****)(_QWORD, GUID *, __int64 *))a2)(
    *(_QWORD *)a2,
    &GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63,
    &v4);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 56LL))(v4, 0LL, 0LL);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 16LL))(*(_QWORD *)a2);
  *(_QWORD *)a2 = 0LL;
  v3 = v4;
  if ( v4 )
  {
    v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
