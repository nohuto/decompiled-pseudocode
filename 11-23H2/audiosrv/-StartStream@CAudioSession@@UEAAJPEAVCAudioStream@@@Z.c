/*
 * XREFs of ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180045860
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x180017250 (--0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEB.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x180017510 (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18002625C (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Start@CAudioStream@@QEAAJXZ @ 0x1800459E4 (-Start@CAudioStream@@QEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180045A40 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCritic.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_qd @ 0x1800E4064 (WPP_SF_qd.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::StartStream(CAudioSession *this, struct CAudioStream *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  struct CAudioStream **i; // rax
  CAudioStream *v6; // rsi
  int updated; // eax
  void (__fastcall ***v8)(_QWORD, void **); // rax
  unsigned int v9; // edi
  _BYTE v11[40]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+60h] [rbp+8h] BYREF
  CAudioStream *v14; // [rsp+70h] [rbp+18h] BYREF

  v14 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v13 = v4;
  for ( i = (struct CAudioStream **)*((_QWORD *)this + 14); i != *((struct CAudioStream ***)this + 15) && *i != a2; ++i )
    ;
  if ( i == *((struct CAudioStream ***)this + 15) )
  {
    v9 = -2004287484;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAC0,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x88890004LL);
    if ( v4 )
      LeaveCriticalSection(v4);
  }
  else
  {
    v6 = *i;
    v14 = v6;
    if ( v6 )
      (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)v6 + 8LL))(v6);
    CAudioStream::Start(v6);
    updated = CAudioStream::UpdateStreamPriority(v6);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xAC5,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)updated);
    if ( ++*((_DWORD *)this + 50) == 1 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 45LL, &WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids, this, 1);
      }
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
        &v13,
        0LL);
      (*(void (__fastcall **)(CAudioSession *, __int64))(*(_QWORD *)this + 56LL))(this, 1LL);
      v4 = v13;
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v8 = (void (__fastcall ***)(_QWORD, void **))CAudioStreamStateChanged::CAudioStreamStateChanged(
                                                   (__int64)v11,
                                                   (__int64)this,
                                                   0,
                                                   1u,
                                                   (__int64)v6,
                                                   (__int64)L"CAudioSession::StartStream");
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 432), v8);
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
    v9 = 0;
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v14);
  return v9;
}
