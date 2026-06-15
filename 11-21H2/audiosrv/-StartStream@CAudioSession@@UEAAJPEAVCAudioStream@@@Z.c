/*
 * XREFs of ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180021DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180020030 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_qd @ 0x1800C9C78 (WPP_SF_qd.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18015BDB0 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::StartStream(CAudioSession *this, struct CAudioStream *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  struct CAudioStream **v5; // rcx
  struct CAudioStream **v6; // rax
  struct CAudioStream *v7; // rbx
  int v8; // eax
  int v9; // r14d
  char v10; // r15
  __int64 v11; // rdi
  int v12; // edx
  int v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // r14d
  __int64 *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  int v19; // edi
  DWORD LastError; // edi
  int v22; // [rsp+20h] [rbp-58h]
  void (__fastcall **v23[2])(_QWORD, unsigned __int64 *); // [rsp+30h] [rbp-48h] BYREF
  int v24; // [rsp+40h] [rbp-38h]
  int v25; // [rsp+44h] [rbp-34h]
  struct CAudioStream *v26; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+80h] [rbp+8h] BYREF
  __int64 v29; // [rsp+90h] [rbp+18h] BYREF

  v29 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v28 = v4;
  v5 = (struct CAudioStream **)*((_QWORD *)this + 15);
  v6 = (struct CAudioStream **)*((_QWORD *)this + 14);
  if ( v6 == v5 )
  {
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAC2,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x88890004LL,
      v22);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v28);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v29);
    return 2290679812LL;
  }
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == a2 )
      break;
    if ( ++v6 == v5 )
      goto LABEL_28;
  }
  if ( v7 )
    (*(void (__fastcall **)(struct CAudioStream *))(*(_QWORD *)v7 + 8LL))(*v6);
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 7) + 40LL))(
         *((_QWORD *)v7 + 7),
         *((_QWORD *)v7 + 6));
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x122,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v8,
      v22);
  else
    *((_BYTE *)v7 + 240) = 1;
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v7 + 9) + 120LL))(*((_QWORD *)v7 + 9));
  v10 = *((_BYTE *)v7 + 240);
  v11 = *((unsigned int *)v7 + 100);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*((_QWORD *)v7 + 1) + 64LL))((__int64)v7 + 8) )
    v12 = dword_180181C90[v11];
  else
    v12 = dword_180181C30[v11];
  v13 = 0;
  if ( v9 )
    v13 = 16;
  v14 = (v10 == 0) + 2 * (v12 + v13);
  v15 = *((_DWORD *)v7 + 61);
  if ( v14 != v15 )
  {
    *((_DWORD *)v7 + 61) = v14;
    v16 = (__int64 *)*((_QWORD *)v7 + 7);
    v17 = *v16;
    v28 = 0LL;
    (*(void (__fastcall **)(__int64 *, struct _RTL_CRITICAL_SECTION **))(v17 + 80))(v16, &v28);
    v18 = ((__int64 (__fastcall *)(struct _RTL_CRITICAL_SECTION *, __int64, _QWORD, _QWORD))v28->DebugInfo[4].CriticalSection)(
            v28,
            1LL,
            v14,
            v15);
    v19 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x292,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v18,
        v22);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v28);
      goto LABEL_16;
    }
    if ( v28 )
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v28->DebugInfo->ProcessLocksList.Flink)(v28);
  }
  v19 = 0;
LABEL_16:
  if ( v19 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAC7,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v19,
      v22);
  if ( ++*((_DWORD *)this + 50) == 1 )
  {
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        45LL,
        &WPP_d4601149da203bf03f1316021d4590fb_Traceguids,
        this,
        *((_DWORD *)this + 50));
    }
    if ( v4 )
    {
      LastError = GetLastError();
      LeaveCriticalSection(v4);
      SetLastError(LastError);
    }
    (*(void (__fastcall **)(CAudioSession *, __int64))(*(_QWORD *)this + 56LL))(this, 1LL);
  }
  else if ( v4 )
  {
    LeaveCriticalSection(v4);
  }
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
  v23[0] = (void (__fastcall **)(_QWORD, unsigned __int64 *))&CAudioStreamStateChanged::`vftable';
  v23[1] = (void (__fastcall **)(_QWORD, unsigned __int64 *))this;
  v24 = 0;
  v25 = 1;
  v26 = v7;
  if ( *((_DWORD *)v7 + 78) == 1 )
    MicrosoftTelemetryAssertTriggeredArgs("AudioSrv.dll", 1LL, 1LL, 1LL);
  *((_DWORD *)v7 + 78) = 1;
  *((_QWORD *)v7 + 40) = L"CAudioSession::StartStream";
  CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 432), v23);
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
  (*(void (__fastcall **)(struct CAudioStream *))(*(_QWORD *)v7 + 16LL))(v7);
  return 0LL;
}
