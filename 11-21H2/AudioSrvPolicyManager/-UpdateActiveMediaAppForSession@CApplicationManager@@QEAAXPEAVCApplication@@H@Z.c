/*
 * XREFs of ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x180024F20
 * Callers:
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180019180 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180020BE8 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180021714 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_862e17b5ba5aad8032b797f753f777db__void_::_Do_call @ 0x1800282C0 (std--_Func_impl_no_alloc__lambda_862e17b5ba5aad8032b797f753f777db__void_--_Do_call.c)
 * Callees:
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z @ 0x180018048 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800182B0 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18002E110 (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18002F6C0 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CApplicationManager::UpdateActiveMediaAppForSession(
        CApplicationManager *this,
        struct CApplication *a2,
        int a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbp
  DWORD v6; // r12d
  int v7; // edi
  BOOL v8; // r15d
  int v9; // r14d
  _QWORD *v10; // rcx
  __int64 v11; // rdx

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v6 = *((_DWORD *)a2 + 53);
  v7 = 1;
  v8 = (unsigned int)CApplication::HasSmtcSubscription((__int64)a2, 0) && *((_DWORD *)a2 + 52)
    || (unsigned int)CApplication::HasSmtcSubscription((__int64)a2, 1)
    && (unsigned int)CApplication::IsBackgroundAudioCapable(a2);
  if ( !a3 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
    v9 = 0;
    v10 = (_QWORD *)*((_QWORD *)a2 + 9);
    while ( v10 )
    {
      v11 = v10[2];
      v10 = (_QWORD *)*v10;
      if ( !*(_DWORD *)(v11 + 416) && *(_DWORD *)(v11 + 488) )
      {
        v9 = 1;
        break;
      }
    }
    if ( a2 != (struct CApplication *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
    if ( !v9 )
      v7 = 0;
  }
  if ( !v8 || v7 )
    TsSessionIdRemoveActiveMediaApp(v6, a2);
  else
    TsSessionIdAddActiveMediaApp(v6, a2);
  if ( v5 )
    LeaveCriticalSection(v5);
}
