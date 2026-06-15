/*
 * XREFs of ?ProviderChange@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z @ 0x18012FB40
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005A820 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DoEnableCellularProviderChange@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z @ 0x18012EAE4 (-DoEnableCellularProviderChange@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@W4TelephonyType.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::ProviderChange(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]
  int v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)(a1 + 72));
  if ( !a2 )
  {
    v6 = -2147467261;
    goto LABEL_11;
  }
  if ( a3 > 2 )
    goto LABEL_8;
  v7 = *(_QWORD *)(a1 + 32);
  if ( !v7 )
  {
    v6 = -2147019873;
    goto LABEL_11;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v7 + 112LL))(v7, a2, &v12);
  if ( v6 >= 0 )
  {
    if ( !v12 )
    {
LABEL_8:
      v6 = -2147024809;
      goto LABEL_11;
    }
    v8 = PhoneCallAudio::DoEnableCellularProviderChange((struct _RTL_CRITICAL_SECTION *)(a1 - 8), a2, a3);
    v6 = 0;
    if ( v8 < 0 )
      v6 = v8;
  }
LABEL_11:
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v6;
}
