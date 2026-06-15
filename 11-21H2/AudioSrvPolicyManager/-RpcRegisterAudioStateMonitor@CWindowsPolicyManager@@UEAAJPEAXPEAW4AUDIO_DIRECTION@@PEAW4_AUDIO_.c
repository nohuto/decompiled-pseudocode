/*
 * XREFs of ?RpcRegisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x18000C700
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18000A580 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x18000C630 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::RpcRegisterAudioStateMonitor(
        CWindowsPolicyManager *this,
        void *a2,
        enum AUDIO_DIRECTION *a3,
        enum _AUDIO_STREAM_CATEGORY *a4,
        const unsigned __int16 *a5,
        unsigned __int64 *a6)
{
  int Process; // eax
  unsigned int v11; // ebx
  struct IAudioProcess *v13; // rbx
  int v14; // eax
  unsigned int v15; // edi
  struct IAudioProcess *v16; // [rsp+30h] [rbp-18h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  CWindowsPolicyManager::Lock((__int64)this, lpCriticalSection);
  v16 = 0LL;
  Process = CWindowsPolicyManager::RpcGetProcess(this, a2, &v16);
  v11 = Process;
  if ( Process >= 0 )
  {
    v13 = v16;
    v14 = (*(__int64 (__fastcall **)(struct IAudioProcess *, enum AUDIO_DIRECTION *, enum _AUDIO_STREAM_CATEGORY *, const unsigned __int16 *, unsigned __int64 *))(*(_QWORD *)v16 + 416LL))(
            v16,
            a3,
            a4,
            a5,
            a6);
    v15 = v14;
    if ( v14 >= 0 )
    {
      (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v13 + 16LL))(v13);
      if ( lpCriticalSection[0] )
        LeaveCriticalSection(lpCriticalSection[0]);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x336,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
        (const char *)(unsigned int)v14);
      (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v13 + 16LL))(v13);
      if ( lpCriticalSection[0] )
        LeaveCriticalSection(lpCriticalSection[0]);
      return v15;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x335,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)Process);
    if ( v16 )
      (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v16 + 16LL))(v16);
    if ( lpCriticalSection[0] )
      LeaveCriticalSection(lpCriticalSection[0]);
    return v11;
  }
}
