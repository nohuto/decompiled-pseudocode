/*
 * XREFs of PbmReportApplicationState @ 0x180028E20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEBG@Z @ 0x18000839C (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBG@std@@YA-AV-.c)
 *     ??1?$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ @ 0x180008AC0 (--1-$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000C5FC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18002CA4C (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180032708 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 */

__int64 __fastcall PbmReportApplicationState(void *a1, void *a2, __int64 a3, const char *a4)
{
  int v4; // ebx
  unsigned int v6; // eax
  __int64 result; // rax
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // [rsp+20h] [rbp-98h] BYREF
  __int64 v12; // [rsp+28h] [rbp-90h] BYREF
  __int64 v13; // [rsp+30h] [rbp-88h]
  unsigned int v14[4]; // [rsp+38h] [rbp-80h] BYREF
  __int128 v15; // [rsp+48h] [rbp-70h] BYREF
  __int64 v16; // [rsp+58h] [rbp-60h]
  unsigned int v17; // [rsp+60h] [rbp-58h]
  int v18; // [rsp+64h] [rbp-54h]
  _QWORD v19[4]; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v20; // [rsp+88h] [rbp-30h]
  int v21; // [rsp+8Ch] [rbp-2Ch]
  _QWORD *v22; // [rsp+A0h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  void *v24; // [rsp+C8h] [rbp+10h] BYREF

  v24 = a2;
  try
  {
    v4 = (int)a4;
    if ( g_ApplicationManager )
    {
      v6 = RpcClientProcessSessionId(a1, v14, &v11);
      if ( v6 )
        return wil::details::in1diag3::Return_Win32(
                 retaddr,
                 584LL,
                 (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
                 (const char *)v6);
      std::make_shared<std::wstring,unsigned short const * &>(&v12, &v24);
      v8 = v13;
      if ( v13 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
        v8 = v13;
      }
      v16 = a3;
      v17 = v11;
      v18 = v4;
      v19[0] = off_180048768;
      v19[1] = v12;
      v19[2] = v8;
      v15 = 0LL;
      v19[3] = a3;
      v20 = v11;
      v21 = v4;
      v22 = v19;
      std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)&v15);
      v9 = QueueGenericWorkItem(v19);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x24E,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
          (const char *)(unsigned int)v9);
        std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)&v12);
        return v10;
      }
      std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)&v12);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x253,
                           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
                           a4);
  }
  return result;
}
