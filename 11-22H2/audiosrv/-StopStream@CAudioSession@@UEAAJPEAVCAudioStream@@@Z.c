/*
 * XREFs of ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180016DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x180017250 (--0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEB.c)
 *     ?Stop@CAudioStream@@QEAAJXZ @ 0x1800172D8 (-Stop@CAudioStream@@QEAAJXZ.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x180017510 (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18002625C (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800DDCF8 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800DDE94 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::StopStream(CAudioSession *this, struct CAudioStream *a2)
{
  CAudioStream *v4; // rbx
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  struct CAudioStream **i; // rax
  bool v7; // zf
  int updated; // eax
  struct CAudioStream **v10; // rcx
  struct CAudioStream **j; // rax
  CAudioStream *v12; // rbx
  int v13; // eax
  _BYTE v14[32]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  CAudioStream *v16; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0LL;
  v16 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  for ( i = (struct CAudioStream **)*((_QWORD *)this + 14); i != *((struct CAudioStream ***)this + 15) && *i != a2; ++i )
    ;
  if ( i != *((struct CAudioStream ***)this + 15) )
  {
    v4 = *i;
    v16 = v4;
    if ( v4 )
      (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)v4 + 8LL))(v4);
    CAudioStream::Stop(v4);
    v7 = (*((_DWORD *)this + 50))-- == 1;
    if ( v7 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 46LL, &WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids, 0LL);
      }
      (*(void (__fastcall **)(CAudioSession *, _QWORD))(*(_QWORD *)this + 56LL))(this, 0LL);
    }
    updated = CAudioStream::UpdateStreamPriority(v4);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB0C,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)updated);
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  if ( v4 )
  {
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    CAudioStreamStateChanged::CAudioStreamStateChanged(v14, this, 1LL);
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 432));
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 47LL, &WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids);
    }
    v10 = (struct CAudioStream **)*((_QWORD *)this + 23);
    for ( j = (struct CAudioStream **)*((_QWORD *)this + 22); j != v10 && *j != a2; ++j )
      ;
    if ( j != v10 )
    {
      v12 = *j;
      v16 = v12;
      if ( v12 )
        (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)v12 + 8LL))(v12);
      CAudioStream::Stop(v12);
      v7 = (*((_DWORD *)this + 50))-- == 1;
      if ( v7 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 48LL, &WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids, 0LL);
        }
        (*(void (__fastcall **)(CAudioSession *, _QWORD))(*(_QWORD *)this + 56LL))(this, 0LL);
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
        CAudioStreamStateChanged::CAudioStreamStateChanged(v14, this, 1LL);
        CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 432));
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
      }
      v13 = CAudioStream::UpdateStreamPriority(v12);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB4D,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
          (const char *)(unsigned int)v13);
    }
    if ( this != (CAudioSession *)-136LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v16);
  return 0LL;
}
