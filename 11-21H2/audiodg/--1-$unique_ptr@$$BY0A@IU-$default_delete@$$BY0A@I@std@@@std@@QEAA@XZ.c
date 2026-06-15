/*
 * XREFs of ??1?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@std@@@std@@QEAA@XZ @ 0x140064D64
 * Callers:
 *     _CAPOProcessingHost::RegisterAPONotifications_::_1_::dtor$5 @ 0x14003961A (_CAPOProcessingHost--RegisterAPONotifications_--_1_--dtor$5.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x14002FC80 (--_V@YAXPEAX@Z.c)
 */

void __fastcall std::unique_ptr<unsigned int [0]>::~unique_ptr<unsigned int [0]>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete[](v1);
}
