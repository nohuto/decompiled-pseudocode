/*
 * XREFs of ?TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18003889C
 * Callers:
 *     ?TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180039058 (-TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1_Flist_node_remove_op@?$forward_list@V?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@V?$allocator@V?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800344A8 (--1_Flist_node_remove_op@-$forward_list@V-$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U-$default_delete@UA.c)
 */

__int64 __fastcall TsSessionDeleteNotify(struct TSSession *a1, struct AUDIOPROTOCOLNOTIFY *a2)
{
  _QWORD **v2; // rcx
  char v3; // bl
  _QWORD *v4; // rax
  __int64 *v5; // r8
  _QWORD **v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  __int64 *v9; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (_QWORD **)((char *)a1 + 16);
  v3 = 0;
  v9 = &v8;
  v8 = 0LL;
  v7 = v2;
  v4 = *v2;
  while ( v4 )
  {
    if ( v3 || (struct AUDIOPROTOCOLNOTIFY *)v4[1] != a2 )
    {
      v2 = (_QWORD **)v4;
      v4 = (_QWORD *)*v4;
    }
    else
    {
      v5 = *v2;
      v3 = 1;
      v4 = (_QWORD *)**v2;
      *v5 = 0LL;
      *v2 = v4;
      *v9 = (__int64)v5;
      v9 = v5;
    }
  }
  std::forward_list<std::unique_ptr<AUDIOPROTOCOLNOTIFY>>::_Flist_node_remove_op::~_Flist_node_remove_op((__int64)&v7);
  if ( v3 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x408,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)0x80070490LL);
  return 2147943568LL;
}
