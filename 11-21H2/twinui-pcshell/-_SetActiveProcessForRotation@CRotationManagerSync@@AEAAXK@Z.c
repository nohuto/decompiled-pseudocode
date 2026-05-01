/*
 * XREFs of ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x180069D64
 * Callers:
 *     ?_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@@@Z @ 0x1800584B4 (-_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@.c)
 *     ?SetLogicalForegroundProcess@CRotationManagerSync@@UEAAXPEAUHWND__@@W4WindowType@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180069C30 (-SetLogicalForegroundProcess@CRotationManagerSync@@UEAAXPEAUHWND__@@W4WindowType@@PEAUIImmersive.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_fdd7dd8b55d2d1fe60d2e8a8836eb722___1_long_::Invoke @ 0x1802F1520 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802F1520.c)
 *     ?LockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x1802F1570 (-LockAutoRotation@CRotationManagerSync@@UEAAJXZ.c)
 *     ?UnlockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x1802F17B0 (-UnlockAutoRotation@CRotationManagerSync@@UEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18006B42C (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CRotationManagerSync::_SetActiveProcessForRotation(
        CRotationManagerSync *this,
        unsigned int a2,
        __int64 a3)
{
  __int64 v4; // r8
  _BYTE v5[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 128) )
  {
    *((_DWORD *)this + 33) = a2;
  }
  else
  {
    if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &MICROSOFT_TWINUI_PUBLISHER_Context,
        &ImmersiveShell_AppManager_SetActiveProcess_Start,
        a3,
        1LL,
        v5);
    (*(void (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[16].Ptr + 32LL))(
      CApplicationManagerUtility::g_pIAMGlobals[16].Ptr,
      a2);
    if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &MICROSOFT_TWINUI_PUBLISHER_Context,
        &ImmersiveShell_AppManager_SetActiveProcess_Stop,
        v4,
        1LL,
        v5);
  }
}
