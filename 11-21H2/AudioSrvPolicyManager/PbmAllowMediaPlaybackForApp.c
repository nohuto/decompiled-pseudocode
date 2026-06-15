/*
 * XREFs of PbmAllowMediaPlaybackForApp @ 0x1800285B0
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

__int64 __fastcall PbmAllowMediaPlaybackForApp(void *a1, void *a2, __int64 a3)
{
  unsigned int v4; // eax
  __int64 result; // rax
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  const char *v9; // r9
  __int64 v10; // [rsp+20h] [rbp-88h] BYREF
  __int64 v11; // [rsp+28h] [rbp-80h]
  unsigned int v12[4]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v13; // [rsp+40h] [rbp-68h] BYREF
  __int64 v14; // [rsp+50h] [rbp-58h]
  unsigned int v15; // [rsp+58h] [rbp-50h]
  _QWORD v16[4]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v17; // [rsp+80h] [rbp-28h]
  _QWORD *v18; // [rsp+98h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  void *v20; // [rsp+B8h] [rbp+10h] BYREF
  unsigned int v21; // [rsp+C8h] [rbp+20h] BYREF

  v20 = a2;
  v4 = RpcClientProcessSessionId(a1, v12, &v21);
  if ( v4 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             160LL,
             (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
             (const char *)v4);
  try
  {
    std::make_shared<std::wstring,unsigned short const * &>(&v10, &v20);
    v6 = v11;
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      v6 = v11;
    }
    v14 = a3;
    v15 = v21;
    v16[0] = off_180048858;
    v16[1] = v10;
    v16[2] = v6;
    v13 = 0LL;
    v16[3] = a3;
    v17 = v21;
    v18 = v16;
    std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)&v13);
    v7 = QueueGenericWorkItem(v16);
    v8 = v7;
    if ( v7 >= 0 )
    {
      std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)&v10);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA6,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
        (const char *)(unsigned int)v7);
      std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)&v10);
      result = v8;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xAA,
                           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
                           v9);
  }
  return result;
}
