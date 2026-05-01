/*
 * XREFs of ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x180005EF0
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcBindToServer @ 0x180005AD0 (CempRpcBindToServer.c)
 *     ?RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@ZP6AX_K2@Z@Z @ 0x180005E44 (-RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_P.c)
 *     ?RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ @ 0x180006390 (-RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ.c)
 *     ??0ModernResourceManagerProxy@@QEAA@XZ @ 0x18000652C (--0ModernResourceManagerProxy@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAppMemoryReport@System@Windows@@UEAAJ_K0000@Z @ 0x180009D10 (-RuntimeClassInitialize@CAppMemoryReport@System@Windows@@UEAAJ_K0000@Z.c)
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000B064 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18000BB44 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180015750 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCAppMemoryReport@System@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180019FC0 (--1-$ComPtr@VCAppMemoryReport@System@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::GetAppMemoryReport(
        Windows::System::CMemoryManager *this,
        struct Windows::System::IAppMemoryReport **a2)
{
  int InformationProcess; // eax
  ModernResourceManagerProxy *v4; // rax
  ModernResourceManagerProxy *v5; // rax
  ModernResourceManagerProxy *v6; // rbx
  int v7; // eax
  void (*v8)(struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *); // rdx
  void (*v9)(unsigned __int64, unsigned __int64); // r8
  int v10; // edi
  ModernResourceManagerProxy *v11; // rsi
  char *v12; // rbx
  signed int v13; // edi
  NTSTATUS v14; // eax
  unsigned __int64 v15; // rsi
  ModernResourceManagerProxy *v16; // r14
  NTSTATUS v17; // eax
  unsigned __int64 v18; // rdi
  bool v19; // zf
  int v20; // eax
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // r15
  Windows::System::CAppMemoryReport *v23; // rax
  Windows::System::CAppMemoryReport *v24; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v25; // rcx
  unsigned __int64 v26; // r8
  struct Windows::System::IAppMemoryReport *v27; // rcx
  signed int v29; // eax
  signed int v30; // eax
  signed int v31; // eax
  struct Windows::System::IAppMemoryReport *v32; // [rsp+38h] [rbp-79h] BYREF
  int v33; // [rsp+40h] [rbp-71h] BYREF
  int v34; // [rsp+44h] [rbp-6Dh] BYREF
  ULONG v35[2]; // [rsp+48h] [rbp-69h] BYREF
  char v36[4]; // [rsp+50h] [rbp-61h] BYREF
  char v37[4]; // [rsp+54h] [rbp-5Dh] BYREF
  __int128 SystemInformation; // [rsp+58h] [rbp-59h] BYREF
  unsigned __int64 v39[3]; // [rsp+68h] [rbp-49h]
  char v40[8]; // [rsp+80h] [rbp-31h] BYREF
  unsigned __int64 v41; // [rsp+88h] [rbp-29h]
  unsigned __int64 v42; // [rsp+90h] [rbp-21h]
  _OWORD ProcessInformation[2]; // [rsp+98h] [rbp-19h] BYREF
  unsigned __int64 v44; // [rsp+B8h] [rbp+7h]
  char v45[8]; // [rsp+C0h] [rbp+Fh] BYREF
  unsigned __int64 v46; // [rsp+C8h] [rbp+17h]

  v32 = 0LL;
  InformationProcess = NtQueryInformationProcess(
                         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                         ProcessBasePriority|0x40,
                         ProcessInformation,
                         0x28u,
                         0LL);
  if ( InformationProcess >= 0 )
  {
    RtlAcquireSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
    if ( Windows::System::CMemoryManager::s_pProxy )
    {
LABEL_3:
      RtlReleaseSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
      goto LABEL_12;
    }
    v4 = (ModernResourceManagerProxy *)operator new(0x70uLL);
    if ( v4 && (v5 = ModernResourceManagerProxy::ModernResourceManagerProxy(v4), (v6 = v5) != 0LL) )
    {
      v7 = CempRpcBindToServer(&unk_180021680, (RPC_BINDING_HANDLE *)v5 + 2);
      v10 = v7 | 0x10000000;
      if ( v7 >= 0 )
      {
        v10 = ModernResourceManagerProxy::RegisterCommitMemoryCallback(v6, v8, v9);
        if ( v10 >= 0 )
        {
          if ( Windows::System::CMemoryManager::s_pProxy )
            (*(void (__fastcall **)(ModernResourceManagerProxy *))(*(_QWORD *)Windows::System::CMemoryManager::s_pProxy
                                                                 + 16LL))(Windows::System::CMemoryManager::s_pProxy);
          Windows::System::CMemoryManager::s_pProxy = v6;
          goto LABEL_3;
        }
      }
      RtlReleaseSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
      (*(void (__fastcall **)(ModernResourceManagerProxy *))(*(_QWORD *)v6 + 16LL))(v6);
      if ( v10 >= 0 )
      {
LABEL_12:
        v11 = Windows::System::CMemoryManager::s_pProxy;
        v12 = (char *)Windows::System::CMemoryManager::s_pProxy + 96;
        RtlAcquireSRWLockExclusive((char *)Windows::System::CMemoryManager::s_pProxy + 96);
        *((_DWORD *)v12 + 2) = GetCurrentThreadId();
        v13 = ModernResourceManagerProxy::RegisterWithServer(v11);
        if ( v13 >= 0 )
        {
          v33 = 24;
          v14 = NtQueryWnfStateData((char *)v11 + 48, 0LL, 0LL, v36, v45, &v33);
          if ( v14 >= 0 )
          {
            v15 = v46;
            *((_DWORD *)v12 + 2) = 0;
            RtlReleaseSRWLockExclusive(v12);
            goto LABEL_15;
          }
          v30 = RtlNtStatusToDosError(v14);
          v13 = v30;
          if ( v30 > 0 )
            v13 = (unsigned __int16)v30 | 0x80070000;
        }
        *((_DWORD *)v12 + 2) = 0;
        RtlReleaseSRWLockExclusive(v12);
        if ( v13 < 0 )
          goto LABEL_38;
        v15 = (unsigned __int64)v32;
LABEL_15:
        v16 = Windows::System::CMemoryManager::s_pProxy;
        RtlAcquireSRWLockExclusive((char *)Windows::System::CMemoryManager::s_pProxy + 96);
        *((_DWORD *)v16 + 26) = GetCurrentThreadId();
        v13 = ModernResourceManagerProxy::RegisterWithServer(v16);
        if ( v13 >= 0 )
        {
          v34 = 24;
          v17 = NtQueryWnfStateData((char *)v16 + 48, 0LL, 0LL, v37, v40, &v34);
          if ( v17 >= 0 )
          {
            v18 = v42;
            v19 = v42 == 0;
            *((_DWORD *)v16 + 26) = 0;
            if ( v19 )
              v18 = v41;
            RtlReleaseSRWLockExclusive((char *)v16 + 96);
            goto LABEL_20;
          }
          v31 = RtlNtStatusToDosError(v17);
          v13 = v31;
          if ( v31 > 0 )
            v13 = (unsigned __int16)v31 | 0x80070000;
        }
        *((_DWORD *)v16 + 26) = 0;
        RtlReleaseSRWLockExclusive((char *)v16 + 96);
        if ( v13 < 0 )
          goto LABEL_38;
        v18 = (unsigned __int64)v32;
LABEL_20:
        if ( ((v15 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        {
LABEL_23:
          SystemInformation = ProcessInformation[0];
          *(_OWORD *)v39 = ProcessInformation[1];
          goto LABEL_30;
        }
        v20 = NtQuerySystemInformation(MaxSystemInfoClass|SystemFullMemoryInformation, &SystemInformation, 0x20u, v35);
        if ( v20 >= 0 )
        {
          v15 = v39[0] * RmpPageSize;
          goto LABEL_23;
        }
        v29 = RtlNtStatusToDosError(v20);
        v13 = v29;
        if ( v29 > 0 )
          goto LABEL_50;
        goto LABEL_28;
      }
    }
    else
    {
      RtlReleaseSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
    }
    v15 = v44;
    v18 = v44;
    goto LABEL_20;
  }
  v29 = RtlNtStatusToDosError(InformationProcess);
  v13 = v29;
  if ( v29 > 0 )
LABEL_50:
    v13 = (unsigned __int16)v29 | 0x80070000;
LABEL_28:
  if ( v13 < 0 )
    goto LABEL_38;
  v18 = (unsigned __int64)v32;
  v15 = (unsigned __int64)v32;
LABEL_30:
  v21 = *((_QWORD *)&SystemInformation + 1);
  v22 = *((_QWORD *)&SystemInformation + 1) + SystemInformation;
  if ( v32 )
    (*(void (**)(void))(*(_QWORD *)v32 + 16LL))();
  v23 = (Windows::System::CAppMemoryReport *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v24 = v23;
  if ( v23 )
  {
    v25 = Microsoft::WRL::Details::ModuleBase::module_;
    *((_QWORD *)v23 + 5) = 1LL;
    *(_QWORD *)v23 = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::`vftable'{for `Windows::System::IAppMemoryReport'};
    *((_QWORD *)v23 + 1) = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::System::IAppMemoryReport2,IInspectable>'};
    *((_QWORD *)v23 + 2) = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::`vftable'{for `Windows::System::IAppMemoryReport2'};
    *((_QWORD *)v23 + 3) = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>'};
    if ( v25 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v25 + 8LL))(v25);
    v26 = v39[0];
    *(_QWORD *)v24 = &Windows::System::CAppMemoryReport::`vftable'{for `Windows::System::IAppMemoryReport'};
    *((_QWORD *)v24 + 1) = &Windows::System::CAppMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::System::IAppMemoryReport2,IInspectable>'};
    *((_QWORD *)v24 + 6) = 0LL;
    *((_QWORD *)v24 + 2) = &Windows::System::CAppMemoryReport::`vftable'{for `Windows::System::IAppMemoryReport2'};
    *((_QWORD *)v24 + 7) = 0LL;
    *((_QWORD *)v24 + 3) = &Windows::System::CAppMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>'};
    *((_QWORD *)v24 + 8) = 0LL;
    *((_QWORD *)v24 + 9) = 0LL;
    *(_QWORD *)v35 = v24;
    v13 = Windows::System::CAppMemoryReport::RuntimeClassInitialize(v24, v21, v26, v22, v15, v18);
    if ( v13 < 0 )
    {
      Microsoft::WRL::ComPtr<Windows::System::CAppMemoryReport>::~ComPtr<Windows::System::CAppMemoryReport>(v35);
    }
    else
    {
      v13 = (**(__int64 (__fastcall ***)(Windows::System::CAppMemoryReport *, GUID *, struct Windows::System::IAppMemoryReport **))v24)(
              v24,
              &GUID_6d65339b_4d6f_45bc_9c5e_e49b3ff2758d,
              &v32);
      (*(void (__fastcall **)(Windows::System::CAppMemoryReport *))(*(_QWORD *)v24 + 16LL))(v24);
      if ( v13 >= 0 )
      {
        *a2 = v32;
        v32 = 0LL;
      }
    }
  }
  else
  {
    v13 = -2147024882;
  }
LABEL_38:
  v27 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(struct Windows::System::IAppMemoryReport *))(*(_QWORD *)v27 + 16LL))(v27);
  }
  return (unsigned int)v13;
}
