/*
 * XREFs of PbmReportApplicationState @ 0x180031960
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180002550 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800025C0 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x1800057D0 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEBG@Z @ 0x1800140AC (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBG@std@@YA-AV-.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180015B90 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001DFCC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall PbmReportApplicationState(void *a1, __int64 a2, __int64 a3, const char *a4)
{
  int v4; // ebx
  unsigned int v6; // eax
  __int64 result; // rax
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v11; // [rsp+28h] [rbp-80h] BYREF
  __int64 v12; // [rsp+30h] [rbp-78h] BYREF
  std::_Ref_count_base *v13; // [rsp+38h] [rbp-70h]
  __int64 v14[4]; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v15; // [rsp+60h] [rbp-48h]
  int v16; // [rsp+64h] [rbp-44h]
  __int64 *v17; // [rsp+78h] [rbp-30h]
  _QWORD v18[5]; // [rsp+80h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v20; // [rsp+B8h] [rbp+10h] BYREF

  v20 = a2;
  try
  {
    v4 = (int)a4;
    if ( g_ApplicationManager )
    {
      v6 = RpcClientProcessSessionId(a1, &v11, &v10);
      if ( v6 )
        return wil::details::in1diag3::Return_Win32(
                 retaddr,
                 596LL,
                 (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
                 (const char *)v6);
      std::make_shared<std::wstring,unsigned short const * &>(&v12, &v20);
      std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(v18, &v12);
      v14[0] = (__int64)off_18004EDB0;
      v14[1] = v18[0];
      v14[2] = v18[1];
      v14[3] = a3;
      v15 = v10;
      v16 = v4;
      v17 = v14;
      v8 = QueueGenericWorkItem(v14);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x25A,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
          (const char *)(unsigned int)v8);
        if ( v13 )
          std::_Ref_count_base::_Decref(v13);
        return v9;
      }
      if ( v13 )
        std::_Ref_count_base::_Decref(v13);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x25F,
                           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
                           a4);
  }
  return result;
}
