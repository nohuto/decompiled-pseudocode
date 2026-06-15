/*
 * XREFs of ?UnregisterSessionDisplayNotificationCallback@TSSession@@QEAAXXZ @ 0x180039840
 * Callers:
 *     ??1TSSession@@QEAA@XZ @ 0x1800340EC (--1TSSession@@QEAA@XZ.c)
 *     ?TsSessionIdLogoff@@YAJK@Z @ 0x1800388BC (-TsSessionIdLogoff@@YAJK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall TSSession::UnregisterSessionDisplayNotificationCallback(TSSession *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 128);
  if ( v2 )
  {
    PowerSettingUnregisterNotification(v2);
    *((_QWORD *)this + 128) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 129);
  if ( v3 )
  {
    PowerSettingUnregisterNotification(v3);
    *((_QWORD *)this + 129) = 0LL;
  }
  *((_DWORD *)this + 253) = 1;
}
