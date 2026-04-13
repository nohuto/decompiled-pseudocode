/*
 * XREFs of ?Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18007B148
 * Callers:
 *     ??R_lambda_141232aca07f559541c51213e97da677_@@QEBAXXZ @ 0x180076920 (--R_lambda_141232aca07f559541c51213e97da677_@@QEBAXXZ.c)
 *     ?GetContentIdAndPath@NotificationsTargetedContentClient@ToastNotification@@AEAAXPEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x180078240 (-GetContentIdAndPath@NotificationsTargetedContentClient@ToastNotification@@AEAAXPEBGAEAV-$basic_.c)
 *     ??0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x1800C9C1C (--0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV-$map@V-$.c)
 *     ?EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x1800D5364 (-EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 *     ?GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA?AV?$unordered_set@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@XZ @ 0x1800D672C (-GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA-AV-$unordered_set@V-$basic_s.c)
 *     ?InitializeNotificationTemplate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x1800D6E58 (-InitializeNotificationTemplate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?_Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBD0J1PEAD@Z @ 0x180073AF0 (-_Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBD0J1PEAD@Z.c)
 */

bool wil::details::in1diag3::Throw_HrIfMsg(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4,
        char a5,
        unsigned __int64 a6,
        const char *a7,
        ...)
{
  void *v8; // [rsp+20h] [rbp-28h]
  char *v9; // [rsp+38h] [rbp-10h]
  const char *retaddr; // [rsp+48h] [rbp+0h]

  if ( a5 )
  {
    LODWORD(v8) = (_DWORD)a4;
    wil::details::in1diag3::_Throw_HrMsg(this, a2, a3, retaddr, v8, a6, (char *)&a7, v9);
  }
  return 0;
}
