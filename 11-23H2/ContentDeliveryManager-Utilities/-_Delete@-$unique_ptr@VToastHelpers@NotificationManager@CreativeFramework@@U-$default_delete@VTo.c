/*
 * XREFs of ?_Delete@?$unique_ptr@VToastHelpers@NotificationManager@CreativeFramework@@U?$default_delete@VToastHelpers@NotificationManager@CreativeFramework@@@std@@@std@@AEAAXXZ @ 0x1800B77EC
 * Callers:
 *     ??0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x1800B6CC8 (--0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV-$map@V-$.c)
 *     ??1?$unique_ptr@VToastHelpers@NotificationManager@CreativeFramework@@U?$default_delete@VToastHelpers@NotificationManager@CreativeFramework@@@std@@@std@@QEAA@XZ @ 0x1800B7184 (--1-$unique_ptr@VToastHelpers@NotificationManager@CreativeFramework@@U-$default_delete@VToastHel.c)
 *     ??1NotificationManagerService@Actions@CreativeFramework@@UEAA@XZ @ 0x1800B7190 (--1NotificationManagerService@Actions@CreativeFramework@@UEAA@XZ.c)
 * Callees:
 *     ??1ToastHelpers@NotificationManager@CreativeFramework@@QEAA@XZ @ 0x1800B71F0 (--1ToastHelpers@NotificationManager@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<CreativeFramework::NotificationManager::ToastHelpers>::_Delete(
        CreativeFramework::NotificationManager::ToastHelpers **a1)
{
  CreativeFramework::NotificationManager::ToastHelpers *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CreativeFramework::NotificationManager::ToastHelpers::~ToastHelpers(*a1);
    operator delete(v1);
  }
}
