/*
 * XREFs of ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z @ 0x180026864
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x180025F90 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEBG@Z @ 0x18000839C (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBG@std@@YA-AV-.c)
 *     ??1?$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ @ 0x180008AC0 (--1-$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180032708 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 */

__int64 __fastcall CHostedAppInteractivityManager::QueueHostedAppInteractivityChangedWorkItem(
        CHostedAppInteractivityManager *this,
        const unsigned __int16 *a2,
        __int64 a3,
        int a4,
        int a5)
{
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // ebx
  const char *v10; // r9
  __int64 result; // rax
  __int64 v12; // [rsp+20h] [rbp-78h] BYREF
  __int64 v13; // [rsp+28h] [rbp-70h]
  __int128 v14; // [rsp+30h] [rbp-68h] BYREF
  __int64 v15; // [rsp+40h] [rbp-58h]
  int v16; // [rsp+48h] [rbp-50h]
  int v17; // [rsp+4Ch] [rbp-4Ch]
  _QWORD v18[4]; // [rsp+50h] [rbp-48h] BYREF
  int v19; // [rsp+70h] [rbp-28h]
  int v20; // [rsp+74h] [rbp-24h]
  _QWORD *v21; // [rsp+88h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  void *v23; // [rsp+A8h] [rbp+10h] BYREF

  v23 = (void *)a2;
  try
  {
    std::make_shared<std::wstring,unsigned short const * &>(&v12, &v23);
    v7 = v13;
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
      v7 = v13;
    }
    v15 = a3;
    v16 = a4;
    v17 = a5;
    v18[0] = off_1800486A8;
    v18[1] = v12;
    v18[2] = v7;
    v14 = 0LL;
    v18[3] = a3;
    v19 = a4;
    v20 = a5;
    v21 = v18;
    std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)&v14);
    v8 = QueueGenericWorkItem(v18);
    v9 = v8;
    if ( v8 >= 0 )
    {
      std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)&v12);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1EE,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\pickerhostcontext.cpp",
        (const char *)(unsigned int)v8);
      std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)&v12);
      result = v9;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1F2,
                           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\pickerhostcontext.cpp",
                           v10);
  }
  return result;
}
