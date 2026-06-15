/*
 * XREFs of ?Initialize@VolumeHardwareLogger@@QEAAXPEAVCVolumeHardware@@@Z @ 0x180044EF4
 * Callers:
 *     ?Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180044E0C (-Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?CurrentVolumeLevel@VolumeHardwareLogger@@AEAA?AUVolumeLevel@1@XZ @ 0x180044FB8 (-CurrentVolumeLevel@VolumeHardwareLogger@@AEAA-AUVolumeLevel@1@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VolumeHardwareLogger::Initialize(char *pv, struct CVolumeHardware *a2)
{
  __int64 v4; // rax
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+50h] [rbp+8h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)pv);
  v6 = (struct _RTL_CRITICAL_SECTION *)pv;
  *((_QWORD *)pv + 8) = a2;
  QueryPerformanceFrequency((LARGE_INTEGER *)pv + 5);
  *((_QWORD *)pv + 6) = CreateThreadpoolTimer(VolumeHardwareLogger::TimerCallback, pv, 0LL);
  if ( a2 )
    (*(void (__fastcall **)(struct CVolumeHardware *, __int64, char *, char *, char *))(*(_QWORD *)a2 + 152LL))(
      a2,
      0xFFFFFFFFLL,
      pv + 72,
      pv + 76,
      pv + 80);
  v4 = VolumeHardwareLogger::CurrentVolumeLevel(pv, v5);
  *((_QWORD *)pv + 11) = *(_QWORD *)v4;
  LODWORD(v4) = *(_DWORD *)(v4 + 8);
  *((_DWORD *)pv + 24) = v4;
  *((_DWORD *)pv + 21) = v4;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v6);
}
