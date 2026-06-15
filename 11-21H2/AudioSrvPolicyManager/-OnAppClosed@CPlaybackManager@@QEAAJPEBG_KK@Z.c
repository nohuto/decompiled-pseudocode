/*
 * XREFs of ?OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z @ 0x180026DB8
 * Callers:
 *     PbmReportAppClosing @ 0x180028D30 (PbmReportAppClosing.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEBG@Z @ 0x18000839C (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBG@std@@YA-AV-.c)
 *     ??1?$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ @ 0x180008AC0 (--1-$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180032708 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 */

__int64 __fastcall CPlaybackManager::OnAppClosed(
        CPlaybackManager *this,
        const unsigned __int16 *a2,
        __int64 a3,
        int a4)
{
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  const char *v9; // r9
  __int64 result; // rax
  __int64 v11; // [rsp+20h] [rbp-78h] BYREF
  __int64 v12; // [rsp+28h] [rbp-70h]
  __int128 v13; // [rsp+30h] [rbp-68h] BYREF
  __int64 v14; // [rsp+40h] [rbp-58h]
  int v15; // [rsp+48h] [rbp-50h]
  _QWORD v16[4]; // [rsp+50h] [rbp-48h] BYREF
  int v17; // [rsp+70h] [rbp-28h]
  _QWORD *v18; // [rsp+88h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  void *v20; // [rsp+A8h] [rbp+10h] BYREF

  v20 = (void *)a2;
  try
  {
    std::make_shared<std::wstring,unsigned short const * &>(&v11, &v20);
    v6 = v12;
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      v6 = v12;
    }
    v14 = a3;
    v15 = a4;
    v16[0] = off_1800486D8;
    v16[1] = v11;
    v16[2] = v6;
    v13 = 0LL;
    v16[3] = a3;
    v17 = a4;
    v18 = v16;
    std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)&v13);
    v7 = QueueGenericWorkItem(v16);
    v8 = v7;
    if ( v7 >= 0 )
    {
      std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)&v11);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7D,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
        (const char *)(unsigned int)v7);
      std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)&v11);
      result = v8;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x81,
                           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
                           v9);
  }
  return result;
}
