/*
 * XREFs of ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180009F40
 * Callers:
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180009CA0 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x1800DF0D0 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAudioStream@@@Z @ 0x18000A210 (--0-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAudioStream@@@Z.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x18000A24C (--$_Emplace_reallocate@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V.c)
 *     ?SetWindowId@CAudioStream@@QEAAXI@Z @ 0x18000B7E8 (-SetWindowId@CAudioStream@@QEAAXI@Z.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x180017510 (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180017654 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18002625C (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioSession::AddStream(CAudioSession *this, struct CAudioStream *a2)
{
  __int64 *v4; // rdx
  __int64 v5; // rax
  char *v6; // r15
  void (__fastcall *v7)(char *, __int64 *); // rbx
  int updated; // eax
  void *v9; // rdx
  const char *v10; // r9
  __int64 result; // rax
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v14; // [rsp+80h] [rbp+18h] BYREF
  __int64 v15; // [rsp+88h] [rbp+20h] BYREF

  try
  {
    (*(void (**)(void))(*(_QWORD *)g_PolicyManager + 184LL))();
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
    wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>::com_ptr_t<CAudioStream,wil::err_returncode_policy>(
      &v15,
      a2);
    v4 = (__int64 *)*((_QWORD *)this + 15);
    if ( v4 == *((__int64 **)this + 16) )
    {
      std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>(
        (char *)this + 112,
        v4,
        &v15);
    }
    else
    {
      v5 = v15;
      v15 = 0LL;
      *v4 = v5;
      *((_QWORD *)this + 15) += 8LL;
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v15);
    v14 = 0LL;
    v6 = (char *)a2 + 8;
    v7 = *(void (__fastcall **)(char *, __int64 *))(*((_QWORD *)a2 + 1) + 24LL);
    wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v14);
    v7((char *)a2 + 8, &v14);
    if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 96LL))(v14) && *((_DWORD *)a2 + 106) == 3 )
      *((_DWORD *)this + 102) = 1;
    if ( g_DuckingManager
      && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 96LL))(v14)
      && *((_DWORD *)this + 102)
      && (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)v6 + 56LL))((char *)a2 + 8) != 2 )
    {
      *((_DWORD *)a2 + 106) = 3;
    }
    if ( !(*(unsigned int (__fastcall **)(char *))(*(_QWORD *)v6 + 56LL))((char *)a2 + 8)
      && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v14 + 352LL))(v14) )
    {
      *((_DWORD *)a2 + 106) = 19;
    }
    ++*((_DWORD *)this + 26);
    updated = CAudioStream::UpdateStreamPriority(a2);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA6A,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)updated);
    CAudioStream::SetWindowId(a2, *((_DWORD *)this + 52));
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v14);
    if ( this != (CAudioSession *)-64LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 432));
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
    wil::details::SetEvent(*((wil::details **)a2 + 51), v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA84,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                           v10);
  }
  return result;
}
