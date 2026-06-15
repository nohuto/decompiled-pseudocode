/*
 * XREFs of ?RpcUnregisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEA_K@Z @ 0x18000CC50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18000A580 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x18000C630 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::RpcUnregisterAudioStateMonitor(
        CWindowsPolicyManager *this,
        void *a2,
        unsigned __int64 *a3)
{
  int Process; // eax
  unsigned int v7; // ebx
  struct IAudioProcess *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  LPCRITICAL_SECTION lpCriticalSection[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IAudioProcess *v14; // [rsp+58h] [rbp+20h] BYREF

  CWindowsPolicyManager::Lock((__int64)this, lpCriticalSection);
  v14 = 0LL;
  Process = CWindowsPolicyManager::RpcGetProcess(this, a2, &v14);
  v7 = Process;
  if ( Process >= 0 )
  {
    v9 = v14;
    v10 = (*(__int64 (__fastcall **)(struct IAudioProcess *, unsigned __int64 *))(*(_QWORD *)v14 + 424LL))(v14, a3);
    v11 = v10;
    if ( v10 >= 0 )
    {
      (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v9 + 16LL))(v9);
      if ( lpCriticalSection[0] )
        LeaveCriticalSection(lpCriticalSection[0]);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x341,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
        (const char *)(unsigned int)v10);
      (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v9 + 16LL))(v9);
      if ( lpCriticalSection[0] )
        LeaveCriticalSection(lpCriticalSection[0]);
      return v11;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x340,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)Process);
    if ( v14 )
      (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v14 + 16LL))(v14);
    if ( lpCriticalSection[0] )
      LeaveCriticalSection(lpCriticalSection[0]);
    return v7;
  }
}
