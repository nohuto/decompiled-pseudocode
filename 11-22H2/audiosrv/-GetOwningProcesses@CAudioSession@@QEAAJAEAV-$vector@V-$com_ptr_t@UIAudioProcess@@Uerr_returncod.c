/*
 * XREFs of ?GetOwningProcesses@CAudioSession@@QEAAJAEAV?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x180047A9C
 * Callers:
 *     ?GetTsSessionId@CAudioSession@@UEAAKXZ @ 0x180047A20 (-GetTsSessionId@CAudioSession@@UEAAKXZ.c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800DCB08 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescripto.c)
 *     ?ForEachOwningProcess@CAudioSession@@UEAAJP6AXPEAUIAudioProcess@@@Z@Z @ 0x1800DF8F0 (-ForEachOwningProcess@CAudioSession@@UEAAJP6AXPEAUIAudioProcess@@@Z@Z.c)
 *     ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManager@@QEAAJPEBG0W4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800E89B8 (-RevokeSessionsWithoutDataFlowAccess@CAudioSessionManager@@QEAAJPEBG0W4AudioServerSessionDisconn.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18000AF74 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@-$vect.c)
 *     ??0?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioProcess@@@Z @ 0x18000B48C (--0-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::GetOwningProcesses(__int64 a1, __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 *v5; // rdi
  __int64 *v6; // r14

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 664);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 664));
  v5 = *(__int64 **)(a1 + 704);
  v6 = *(__int64 **)(a1 + 712);
  while ( v5 != v6 )
  {
    if ( a2[1] == a2[2] )
    {
      std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> const &>(
        a2,
        a2[1],
        v5);
    }
    else
    {
      wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::com_ptr_t<IAudioProcess,wil::err_returncode_policy>(
        (_QWORD *)a2[1],
        *v5);
      a2[1] += 8LL;
    }
    ++v5;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
