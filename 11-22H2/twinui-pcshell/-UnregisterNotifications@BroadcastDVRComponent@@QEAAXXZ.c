/*
 * XREFs of ?UnregisterNotifications@BroadcastDVRComponent@@QEAAXXZ @ 0x1801660C4
 * Callers:
 *     ??1BroadcastDVRComponent@@UEAA@XZ @ 0x1801653E0 (--1BroadcastDVRComponent@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall BroadcastDVRComponent::UnregisterNotifications(BroadcastDVRComponent *this)
{
  void *v2; // rcx
  HKEY v3; // rcx
  void *v4; // rcx
  HKEY v5; // rcx
  void *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  if ( *((_QWORD *)this + 49) )
  {
    v2 = (void *)*((_QWORD *)this + 48);
    if ( v2 )
    {
      UnregisterWaitEx(v2, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
      *((_QWORD *)this + 48) = 0LL;
    }
    CloseHandle(*((HANDLE *)this + 49));
    *((_QWORD *)this + 49) = 0LL;
  }
  v3 = (HKEY)*((_QWORD *)this + 47);
  if ( v3 )
  {
    RegCloseKey(v3);
    *((_QWORD *)this + 47) = 0LL;
  }
  if ( *((_QWORD *)this + 53) )
  {
    v4 = (void *)*((_QWORD *)this + 52);
    if ( v4 )
    {
      UnregisterWaitEx(v4, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
      *((_QWORD *)this + 52) = 0LL;
    }
    CloseHandle(*((HANDLE *)this + 53));
    *((_QWORD *)this + 53) = 0LL;
  }
  v5 = (HKEY)*((_QWORD *)this + 51);
  if ( v5 )
  {
    RegCloseKey(v5);
    *((_QWORD *)this + 51) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 58);
  if ( v6 )
  {
    PowerSettingUnregisterNotification(v6);
    *((_QWORD *)this + 58) = 0LL;
  }
  v7 = *((_QWORD *)this + 60);
  if ( v7 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v7);
    *((_QWORD *)this + 60) = 0LL;
  }
  v8 = *((_QWORD *)this + 59);
  if ( v8 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v8);
    *((_QWORD *)this + 59) = 0LL;
  }
}
