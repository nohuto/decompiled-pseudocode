/*
 * XREFs of ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x1800510AC
 * Callers:
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180050D80 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x1800DF7B0 (-DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z.c)
 * Callees:
 *     ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x180016F54 (-RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z.c)
 *     ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x180017250 (--0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEB.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18001C500 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@st.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18002625C (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Copy_unchecked@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@PEAV12@@std@@YAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@PEAV12@00@Z @ 0x180051244 (--$_Copy_unchecked@PEAV-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@PEAV12@@std@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Uninitialized_copy@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800DE888 (--$_Uninitialized_copy@PEAV-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$alloc.c)
 *     ?_Clear_and_reserve_geometric@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAX_K@Z @ 0x1800E39CC (-_Clear_and_reserve_geometric@-$vector@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x1801631B0 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSession::DisconnectStreamList(CAudioSession *this)
{
  __int64 v2; // rsi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v4; // r12
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 *v7; // r15
  __int64 *v8; // r14
  __int64 *i; // rbx
  __int64 v11; // rax
  void (__fastcall ***v12)(_QWORD, void **); // rax
  __int128 v13; // [rsp+30h] [rbp-58h] BYREF
  __int64 v14; // [rsp+40h] [rbp-48h]
  _BYTE v15[40]; // [rsp+48h] [rbp-40h] BYREF

  v13 = 0LL;
  v2 = 0LL;
  v14 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 136);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  if ( &v13 == (__int128 *)((char *)this + 176) )
  {
    v7 = (__int64 *)*((_QWORD *)&v13 + 1);
  }
  else
  {
    v4 = *((_QWORD *)this + 23);
    v5 = *((_QWORD *)this + 22);
    v6 = (v4 - v5) >> 3;
    if ( v6 )
    {
      std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::_Clear_and_reserve_geometric(&v13, v6);
      std::_Copy_unchecked<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *,wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *>(
        v5,
        v5,
        v13);
      v7 = (__int64 *)std::_Uninitialized_copy<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(
                        v5,
                        v4,
                        *((_QWORD *)&v13 + 1));
      *((_QWORD *)&v13 + 1) = v7;
      v2 = v14;
    }
    else
    {
      v7 = 0LL;
      std::_Copy_unchecked<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *,wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *>(
        v5,
        v4,
        0LL);
      std::_Destroy_range<std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(0LL, 0LL);
      *((_QWORD *)&v13 + 1) = 0LL;
    }
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  v8 = (__int64 *)v13;
  for ( i = (__int64 *)v13; i != v7; ++i )
  {
    v11 = *i;
    if ( *(_BYTE *)(*i + 136) )
    {
      if ( *(_BYTE *)(v11 + 256) )
      {
        MicrosoftTelemetryAssertTriggeredArgs("AudioSrv.dll", 0LL, 0LL, 1LL);
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
        v12 = (void (__fastcall ***)(_QWORD, void **))CAudioStreamStateChanged::CAudioStreamStateChanged(
                                                        (__int64)v15,
                                                        (__int64)this,
                                                        1,
                                                        0,
                                                        *i,
                                                        (__int64)L"CAudioSession::DisconnectStreamList");
        CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
          (LPCRITICAL_SECTION)((char *)this + 432),
          v12);
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
      }
      CAudioSession::RemoveStream(this, (struct CAudioStream *)*i, 0);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*i + 8) + 168LL))(*i + 8);
    }
    else
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v11 + 8) + 176LL))(v11 + 8);
    }
  }
  if ( v8 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(v8, v7);
    std::_Deallocate<16,0>(v8, 8 * ((v2 - (__int64)v8) >> 3));
  }
  return 0LL;
}
