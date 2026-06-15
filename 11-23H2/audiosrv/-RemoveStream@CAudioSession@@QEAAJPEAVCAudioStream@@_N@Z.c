/*
 * XREFs of ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x180016F54
 * Callers:
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180013400 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 *     ??1CVADServer@@UEAA@XZ @ 0x180017678 (--1CVADServer@@UEAA@XZ.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x1800510AC (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     wil::details::lambda_call__lambda_3536bcdc4a42b08960a322f6b0b186f2___::_lambda_call__lambda_3536bcdc4a42b08960a322f6b0b186f2___ @ 0x18011C684 (wil--details--lambda_call__lambda_3536bcdc4a42b08960a322f6b0b186f2___--_lambda_call__lambda_3536.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180014FC0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?erase@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1800171C0 (-erase@-$vector@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$co.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x180017334 (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x180022708 (-PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18002625C (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800DDE44 (WPP_SF_d.c)
 *     WPP_SF_qq @ 0x1800E42B8 (WPP_SF_qq.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x180163160 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSession::RemoveStream(CAudioSession *this, struct CAudioStream *a2, char a3)
{
  struct CAudioStream *v6; // rbx
  struct CAudioStream **i; // rdi
  __int64 v8; // r9
  struct CAudioStream **j; // rdi
  struct CAudioStream *v11; // [rsp+90h] [rbp+8h] BYREF
  char v12; // [rsp+98h] [rbp+10h] BYREF

  v6 = 0LL;
  v11 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 49LL, &WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids, this, a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  for ( i = (struct CAudioStream **)*((_QWORD *)this + 14); i != *((struct CAudioStream ***)this + 15) && *i != a2; ++i )
    ;
  if ( i != *((struct CAudioStream ***)this + 15) )
  {
    v6 = *i;
    v11 = v6;
    if ( v6 )
      (*(void (__fastcall **)(struct CAudioStream *))(*(_QWORD *)v6 + 8LL))(v6);
    std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::erase((char *)this + 112, &v12, i);
  }
  if ( this != (CAudioSession *)-64LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( !v6 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
    for ( j = (struct CAudioStream **)*((_QWORD *)this + 22); j != *((struct CAudioStream ***)this + 23) && *j != a2; ++j )
      ;
    if ( j != *((struct CAudioStream ***)this + 23) )
    {
      v6 = *j;
      v11 = v6;
      if ( v6 )
        (*(void (__fastcall **)(struct CAudioStream *))(*(_QWORD *)v6 + 8LL))(v6);
      std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::erase((char *)this + 176, &v12, j);
    }
    if ( this != (CAudioSession *)-136LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  }
  (*(void (__fastcall **)(struct CAudioStream *))(*(_QWORD *)a2 + 72LL))(a2);
  if ( v6 )
  {
    if ( *((_BYTE *)v6 + 256) )
      MicrosoftTelemetryAssertTriggeredArgs("AudioSrv.dll", 0LL, 0LL, 1LL);
    v8 = (unsigned int)(*((_DWORD *)this + 26) - 1);
    *((_DWORD *)this + 26) = v8;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 50LL, &WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids, v8);
    }
    if ( a3 )
    {
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 432));
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
    }
    CAudioStream::CloseAudioHandle(v6);
    *((_QWORD *)v6 + 8) = 0LL;
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v11);
    CAudioSession::PostStateCheckExpirationWork(this);
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v11);
  return 0LL;
}
