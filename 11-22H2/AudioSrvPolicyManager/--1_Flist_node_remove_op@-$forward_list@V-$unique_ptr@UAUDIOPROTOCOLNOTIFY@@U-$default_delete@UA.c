/*
 * XREFs of ??1_Flist_node_remove_op@?$forward_list@V?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@V?$allocator@V?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800344A8
 * Callers:
 *     ?TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18003889C (-TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000F520 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@QEAA@XZ @ 0x180034088 (--1-$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U-$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@QEAA@X.c)
 */

void __fastcall std::forward_list<std::unique_ptr<AUDIOPROTOCOLNOTIFY>>::_Flist_node_remove_op::~_Flist_node_remove_op(
        __int64 a1)
{
  void **v1; // rdi
  void **v2; // rbx

  v1 = *(void ***)(a1 + 8);
  if ( v1 )
  {
    do
    {
      v2 = (void **)*v1;
      std::unique_ptr<AUDIOPROTOCOLNOTIFY>::~unique_ptr<AUDIOPROTOCOLNOTIFY>(v1 + 1);
      std::_Deallocate<16,0>(v1, 0x10uLL);
      v1 = v2;
    }
    while ( v2 );
  }
}
