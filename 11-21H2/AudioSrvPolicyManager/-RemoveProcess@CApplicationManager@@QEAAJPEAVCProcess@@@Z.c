/*
 * XREFs of ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180022440
 * Callers:
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180024E94 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800095B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BCA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x1800163A4 (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180018D28 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?RemoveAt@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18001A840 (-RemoveAt@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAXPEAU__POSITI.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::RemoveProcess(CApplicationManager *this, struct CProcess *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r15
  __int64 **v5; // r12
  __int64 i; // rbx
  RTL_SRWLOCK *v7; // r14

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v5 = (__int64 **)((char *)this + 128);
  for ( i = *((_QWORD *)this + 16); i; i = *(_QWORD *)i )
  {
    if ( *(struct CProcess **)(i + 16) == a2 )
    {
      v7 = (RTL_SRWLOCK *)((char *)this + 120);
      AcquireSRWLockExclusive(v7);
      ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::RemoveAt(v5, (__int64 *)i);
      if ( v7 )
        ReleaseSRWLockExclusive(v7);
      if ( a2 )
      {
        CProcess::CleanupProcessTerminationWatcher(a2, 0);
        CProcess::NotifyPLM((__int64)a2, 1);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)a2);
      }
      break;
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
