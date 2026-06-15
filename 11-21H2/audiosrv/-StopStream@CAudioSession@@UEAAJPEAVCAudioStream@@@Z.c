/*
 * XREFs of ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180023C60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x1800122E8 (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180020030 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_ @ 0x1800C61A0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 *     ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x1800D5FB0 (--0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEB.c)
 *     ?Stop@CAudioStream@@QEAAJXZ @ 0x1800E5CA4 (-Stop@CAudioStream@@QEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18015BDB0 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::StopStream(CAudioSession *this, struct CAudioStream *a2)
{
  struct CAudioStream *v4; // rbx
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  struct CAudioStream **v6; // r8
  struct CAudioStream **v7; // rcx
  struct CAudioStream *v8; // rax
  int v9; // eax
  bool v10; // zf
  int v11; // ebp
  char v12; // r15
  __int64 v13; // r14
  int v14; // edx
  int v15; // eax
  unsigned int v16; // ebp
  unsigned int v17; // r14d
  __int64 *v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  int v21; // ebp
  __int64 v22; // r8
  struct CAudioStream **v24; // rcx
  struct CAudioStream **v25; // rax
  void (__fastcall ***v26)(_QWORD, unsigned __int64 *); // rax
  int updated; // eax
  int v28; // [rsp+20h] [rbp-58h]
  void (__fastcall **v29[4])(_QWORD, unsigned __int64 *); // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v31; // [rsp+80h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v6 = (struct CAudioStream **)*((_QWORD *)this + 15);
  v7 = (struct CAudioStream **)*((_QWORD *)this + 14);
  if ( v7 == v6 )
    goto LABEL_22;
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == a2 )
      break;
    if ( ++v7 == v6 )
      goto LABEL_22;
  }
  v4 = *v7;
  if ( v8 )
    (*(void (__fastcall **)(struct CAudioStream *))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v4 + 7) + 48LL))(
         *((_QWORD *)v4 + 7),
         *((_QWORD *)v4 + 6));
  if ( v9 >= 0 || v9 == -2147023174 || v9 == -2147023170 )
    *((_BYTE *)v4 + 240) = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12F,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v9,
      v28);
  v10 = (*((_DWORD *)this + 50))-- == 1;
  if ( v10 )
  {
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        46LL,
        &WPP_d4601149da203bf03f1316021d4590fb_Traceguids,
        *((unsigned int *)this + 50));
    }
    (*(void (__fastcall **)(CAudioSession *, _QWORD))(*(_QWORD *)this + 56LL))(this, 0LL);
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v4 + 9) + 120LL))(*((_QWORD *)v4 + 9));
  v12 = *((_BYTE *)v4 + 240);
  v13 = *((unsigned int *)v4 + 100);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*((_QWORD *)v4 + 1) + 64LL))((__int64)v4 + 8) )
    v14 = dword_180181C90[v13];
  else
    v14 = dword_180181C30[v13];
  v15 = 0;
  if ( v11 )
    v15 = 16;
  v16 = (v12 == 0) + 2 * (v14 + v15);
  v17 = *((_DWORD *)v4 + 61);
  if ( v16 == v17 )
    goto LABEL_19;
  *((_DWORD *)v4 + 61) = v16;
  v18 = (__int64 *)*((_QWORD *)v4 + 7);
  v19 = *v18;
  v31 = 0LL;
  (*(void (__fastcall **)(__int64 *, __int64 *))(v19 + 80))(v18, &v31);
  v20 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v31 + 200LL))(v31, 1LL, v16, v17);
  v21 = v20;
  if ( v20 >= 0 )
  {
    if ( v31 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
LABEL_19:
    v21 = 0;
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x292,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v20,
    v28);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v31);
LABEL_20:
  if ( v21 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB0E,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v21,
      v28);
LABEL_22:
  if ( v5 )
    LeaveCriticalSection(v5);
  if ( v4 )
  {
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v29[0] = (void (__fastcall **)(_QWORD, unsigned __int64 *))&CAudioStreamStateChanged::`vftable';
    v29[1] = (void (__fastcall **)(_QWORD, unsigned __int64 *))this;
    v29[2] = (void (__fastcall **)(_QWORD, unsigned __int64 *))1;
    v29[3] = (void (__fastcall **)(_QWORD, unsigned __int64 *))v4;
    v22 = *((unsigned int *)v4 + 78);
    if ( !(_DWORD)v22 )
    {
      MicrosoftTelemetryAssertTriggeredArgs("AudioSrv.dll", 0LL, 0LL, 1LL);
      v22 = *((unsigned int *)v4 + 78);
    }
    if ( (_DWORD)v22 != 1 )
      MicrosoftTelemetryAssertTriggeredArgs("AudioSrv.dll", 0LL, v22, 1LL);
    *((_DWORD *)v4 + 78) = 0;
    *((_QWORD *)v4 + 40) = L"CAudioSession::StopStream: in _Streams";
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 432), v29);
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
    v31 = (__int64)this + 136;
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 47LL, &WPP_d4601149da203bf03f1316021d4590fb_Traceguids);
    }
    v24 = (struct CAudioStream **)*((_QWORD *)this + 23);
    v25 = (struct CAudioStream **)*((_QWORD *)this + 22);
    if ( v25 != v24 )
    {
      do
      {
        if ( *v25 == a2 )
          break;
        ++v25;
      }
      while ( v25 != v24 );
      if ( v25 != v24 )
      {
        v4 = *v25;
        if ( *v25 )
          (*(void (__fastcall **)(struct CAudioStream *))(*(_QWORD *)v4 + 8LL))(*v25);
        CAudioStream::Stop(v4);
        v10 = (*((_DWORD *)this + 50))-- == 1;
        if ( v10 )
        {
          if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              48LL,
              &WPP_d4601149da203bf03f1316021d4590fb_Traceguids,
              *((unsigned int *)this + 50));
          }
          (*(void (__fastcall **)(CAudioSession *, _QWORD))(*(_QWORD *)this + 56LL))(this, 0LL);
          (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
          v28 = (int)v4;
          v26 = (void (__fastcall ***)(_QWORD, unsigned __int64 *))CAudioStreamStateChanged::CAudioStreamStateChanged(
                                                                     v29,
                                                                     this,
                                                                     1LL);
          CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
            (LPCRITICAL_SECTION)((char *)this + 432),
            v26);
          (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
        }
        updated = CAudioStream::UpdateStreamPriority(v4);
        if ( updated < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xB4F,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (const char *)(unsigned int)updated,
            v28);
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v31);
  }
  if ( v4 )
    (*(void (__fastcall **)(struct CAudioStream *))(*(_QWORD *)v4 + 16LL))(v4);
  return 0LL;
}
