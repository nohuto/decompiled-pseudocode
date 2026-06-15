/*
 * XREFs of ?KsNotifications_CreateMonitor@@YAXPEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V?$CComPtr@UIConnector@@@ATL@@V?$CComPtr@UIDeviceTopology@@@3@@Z @ 0x18004DAB0
 * Callers:
 *     ?KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z @ 0x18004D900 (-KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18004DA6C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall KsNotifications_CreateMonitor(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  void (__fastcall ***v7)(_QWORD, GUID *, struct _RTL_CRITICAL_SECTION **); // r11
  struct _RTL_CRITICAL_SECTION *v8; // rcx
  _OWORD *v9; // rax
  _OWORD *v10; // rsi
  struct _RTL_CRITICAL_SECTION *v11; // r14
  struct _RTL_CRITICAL_SECTION *v12; // rcx
  __int64 v13; // rbx
  SIZE_T v14; // rbx
  _WORD *v15; // rax
  SIZE_T v16; // rbx
  SIZE_T v17; // rdx
  __int64 v18; // rdi
  __int16 v19; // cx
  LPCRITICAL_SECTION v20; // rcx
  LPCRITICAL_SECTION v21; // rbx
  int v22; // ebx
  HANDLE ProcessHeap; // rax
  _QWORD *v24; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-20h] BYREF
  char v26; // [rsp+38h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v27; // [rsp+40h] [rbp-10h] BYREF
  _OWORD *v28; // [rsp+48h] [rbp-8h] BYREF

  v7 = (void (__fastcall ***)(_QWORD, GUID *, struct _RTL_CRITICAL_SECTION **))*a3;
  v8 = 0LL;
  v27 = 0LL;
  if ( v7 )
  {
    (**v7)(v7, &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9, &v27);
    v8 = v27;
  }
  if ( v8 )
  {
    v9 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    v28 = v9;
    if ( v9 )
    {
      *v9 = 0LL;
      v9[1] = 0LL;
      *((_DWORD *)v9 + 3) = 0;
      *((_QWORD *)v9 + 2) = 0LL;
      *((_DWORD *)v9 + 6) = 1;
      *((_QWORD *)v9 + 4) = 0LL;
      ++CKsNotificationsMonitor::m_cRefAll;
      *(_QWORD *)v9 = &CKsSoftwareNotificationsMonitor::`vftable';
      v28 = 0LL;
      if ( ((int (__fastcall *)(struct _RTL_CRITICAL_SECTION *, __int64, GUID *, _OWORD **))v27->DebugInfo[2].CriticalSection)(
             v27,
             23LL,
             &GUID_fbe4a6da_1a5e_4633_a491_9a9ff7f97a30,
             &v28) < 0
        || (*(int (__fastcall **)(_OWORD *, void *, __int64))(*(_QWORD *)v28 + 24LL))(v28, &gConnectorEnablingInfo, 2LL) >= 0 )
      {
        v11 = v27;
        lpCriticalSection = 0LL;
        v12 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v10 + 4);
        if ( v12 != v27 )
        {
          if ( v27 )
          {
            ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v27->DebugInfo->CriticalSection)(v27);
            v12 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v10 + 4);
          }
          if ( v12 )
            ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v12->DebugInfo->ProcessLocksList.Flink)(v12);
          *((_QWORD *)v10 + 4) = v11;
        }
        v13 = -1LL;
        do
          ++v13;
        while ( *(_WORD *)(a1 + 2 * v13) );
        v14 = 2 * v13 + 2;
        v15 = CoTaskMemAlloc(v14);
        *((_QWORD *)v10 + 2) = v15;
        if ( !v15 )
        {
          v22 = -2147024882;
LABEL_33:
          if ( lpCriticalSection )
            ((void (__fastcall *)(LPCRITICAL_SECTION))lpCriticalSection->DebugInfo->ProcessLocksList.Flink)(lpCriticalSection);
          if ( v22 >= 0 )
          {
            lpCriticalSection = &g_csKsNotificationMonitors;
            v26 = 0;
            ATL::CCritSecLock::Lock(&lpCriticalSection);
            ProcessHeap = GetProcessHeap();
            v24 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
            if ( v24 )
            {
              *v24 = 0LL;
              v24[1] = 0LL;
              v24[2] = v10;
              v24[1] = qword_1801C2D78;
              if ( qword_1801C2D78 )
                *(_QWORD *)qword_1801C2D78 = v24;
              else
                g_lstKsNotificationMonitors = v24;
              qword_1801C2D78 = (__int64)v24;
              ++dword_1801C2D80;
              (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v10 + 8LL))(v10);
            }
            if ( v26 )
              LeaveCriticalSection(lpCriticalSection);
          }
          (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v10 + 16LL))(v10);
          if ( v28 )
            (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v28 + 16LL))(v28);
          goto LABEL_44;
        }
        v16 = v14 >> 1;
        if ( v16 - 1 > 0x7FFFFFFE )
        {
          if ( !v16 )
            goto LABEL_24;
        }
        else
        {
          v17 = 2147483646 - v16;
          v18 = a1 - (_QWORD)v15;
          while ( v16 + v17 )
          {
            v19 = *(_WORD *)((char *)v15 + v18);
            if ( !v19 )
            {
              if ( v16 )
                break;
LABEL_55:
              --v15;
              break;
            }
            *v15++ = v19;
            if ( !--v16 )
              goto LABEL_55;
          }
        }
        *v15 = 0;
LABEL_24:
        v20 = lpCriticalSection;
        if ( lpCriticalSection != v11 )
        {
          v21 = lpCriticalSection;
          v20 = 0LL;
          lpCriticalSection = 0LL;
          if ( v11 )
          {
            ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *, GUID *, LPCRITICAL_SECTION *))v11->DebugInfo->Type)(
              v11,
              &GUID_9c2c4058_23f5_41de_877a_df3af236a09e,
              &lpCriticalSection);
            v20 = lpCriticalSection;
          }
          if ( v21 )
          {
            ((void (__fastcall *)(LPCRITICAL_SECTION))v21->DebugInfo->ProcessLocksList.Flink)(v21);
            v20 = lpCriticalSection;
          }
        }
        v22 = (*(__int64 (__fastcall **)(LPCRITICAL_SECTION, __int64))&v20->DebugInfo->EntryCount)(
                v20,
                (__int64)v10 + 8);
        if ( v22 >= 0 )
        {
          v22 = ((__int64 (__fastcall *)(LPCRITICAL_SECTION, char *))lpCriticalSection->DebugInfo->ProcessLocksList.Blink)(
                  lpCriticalSection,
                  (char *)v10 + 28);
          if ( v22 >= 0 )
          {
            v22 = ((__int64 (__fastcall *)(struct _RTL_CRITICAL_SECTION *, GUID *, _OWORD *))v11->DebugInfo[2].ProcessLocksList.Flink)(
                    v11,
                    &CKsNotificationsMonitor::m_ctx,
                    v10);
            if ( v22 >= 0 )
              *((_DWORD *)v10 + 3) = 1;
          }
        }
        goto LABEL_33;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v28);
    }
LABEL_44:
    v8 = v27;
  }
  if ( v8 )
    ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v8->DebugInfo->ProcessLocksList.Flink)(v8);
  if ( *a3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
  if ( *a4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 16LL))(*a4);
}
