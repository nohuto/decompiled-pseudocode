/*
 * XREFs of ?UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x18002A8C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Lock@CApplicationManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18000E200 (-Lock@CApplicationManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_C.c)
 *     ?UnregisterSession@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x180022BA8 (-UnregisterSession@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?UnregisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x18002F660 (-UnregisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 */

__int64 __fastcall CProcess::UnregisterSession(CProcess *this, struct IAudioSessionInfo *a2)
{
  unsigned int v2; // edi
  CWindowsPolicyManager *v5; // rbx
  CApplicationManager *v6; // rcx
  CDuckingManager *v7; // rcx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 )
  {
    v5 = g_PolicyManager;
    CApplicationManager::Lock((__int64)this, &v9);
    CApplicationManager::UnregisterSession(v6, this, a2);
    v7 = (CDuckingManager *)*((_QWORD *)v5 + 5);
    if ( v7 )
      CDuckingManager::UnregisterSession(v7, a2);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v9);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v2;
}
