/*
 * XREFs of ?KsNotifications_AudioInterfaceRemoval@@YAXPEBG@Z @ 0x180002C9C
 * Callers:
 *     ?DeviceRemovalEvent@CAudioSrv@@UEAAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x180002BF0 (-DeviceRemovalEvent@CAudioSrv@@UEAAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 * Callees:
 *     ?Dispose@CKsNotificationsMonitor@@QEAAXXZ @ 0x180002E20 (-Dispose@CKsNotificationsMonitor@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180028934 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall KsNotifications_AudioInterfaceRemoval(const unsigned __int16 *a1)
{
  LPVOID *v2; // r8
  LPVOID *v3; // rdi
  LPVOID *v4; // rbx
  CKsNotificationsMonitor *v5; // rsi
  const unsigned __int16 *v6; // rax
  int v7; // edx
  int v8; // ecx
  HANDLE ProcessHeap; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  lpCriticalSection = &g_csKsNotificationMonitors;
  v11 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v2 = (LPVOID *)g_lstKsNotificationMonitors;
  v3 = (LPVOID *)g_lstKsNotificationMonitors;
  if ( g_lstKsNotificationMonitors )
  {
    do
    {
      v4 = v3;
      v5 = (CKsNotificationsMonitor *)v3[2];
      v3 = (LPVOID *)*v3;
      v6 = a1;
      do
      {
        v7 = *(const unsigned __int16 *)((char *)v6 + *((_QWORD *)v5 + 2) - (_QWORD)a1);
        v8 = *v6 - v7;
        if ( v8 )
          break;
        ++v6;
      }
      while ( v7 );
      if ( !v8 )
      {
        if ( v4 == v2 )
          g_lstKsNotificationMonitors = *v4;
        else
          *(_QWORD *)v4[1] = *v4;
        if ( v4 == (LPVOID *)qword_1801CFEB8 )
          qword_1801CFEB8 = (__int64)v4[1];
        else
          *((_QWORD *)*v4 + 1) = v4[1];
        --dword_1801CFEC0;
        *v4 = 0LL;
        v4[1] = 0LL;
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v4);
        CKsNotificationsMonitor::Dispose(v5);
        (*(void (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v5 + 16LL))(v5);
        v2 = (LPVOID *)g_lstKsNotificationMonitors;
      }
    }
    while ( v3 );
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
}
