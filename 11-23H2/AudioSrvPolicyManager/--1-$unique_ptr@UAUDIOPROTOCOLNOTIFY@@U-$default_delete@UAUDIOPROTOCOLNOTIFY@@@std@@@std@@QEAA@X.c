/*
 * XREFs of ??1?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@QEAA@XZ @ 0x180033EE0
 * Callers:
 *     ??1?$forward_list@V?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@V?$allocator@V?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180033DC8 (--1-$forward_list@V-$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U-$default_delete@UAUDIOPROTOCOLNOTIFY@@@s.c)
 *     ??1TSSession@@QEAA@XZ @ 0x1800340EC (--1TSSession@@QEAA@XZ.c)
 *     ??1_Flist_node_remove_op@?$forward_list@V?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@V?$allocator@V?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180034300 (--1_Flist_node_remove_op@-$forward_list@V-$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U-$default_delete@UA.c)
 *     ?TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x1800380C4 (-TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     _TsSessionIdAddNotify_::_1_::dtor$1 @ 0x180049AEE (_TsSessionIdAddNotify_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016C28 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<AUDIOPROTOCOLNOTIFY>::~unique_ptr<AUDIOPROTOCOLNOTIFY>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
