/*
 * XREFs of ?KsNotifications_CreateMonitor@@YAXPEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V?$CComPtr@UIConnector@@@ATL@@V?$CComPtr@UIDeviceTopology@@@3@@Z @ 0x18002849C
 * Callers:
 *     ?KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z @ 0x180028330 (-KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Initialize@CKsNotificationsMonitor@@QEAAJPEAUIPart@@PEBG@Z @ 0x180028750 (-Initialize@CKsNotificationsMonitor@@QEAAJPEAUIPart@@PEBG@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180028934 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
CKsNotificationsMonitor *__fastcall KsNotifications_CreateMonitor(
        unsigned __int16 *a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  CKsNotificationsMonitor *result; // rax
  __int64 (__fastcall ***v8)(_QWORD, GUID *, struct IPart **); // r11
  struct IPart *v9; // rcx
  CKsNotificationsMonitor *v10; // rbx
  HANDLE ProcessHeap; // rax
  _QWORD *v12; // rax
  struct IPart *v13; // [rsp+30h] [rbp-20h] BYREF
  CKsNotificationsMonitor *v14; // [rsp+38h] [rbp-18h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-10h] BYREF
  char v16; // [rsp+48h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+18h] BYREF

  result = (CKsNotificationsMonitor *)&retaddr;
  v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IPart **))*a3;
  v9 = 0LL;
  v13 = 0LL;
  if ( v8 )
  {
    result = (CKsNotificationsMonitor *)(**v8)(v8, &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9, &v13);
    v9 = v13;
  }
  if ( v9 )
  {
    result = (CKsNotificationsMonitor *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = result;
    v14 = result;
    if ( result )
    {
      *(_OWORD *)result = 0LL;
      *((_OWORD *)result + 1) = 0LL;
      *((_QWORD *)result + 4) = 0LL;
      *((_DWORD *)result + 3) = 0;
      *((_QWORD *)result + 2) = 0LL;
      *((_DWORD *)result + 6) = 1;
      *((_QWORD *)result + 4) = 0LL;
      ++CKsNotificationsMonitor::m_cRefAll;
      *(_QWORD *)result = &CKsSoftwareNotificationsMonitor::`vftable';
      v14 = 0LL;
      if ( ((int (__fastcall *)(struct IPart *, __int64, GUID *, CKsNotificationsMonitor **))v13->lpVtbl->Activate)(
             v13,
             23LL,
             &GUID_fbe4a6da_1a5e_4633_a491_9a9ff7f97a30,
             &v14) >= 0
        && (*(int (__fastcall **)(CKsNotificationsMonitor *, void *, __int64))(*(_QWORD *)v14 + 24LL))(
             v14,
             &gConnectorEnablingInfo,
             2LL) < 0 )
      {
        result = (CKsNotificationsMonitor *)wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v14);
      }
      else
      {
        if ( (int)CKsNotificationsMonitor::Initialize(v10, v13, a1) >= 0 )
        {
          lpCriticalSection = &g_csKsNotificationMonitors;
          v16 = 0;
          ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
          ProcessHeap = GetProcessHeap();
          v12 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
          if ( v12 )
          {
            *v12 = 0LL;
            v12[1] = 0LL;
            v12[2] = v10;
            v12[1] = qword_1801CFEB8;
            *v12 = 0LL;
            if ( qword_1801CFEB8 )
              *(_QWORD *)qword_1801CFEB8 = v12;
            else
              g_lstKsNotificationMonitors = v12;
            qword_1801CFEB8 = (__int64)v12;
            ++dword_1801CFEC0;
            (*(void (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v10 + 8LL))(v10);
          }
          if ( v16 )
            LeaveCriticalSection(lpCriticalSection);
        }
        result = (CKsNotificationsMonitor *)(*(__int64 (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v10 + 16LL))(v10);
        if ( v14 )
          result = (CKsNotificationsMonitor *)(*(__int64 (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
    v9 = v13;
  }
  if ( v9 )
    result = (CKsNotificationsMonitor *)((__int64 (__fastcall *)(struct IPart *))v9->lpVtbl->Release)(v9);
  if ( *a3 )
    result = (CKsNotificationsMonitor *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
  if ( *a4 )
    return (CKsNotificationsMonitor *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 16LL))(*a4);
  return result;
}
