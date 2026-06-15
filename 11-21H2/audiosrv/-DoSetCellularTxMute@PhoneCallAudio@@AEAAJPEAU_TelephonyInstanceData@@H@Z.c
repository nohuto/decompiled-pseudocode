/*
 * XREFs of ?DoSetCellularTxMute@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x18012ECB8
 * Callers:
 *     ?SetMute@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyDataFlow@@H@Z @ 0x18012FEE0 (-SetMute@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyDataFlow@@H@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005A820 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall PhoneCallAudio::DoSetCellularTxMute(
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
    v8 = (*(__int64 (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG, struct _TelephonyInstanceData *, _QWORD))(*(_QWORD *)&DebugInfo->Type + 64LL))(
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
