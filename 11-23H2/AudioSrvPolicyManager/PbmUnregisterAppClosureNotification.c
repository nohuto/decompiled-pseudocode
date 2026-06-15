/*
 * XREFs of PbmUnregisterAppClosureNotification @ 0x180031C30
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800033A0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000A0E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18002F5DC (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 */

__int64 __fastcall PbmUnregisterAppClosureNotification(void *a1)
{
  int Process; // ebp
  CApplicationManager *v2; // rsi
  struct CProcess *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  struct CProcess *v6; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+50h] [rbp+18h] BYREF

  Process = 0;
  v6 = 0LL;
  if ( g_ApplicationManager )
  {
    Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v6);
    if ( Process >= 0 )
    {
      v2 = g_ApplicationManager;
      v3 = v6;
      v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
      *((_DWORD *)v3 + 114) = 0;
      v7 = v4;
      CApplicationManager::Unregister(v2, v3);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v7);
      *((_DWORD *)v6 + 114) = 0;
    }
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v6);
  }
  return (unsigned int)Process;
}
