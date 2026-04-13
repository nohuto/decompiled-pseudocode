/*
 * XREFs of ??$?8_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@PEB_W@Z @ 0x1800C2F50
 * Callers:
 *     ?MakeLaunchUriService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800C66E0 (-MakeLaunchUriService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Creat.c)
 *     ??0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x1800C9C1C (--0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV-$map@V-$.c)
 *     ?LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800CA7CC (-LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?InitializeNotificationTemplate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x1800D6E58 (-InitializeNotificationTemplate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::operator==<wchar_t>(_QWORD *a1, _WORD *a2)
{
  int v2; // eax
  _WORD *v3; // r9
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rdx

  v2 = -1;
  v3 = a2;
  if ( *a2 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a2[v4] );
  }
  else
  {
    v4 = 0LL;
  }
  v5 = a1[2];
  v6 = v5;
  if ( v5 >= v4 )
    v6 = v4;
  if ( a1[3] >= 8uLL )
    a1 = (_QWORD *)*a1;
  if ( v6 )
  {
    while ( *(_WORD *)a1 == *v3 )
    {
      a1 = (_QWORD *)((char *)a1 + 2);
      ++v3;
      if ( !--v6 )
        goto LABEL_12;
    }
    v2 = *(_WORD *)a1 < *v3 ? -1 : 1;
  }
  else
  {
LABEL_12:
    if ( v5 >= v4 )
      v2 = v5 != v4;
  }
  return v2 == 0;
}
