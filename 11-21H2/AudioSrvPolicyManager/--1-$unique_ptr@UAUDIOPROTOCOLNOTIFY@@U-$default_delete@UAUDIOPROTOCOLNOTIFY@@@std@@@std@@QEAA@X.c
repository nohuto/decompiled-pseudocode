/*
 * XREFs of ??1?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@QEAA@XZ @ 0x18002B368
 * Callers:
 *     _TsSessionIdAddNotify_::_1_::dtor$1 @ 0x1800461DF (_TsSessionIdAddNotify_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<AUDIOPROTOCOLNOTIFY>::~unique_ptr<AUDIOPROTOCOLNOTIFY>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
