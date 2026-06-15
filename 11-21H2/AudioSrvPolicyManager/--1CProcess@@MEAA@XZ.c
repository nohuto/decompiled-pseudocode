/*
 * XREFs of ??1CProcess@@MEAA@XZ @ 0x180015100
 * Callers:
 *     ??_ECProcess@@MEAAPEAXI@Z @ 0x1800155B0 (--_ECProcess@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BF70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 *     ??1?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@QEAA@XZ @ 0x1800148B8 (--1-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@.c)
 *     ??1?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEAA@XZ @ 0x1800149C8 (--1-$CSimpleMap@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAIV-$CSimpleMapE.c)
 *     ??1?$list@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@@std@@QEAA@XZ @ 0x180014C6C (--1-$list@U-$pair@QEAXV-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@V-$a.c)
 *     ?CancelDeferredBamExemptionRelease@CProcess@@IEAAXXZ @ 0x180015D88 (-CancelDeferredBamExemptionRelease@CProcess@@IEAAXXZ.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x1800163A4 (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?RemoveAt@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEAAHH@Z @ 0x18001A8A4 (-RemoveAt@-$CSimpleMap@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAIV-$CSim.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CProcess::~CProcess(CProcess *this)
{
  void *v2; // rbx
  HANDLE ProcessHeap; // rax
  void *v4; // rbx
  HANDLE v5; // rax
  char *v6; // rcx
  __int64 v7; // rcx
  char *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  char *v16; // rcx
  char *v17; // rcx

  *(_QWORD *)this = &CProcess::`vftable'{for `IAudioProcess'};
  *((_QWORD *)this + 1) = &CProcess::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessInternal>'};
  while ( *((int *)this + 68) > 0 )
  {
    v2 = (void *)**((_QWORD **)this + 33);
    ATL::CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>::RemoveAt((char *)this + 256);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v2);
  }
  while ( *((int *)this + 74) > 0 )
  {
    v4 = (void *)**((_QWORD **)this + 36);
    ATL::CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>::RemoveAt((char *)this + 280);
    v5 = GetProcessHeap();
    HeapFree(v5, 0, v4);
  }
  if ( *((_DWORD *)this + 58) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 40LL))(*((_QWORD *)this + 30));
  if ( *((_QWORD *)this + 73) )
  {
    CProcess::CancelDeferredBamExemptionRelease(this);
    CloseThreadpoolTimer(*((PTP_TIMER *)this + 73));
  }
  CProcess::CleanupProcessTerminationWatcher(this, 0);
  v6 = (char *)*((_QWORD *)this + 95);
  if ( v6 )
  {
    std::_Deallocate<16,0>(v6, (*((_QWORD *)this + 97) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 95) = 0LL;
    *((_QWORD *)this + 96) = 0LL;
    *((_QWORD *)this + 97) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 712));
  v7 = *((_QWORD *)this + 88);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  ATL::CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>::~CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>((__int64)this + 632);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 592));
  v8 = (char *)*((_QWORD *)this + 72);
  if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v8);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 536));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 368));
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 8);
  ATL::CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>::~CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>((char **)this + 35);
  ATL::CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>::~CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>((char **)this + 32);
  v9 = *((_QWORD *)this + 31);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = *((_QWORD *)this + 30);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = (volatile signed __int32 *)*((_QWORD *)this + 28);
  if ( v11 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(v11);
  v12 = (void *)*((_QWORD *)this + 25);
  if ( v12 )
    CoTaskMemFree(v12);
  v13 = (void *)*((_QWORD *)this + 23);
  if ( v13 )
    CoTaskMemFree(v13);
  v14 = (void *)*((_QWORD *)this + 22);
  if ( v14 )
    CoTaskMemFree(v14);
  v15 = (void *)*((_QWORD *)this + 21);
  if ( v15 )
    CoTaskMemFree(v15);
  v16 = (char *)*((_QWORD *)this + 19);
  if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v16);
  v17 = (char *)*((_QWORD *)this + 16);
  if ( v17 )
  {
    std::_Deallocate<16,0>(v17, (*((_QWORD *)this + 18) - (_QWORD)v17) & 0xFFFFFFFFFFFFFFFCuLL);
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
  }
  std::_Deallocate<16,0>(
    *((char **)this + 11),
    (*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  std::list<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>::~list<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>((char **)this + 9);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *((_DWORD *)this + 5) = -1073741823;
}
