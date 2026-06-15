/*
 * XREFs of ??1?$unique_ptr@UMEDIAMANAGER_NOTIFICATION_BLOCK@@U?$default_delete@UMEDIAMANAGER_NOTIFICATION_BLOCK@@@std@@@std@@QEAA@XZ @ 0x18002B3F4
 * Callers:
 *     _GenerateMediaManagerNotification_::_1_::dtor$0 @ 0x180045F90 (_GenerateMediaManagerNotification_--_1_--dtor$0.c)
 *     _TsSessionSendAppManagerNotification_::_1_::dtor$1 @ 0x180046281 (_TsSessionSendAppManagerNotification_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<MEDIAMANAGER_NOTIFICATION_BLOCK>::~unique_ptr<MEDIAMANAGER_NOTIFICATION_BLOCK>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
