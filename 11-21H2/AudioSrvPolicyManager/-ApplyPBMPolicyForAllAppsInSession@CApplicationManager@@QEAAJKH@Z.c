/*
 * XREFs of ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18001F3D0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_79b73afe7db2dfcf709f8c57ef23a87a__void_::_Do_call @ 0x18000DEE0 (std--_Func_impl_no_alloc__lambda_79b73afe7db2dfcf709f8c57ef23a87a__void_--_Do_call.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180020BE8 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?UpdateModernStandbyAudioState@CApplicationManager@@QEAAJK@Z @ 0x18002531C (-UpdateModernStandbyAudioState@CApplicationManager@@QEAAJK@Z.c)
 *     std::_Func_impl_no_alloc__lambda_62cd855da9b9fa3df701769829143d73__void_::_Do_call @ 0x180030F70 (std--_Func_impl_no_alloc__lambda_62cd855da9b9fa3df701769829143d73__void_--_Do_call.c)
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180031D70 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180032264 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18001F2CC (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::ApplyPBMPolicyForAllAppsInSession(CApplicationManager *this, int a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  _QWORD *v7; // rdi
  struct CApplication *v8; // rdx

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v7 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v7 )
  {
    v8 = (struct CApplication *)v7[2];
    v7 = (_QWORD *)*v7;
    if ( *((_DWORD *)v8 + 53) == a2 )
      CApplicationManager::ApplyPBMPolicy(this, v8, 0xD1u, a3);
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
