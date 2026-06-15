/*
 * XREFs of ?MatchesParameters@CAudioSession@@QEAAH_NPEBG1@Z @ 0x1800E1438
 * Callers:
 *     ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManager@@QEAAJPEBG0W4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800E89B8 (-RevokeSessionsWithoutDataFlowAccess@CAudioSessionManager@@QEAAJPEBG0W4AudioServerSessionDisconn.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x18000C918 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::MatchesParameters(
        CAudioSession *this,
        __int64 a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  __int64 *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rbx
  const WCHAR *v11; // rax
  const WCHAR *v12; // rax
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0LL;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 664);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 664));
  v8 = (__int64 *)*((_QWORD *)this + 88);
  if ( *((_QWORD *)this + 89) - (_QWORD)v8 >= 8uLL && (v9 = *v8) != 0 )
  {
    wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=(&v14, v9);
    if ( v7 )
      LeaveCriticalSection(v7);
    v10 = v14;
    if ( !a3
      || (v11 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 64LL))(v14)) != 0LL
      && CompareStringOrdinal(a3, -1, v11, -1, 1) == 2 )
    {
      if ( !a4
        || (v12 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 56LL))(v10),
            CompareStringOrdinal(a4, -1, v12, -1, 1) == 2) )
      {
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v14);
        return 1LL;
      }
    }
  }
  else if ( v7 )
  {
    LeaveCriticalSection(v7);
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v14);
  return 0LL;
}
