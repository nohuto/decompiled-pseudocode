/*
 * XREFs of ?DoEnableCellularProviderChange@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z @ 0x18012EAE4
 * Callers:
 *     ?ProviderChange@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z @ 0x18012FB40 (-ProviderChange@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005A820 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::DoEnableCellularProviderChange(
        struct _RTL_CRITICAL_SECTION *a1,
        __int64 a2,
        unsigned int a3)
{
  unsigned int v6; // edi
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  int v8; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  v6 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    a1 + 2);
  DebugInfo = a1[1].DebugInfo;
  if ( DebugInfo )
  {
    v8 = (*(__int64 (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG, __int64, _QWORD))(*(_QWORD *)&DebugInfo->Type + 104LL))(
           DebugInfo,
           a2,
           a3);
    if ( v8 < 0 )
      v6 = v8;
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
