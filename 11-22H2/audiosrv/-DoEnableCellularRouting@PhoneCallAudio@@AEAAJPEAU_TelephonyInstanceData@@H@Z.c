/*
 * XREFs of ?DoEnableCellularRouting@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x18013C1E0
 * Callers:
 *     ?SetCallState@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyState@@@Z @ 0x18013D200 (-SetCallState@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyState@@@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180014E70 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall PhoneCallAudio::DoEnableCellularRouting(
        struct _RTL_CRITICAL_SECTION *this,
        struct _TelephonyInstanceData *a2,
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
    this + 2);
  DebugInfo = this[1].DebugInfo;
  if ( DebugInfo )
  {
    v8 = (*(__int64 (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG, struct _TelephonyInstanceData *, _QWORD))(*(_QWORD *)&DebugInfo->Type + 88LL))(
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
