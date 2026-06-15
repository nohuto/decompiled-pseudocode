/*
 * XREFs of ??1?$unique_ptr@UMEDIAMANAGER_NOTIFICATION_BLOCK@@U?$default_delete@UMEDIAMANAGER_NOTIFICATION_BLOCK@@@std@@@std@@QEAA@XZ @ 0x180033F34
 * Callers:
 *     ?GenerateMediaManagerNotification@@YAJAEAV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@AEAV?$unique_ptr@UMEDIAMANAGER_NOTIFICATION_BLOCK@@U?$default_delete@UMEDIAMANAGER_NOTIFICATION_BLOCK@@@std@@@2@@Z @ 0x1800353EC (-GenerateMediaManagerNotification@@YAJAEAV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplicati.c)
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x18003969C (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 *     _GenerateMediaManagerNotification_::_1_::dtor$0 @ 0x180049944 (_GenerateMediaManagerNotification_--_1_--dtor$0.c)
 *     _TsSessionSendAppManagerNotification_::_1_::dtor$1 @ 0x180049B8D (_TsSessionSendAppManagerNotification_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016C28 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<MEDIAMANAGER_NOTIFICATION_BLOCK>::~unique_ptr<MEDIAMANAGER_NOTIFICATION_BLOCK>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
