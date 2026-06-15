/*
 * XREFs of ?CurrentVolumeLevel@VolumeHardwareLogger@@AEAA?AUVolumeLevel@1@XZ @ 0x180044FB8
 * Callers:
 *     ?Initialize@VolumeHardwareLogger@@QEAAXPEAVCVolumeHardware@@@Z @ 0x180044EF4 (-Initialize@VolumeHardwareLogger@@QEAAXPEAVCVolumeHardware@@@Z.c)
 *     ?HardwareInitiatedChange@VolumeHardwareLogger@@QEAAXXZ @ 0x1800CC250 (-HardwareInitiatedChange@VolumeHardwareLogger@@QEAAXXZ.c)
 *     ?LogBurst@VolumeHardwareLogger@@QEAAXXZ @ 0x1800CD008 (-LogBurst@VolumeHardwareLogger@@QEAAXXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
float *__fastcall VolumeHardwareLogger::CurrentVolumeLevel(__int64 a1, float *a2)
{
  __int64 v4; // rcx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0.0;
  a2[1] = 0.0;
  a2[2] = 0.0;
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  v6 = (struct _RTL_CRITICAL_SECTION *)a1;
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 && *(float *)(a1 + 80) != 0.0 )
  {
    (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v4 + 104LL))(v4, a2);
    (*(void (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(a1 + 64) + 112LL))(*(_QWORD *)(a1 + 64), (_DWORD *)a2 + 1);
    *((_DWORD *)a2 + 2) = (int)(float)((float)((float)(*a2 - *(float *)(a1 + 72)) / *(float *)(a1 + 80)) + 0.5);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v6);
  return a2;
}
