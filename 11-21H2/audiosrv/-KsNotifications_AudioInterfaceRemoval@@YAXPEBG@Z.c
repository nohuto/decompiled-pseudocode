/*
 * XREFs of ?KsNotifications_AudioInterfaceRemoval@@YAXPEBG@Z @ 0x180125138
 * Callers:
 *     ?DeviceRemovalEvent@CAudioSrv@@UEAAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x1800C3610 (-DeviceRemovalEvent@CAudioSrv@@UEAAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18004DA6C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Dispose@CKsNotificationsMonitor@@QEAAXXZ @ 0x180124FC8 (-Dispose@CKsNotificationsMonitor@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall KsNotifications_AudioInterfaceRemoval(const unsigned __int16 *a1)
{
  void **v2; // r9
  void **v3; // rbx
  void **v4; // rcx
  CKsNotificationsMonitor *v5; // rdi
  const unsigned __int16 *v6; // rax
  int v7; // r8d
  int v8; // edx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]

  lpCriticalSection = &g_csKsNotificationMonitors;
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = (void **)g_lstKsNotificationMonitors;
  v3 = (void **)g_lstKsNotificationMonitors;
  if ( g_lstKsNotificationMonitors )
  {
    do
    {
      v4 = v3;
      v5 = (CKsNotificationsMonitor *)v3[2];
      v3 = (void **)*v3;
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
        if ( v4 == (void **)qword_1801C2D78 )
          qword_1801C2D78 = (__int64)v4[1];
        else
          *((_QWORD *)*v4 + 1) = v4[1];
        --dword_1801C2D80;
        *v4 = 0LL;
        v4[1] = 0LL;
        operator delete(v4);
        CKsNotificationsMonitor::Dispose(v5);
        (*(void (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v5 + 16LL))(v5);
        v2 = (void **)g_lstKsNotificationMonitors;
      }
    }
    while ( v3 );
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
}
