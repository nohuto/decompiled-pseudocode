/*
 * XREFs of ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x180015D90
 * Callers:
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x180009EE0 (-FinalRelease@CVADServer@@QEAAXXZ.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180013460 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180015C00 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x1800D72F4 (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180020030 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800C0574 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x1800C6CEC (--_G_WorkTask@@QEAAPEAXI@Z.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C7E10 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?erase@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1800DB4F8 (-erase@-$vector@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$co.c)
 *     WPP_SF_qq @ 0x1800DB994 (WPP_SF_qq.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18015BDB0 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CAudioSession::RemoveStream(CAudioSession *this, struct CAudioStream *a2, char a3)
{
  char v3; // r15
  struct CAudioStream *v6; // rbx
  struct CAudioStream **v7; // rcx
  struct CAudioStream **v8; // r14
  struct CAudioStream *v9; // rax
  struct CAudioStream **v10; // r15
  struct CAudioStream **v11; // r13
  struct CAudioStream **v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r9
  int v15; // eax
  void *v16; // rcx
  unsigned int v17; // r8d
  const char *v18; // r9
  __int64 v19; // r15
  signed int v20; // edi
  _QWORD *v21; // rax
  _DWORD *v22; // rdx
  _QWORD *v23; // rbx
  HANDLE ProcessHeap; // rax
  _DWORD *v25; // rax
  _DWORD *v26; // rdi
  std::_Ref_count_base *v27; // rcx
  _BYTE *v28; // rdx
  struct _TP_WORK *ThreadpoolWork; // r14
  _QWORD *v30; // rdx
  struct CAudioStream *v32; // rax
  __int64 v33; // rcx
  struct CAudioStream **v34; // rax
  struct CAudioStream **v35; // rdi
  PTP_POOL Threadpool; // rax
  signed int LastError; // eax
  signed int v38; // eax
  signed int v39; // eax
  int v40; // [rsp+20h] [rbp-B9h]
  _QWORD v41[7]; // [rsp+58h] [rbp-81h] BYREF
  _QWORD *v42; // [rsp+90h] [rbp-49h]
  _BYTE v43[56]; // [rsp+98h] [rbp-41h] BYREF
  _BYTE *v44; // [rsp+D0h] [rbp-9h]
  _DWORD *v45; // [rsp+D8h] [rbp-1h]
  char *v46; // [rsp+E0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+5Fh]
  CAudioSession *v48; // [rsp+148h] [rbp+6Fh] BYREF
  char v49; // [rsp+150h] [rbp+77h]
  _QWORD *v50; // [rsp+158h] [rbp+7Fh] BYREF

  v49 = a3;
  v3 = a3;
  v6 = 0LL;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 49LL, &WPP_d4601149da203bf03f1316021d4590fb_Traceguids, this, a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v7 = (struct CAudioStream **)*((_QWORD *)this + 15);
  v8 = (struct CAudioStream **)*((_QWORD *)this + 14);
  if ( v8 != v7 )
  {
    while ( 1 )
    {
      v9 = *v8;
      if ( *v8 == a2 )
        break;
      if ( ++v8 == v7 )
        goto LABEL_11;
    }
    v6 = *v8;
    if ( v9 )
      (*(void (__fastcall **)(struct CAudioStream *))(*(_QWORD *)v9 + 8LL))(v9);
    v10 = (struct CAudioStream **)*((_QWORD *)this + 15);
    v11 = v8 + 1;
    v12 = v10;
    if ( v8 + 1 != v10 )
    {
      do
      {
        v32 = *v11;
        *v11 = 0LL;
        v33 = (__int64)*(v11 - 1);
        *(v11 - 1) = v32;
        if ( v33 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
        ++v11;
      }
      while ( v11 != v10 );
      v10 = (struct CAudioStream **)*((_QWORD *)this + 15);
      v12 = v10;
    }
    v13 = (__int64)*(v10 - 1);
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      v12 = (struct CAudioStream **)*((_QWORD *)this + 15);
    }
    *((_QWORD *)this + 15) = v12 - 1;
    v3 = v49;
  }
LABEL_11:
  if ( this != (CAudioSession *)-64LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( !v6 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
    v48 = (CAudioSession *)((char *)this + 136);
    v34 = (struct CAudioStream **)*((_QWORD *)this + 23);
    v35 = (struct CAudioStream **)*((_QWORD *)this + 22);
    if ( v35 != v34 )
    {
      do
      {
        if ( *v35 == a2 )
          break;
        ++v35;
      }
      while ( v35 != v34 );
      if ( v35 != v34 )
      {
        v6 = *v35;
        if ( *v35 )
          (*(void (__fastcall **)(struct CAudioStream *))(*(_QWORD *)v6 + 8LL))(v6);
        std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::erase((char *)this + 176, &v50, v35);
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v48);
  }
  (*(void (__fastcall **)(struct CAudioStream *))(*(_QWORD *)a2 + 64LL))(a2);
  if ( v6 )
  {
    if ( *((_BYTE *)v6 + 240) )
      MicrosoftTelemetryAssertTriggeredArgs("AudioSrv.dll", 0LL, 0LL, 1LL);
    v14 = (unsigned int)(*((_DWORD *)this + 26) - 1);
    *((_DWORD *)this + 26) = v14;
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 50LL, &WPP_d4601149da203bf03f1316021d4590fb_Traceguids, v14);
    }
    if ( v3 )
    {
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 432));
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
    }
    if ( *((_DWORD *)v6 + 31) == 2 )
    {
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((char *)v6 + 168);
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((char *)v6 + 176);
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((char *)v6 + 184);
    }
    v15 = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, _QWORD, __int64))(*(_QWORD *)g_AudioResourceManager
                                                                                     + 32LL))(
            g_AudioResourceManager,
            *((_QWORD *)v6 + 7),
            (__int64)v6 + 8);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x112,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v15,
        v40);
    v16 = (void *)*((_QWORD *)v6 + 47);
    if ( v16 && !SetEvent(v16) )
      wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x91F, v17, v18);
    *((_QWORD *)v6 + 8) = 0LL;
    (*(void (__fastcall **)(struct CAudioStream *))(*(_QWORD *)v6 + 16LL))(v6);
    v48 = this;
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v19 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v41[0] = &off_180167A20;
    v41[1] = this;
    v42 = v41;
    v50 = v41;
    v20 = 0;
    if ( *(_BYTE *)(v19 + 80) )
      goto LABEL_51;
    if ( !*(_QWORD *)v19 )
    {
      Threadpool = CreateThreadpool(0LL);
      *(_QWORD *)v19 = Threadpool;
      if ( !Threadpool )
      {
        LastError = GetLastError();
        v20 = LastError;
        if ( LastError > 0 )
          v20 = (unsigned __int16)LastError | 0x80070000;
        if ( v20 < 0 )
          goto LABEL_51;
      }
      if ( !SetThreadpoolThreadMinimum(*(PTP_POOL *)v19, 1u) )
      {
        v38 = GetLastError();
        v20 = v38;
        if ( v38 > 0 )
          v20 = (unsigned __int16)v38 | 0x80070000;
        if ( v20 < 0 )
          goto LABEL_51;
      }
      SetThreadpoolThreadMaximum(*(PTP_POOL *)v19, 1u);
      *(_QWORD *)(v19 + 16) = *(_QWORD *)v19;
    }
    v21 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v23 = v21;
    if ( v21 )
    {
      *v21 = 0LL;
      v21[1] = 0LL;
      v21[2] = 0LL;
    }
    else
    {
      v23 = 0LL;
    }
    if ( v23 )
    {
      v44 = 0LL;
      if ( v42 )
        v44 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))*v42)(v42, v43);
      v23[2] = v19;
      ProcessHeap = GetProcessHeap();
      v25 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
      v26 = v25;
      v45 = v25;
      if ( v25 )
      {
        *(_OWORD *)v25 = 0LL;
        v25[2] = 1;
        v25[3] = 1;
        *(_QWORD *)v25 = &std::_Ref_count_obj2<std::function<void (void)>>::`vftable';
        v46 = (char *)(v25 + 4);
        *((_QWORD *)v25 + 9) = 0LL;
        if ( v44 )
          *((_QWORD *)v25 + 9) = (**(__int64 (__fastcall ***)(_BYTE *, __int64))v44)(v44, (__int64)(v25 + 4));
      }
      else
      {
        v26 = 0LL;
      }
      v22 = v26 + 4;
      *v23 = v26 + 4;
      v27 = (std::_Ref_count_base *)v23[1];
      v23[1] = v26;
      if ( v27 )
      {
        std::_Ref_count_base::_Decref(v27);
        v22 = (_DWORD *)*v23;
      }
      v20 = 0;
      if ( !v22 )
        v20 = -2147024882;
      if ( v44 )
      {
        v28 = v43;
        if ( v44 == v43 )
          v28 = 0LL;
        else
          LOBYTE(v28) = 1;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v44 + 32LL))(v44, v28);
        v44 = 0LL;
      }
      if ( v20 < 0 )
        goto LABEL_49;
      ThreadpoolWork = CreateThreadpoolWork(
                         (PTP_WORK_CALLBACK)CSerialWorkQueue::WorkCallback,
                         v23,
                         (PTP_CALLBACK_ENVIRON)(v19 + 8));
      if ( ThreadpoolWork )
      {
        v20 = 0;
      }
      else
      {
        v39 = GetLastError();
        v20 = v39;
        if ( v39 > 0 )
          v20 = (unsigned __int16)v39 | 0x80070000;
        if ( v20 < 0 )
          goto LABEL_49;
      }
      v23 = 0LL;
      SubmitThreadpoolWork(ThreadpoolWork);
    }
    else
    {
      v20 = -2147024882;
    }
LABEL_49:
    if ( v23 )
      _WorkTask::`scalar deleting destructor'((_WorkTask *)v23, (unsigned int)v22);
LABEL_51:
    if ( v42 )
    {
      v30 = v41;
      if ( v42 == v41 )
        v30 = 0LL;
      else
        LOBYTE(v30) = 1;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v42 + 32LL))(v42, v30);
      v42 = 0LL;
    }
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD8B,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v20,
        v40);
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
  }
  return 0LL;
}
