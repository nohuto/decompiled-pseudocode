/*
 * XREFs of ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x1800D72F4
 * Callers:
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800D6EF0 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x1800D7520 (-DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x180015D90 (-RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180020030 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18005D138 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Assign_range@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@0Uforward_iterator_tag@1@@Z @ 0x1800D53BC (--$_Assign_range@PEAV-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$c.c)
 *     ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x1800D5FB0 (--0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEB.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18015BDB0 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSession::DisconnectStreamList(CAudioSession *this)
{
  __int64 v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  const char *v4; // r9
  __int64 *i; // rbx
  __int64 v6; // rax
  void (__fastcall ***v7)(_QWORD, unsigned __int64 *); // rax
  __int64 result; // rax
  __int128 v9; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10; // [rsp+40h] [rbp-38h]
  _BYTE v11[40]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+80h] [rbp+8h] BYREF

  v9 = 0LL;
  v2 = 0LL;
  v10 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 136);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  try
  {
    v13 = v3;
    if ( &v9 != (__int128 *)((char *)this + 176) )
    {
      std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::_Assign_range<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *>(
        (__int64 *)&v9,
        *((_QWORD *)this + 22),
        *((_QWORD **)this + 23));
      v2 = v10;
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v13);
    for ( i = (__int64 *)v9; i != *((__int64 **)&v9 + 1); ++i )
    {
      v6 = *i;
      if ( *(_BYTE *)(*i + 120) )
      {
        if ( *(_BYTE *)(v6 + 240) )
        {
          MicrosoftTelemetryAssertTriggeredArgs("AudioSrv.dll", 0LL, 0LL, 1LL);
          (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
          v7 = (void (__fastcall ***)(_QWORD, unsigned __int64 *))CAudioStreamStateChanged::CAudioStreamStateChanged(
                                                                    (__int64)v11,
                                                                    (__int64)this,
                                                                    1,
                                                                    0,
                                                                    *i,
                                                                    (__int64)L"CAudioSession::DisconnectStreamList");
          CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
            (LPCRITICAL_SECTION)((char *)this + 432),
            v7);
          (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
        }
        CAudioSession::RemoveStream(this, (struct CAudioStream *)*i, 0);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(*i + 8) + 168LL))(*i + 8);
      }
      else
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v6 + 8) + 176LL))(v6 + 8);
      }
    }
    if ( (_QWORD)v9 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>>(
        (__int64 *)v9,
        *((__int64 **)&v9 + 1));
      std::_Deallocate<16,0>((void *)v9, 8 * ((v2 - (__int64)v9) >> 3));
    }
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v13) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x12E7,
                     (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                     v4);
    return (unsigned int)v13;
  }
  return result;
}
