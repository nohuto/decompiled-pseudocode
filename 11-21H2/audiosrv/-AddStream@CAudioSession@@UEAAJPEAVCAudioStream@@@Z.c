/*
 * XREFs of ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180015150
 * Callers:
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180013D50 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x1800D67A0 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180011B20 (--$_Emplace_reallocate@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180020030 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800C0574 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CAudioSession::AddStream(CAudioSession *this, struct _RTL_CRITICAL_SECTION *a2)
{
  __int64 *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  char DebugInfo; // r12
  __int64 DebugInfo_low; // r13
  int v9; // edx
  int v10; // eax
  unsigned int v11; // r14d
  unsigned int DebugInfo_high; // r12d
  int v13; // r14d
  PRTL_CRITICAL_SECTION_DEBUG v14; // rcx
  unsigned int v15; // r8d
  const char *v16; // r9
  __int64 *OwningThread; // rcx
  __int64 v19; // rax
  int v20; // eax
  int v21; // [rsp+20h] [rbp-68h]
  LPCRITICAL_SECTION lpCriticalSection[6]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+20h] BYREF

  (*(void (__fastcall **)(struct IAudioPolicyManager *, LPCRITICAL_SECTION *))(*(_QWORD *)g_PolicyManager + 192LL))(
    g_PolicyManager,
    lpCriticalSection);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  lpCriticalSection[1] = (LPCRITICAL_SECTION)((char *)this + 64);
  v24 = a2;
  if ( a2 )
    ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))a2->DebugInfo->CriticalSection)(a2);
  v4 = (__int64 *)*((_QWORD *)this + 15);
  if ( v4 == *((__int64 **)this + 16) )
  {
    std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>(
      (__int64 **)this + 14,
      v4,
      (__int64 *)&v24);
    v5 = (__int64)v24;
  }
  else
  {
    v5 = 0LL;
    *v4 = (__int64)a2;
    *((_QWORD *)this + 15) += 8LL;
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *(_QWORD *)&a2->LockCount;
  v25 = 0LL;
  (*(void (__fastcall **)(LONG *, __int64 *))(v6 + 24))(&a2->LockCount, &v25);
  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v25 + 96LL))(v25) && LODWORD(a2[10].DebugInfo) == 3 )
    *((_DWORD *)this + 102) = 1;
  if ( g_DuckingManager
    && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v25 + 96LL))(v25)
    && *((_DWORD *)this + 102) )
  {
    LODWORD(a2[10].DebugInfo) = 3;
  }
  if ( !(*(unsigned int (__fastcall **)(LONG *))(*(_QWORD *)&a2->LockCount + 56LL))(&a2->LockCount)
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v25 + 352LL))(v25) )
  {
    LODWORD(a2[10].DebugInfo) = 19;
  }
  ++*((_DWORD *)this + 26);
  LODWORD(v24) = (*(__int64 (__fastcall **)(ULONG_PTR))(*(_QWORD *)a2[1].SpinCount + 120LL))(a2[1].SpinCount);
  DebugInfo = (char)a2[6].DebugInfo;
  DebugInfo_low = LODWORD(a2[10].DebugInfo);
  if ( (*(unsigned __int8 (__fastcall **)(LONG *))(*(_QWORD *)&a2->LockCount + 64LL))(&a2->LockCount) )
    v9 = dword_180181C90[DebugInfo_low];
  else
    v9 = dword_180181C30[DebugInfo_low];
  if ( (_DWORD)v24 )
    v10 = 16;
  else
    v10 = 0;
  v11 = (DebugInfo == 0) + 2 * (v9 + v10);
  DebugInfo_high = HIDWORD(a2[6].DebugInfo);
  if ( v11 == DebugInfo_high )
    goto LABEL_22;
  HIDWORD(a2[6].DebugInfo) = v11;
  v24 = 0LL;
  OwningThread = (__int64 *)a2[1].OwningThread;
  v19 = *OwningThread;
  v24 = 0LL;
  (*(void (__fastcall **)(__int64 *, struct _RTL_CRITICAL_SECTION **))(v19 + 80))(OwningThread, &v24);
  v20 = ((__int64 (__fastcall *)(struct _RTL_CRITICAL_SECTION *, __int64, _QWORD, _QWORD))v24->DebugInfo[4].CriticalSection)(
          v24,
          1LL,
          v11,
          DebugInfo_high);
  v13 = v20;
  if ( v20 >= 0 )
  {
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v24);
LABEL_22:
    v13 = 0;
    goto LABEL_23;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x292,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v20,
    v21);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v24);
LABEL_23:
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA6C,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v13,
      v21);
  LODWORD(a2[2].DebugInfo) = *((_DWORD *)this + 52);
  v14 = a2[5].DebugInfo;
  if ( v14 )
    (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&v14->Type + 32LL))(v14);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( this != (CAudioSession *)-64LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
  lpCriticalSection[2] = (LPCRITICAL_SECTION)&CAudioStreamCreate::`vftable';
  lpCriticalSection[3] = (LPCRITICAL_SECTION)this;
  lpCriticalSection[4] = a2;
  CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 432));
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
  if ( !SetEvent(a2[9].LockSemaphore) )
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x91F, v15, v16);
  return 0LL;
}
