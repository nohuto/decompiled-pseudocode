/*
 * XREFs of ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x18000D360
 * Callers:
 *     ?OnStreamCreatedInTsSession@CDuckingManager@@UEAAXK@Z @ 0x180011DF0 (-OnStreamCreatedInTsSession@CDuckingManager@@UEAAXK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEBG@Z @ 0x18000839C (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBG@std@@YA-AV-.c)
 *     ??1?$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ @ 0x180008AC0 (--1-$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180032708 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowsPolicyManager::SetDuckingGainForId(
        CWindowsPolicyManager *this,
        DWORD a2,
        const unsigned __int16 *a3,
        float a4)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  int v6; // ecx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  const char *v10; // r9
  __int64 result; // rax
  __int64 v12; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+28h] [rbp-A0h]
  struct TSSession *v14; // [rsp+30h] [rbp-98h] BYREF
  DWORD v15; // [rsp+40h] [rbp-88h]
  __int128 v16; // [rsp+48h] [rbp-80h] BYREF
  float v17; // [rsp+58h] [rbp-70h]
  __int64 (__fastcall **v18)(); // [rsp+60h] [rbp-68h] BYREF
  DWORD v19; // [rsp+68h] [rbp-60h]
  __int64 v20; // [rsp+70h] [rbp-58h]
  __int64 v21; // [rsp+78h] [rbp-50h]
  float v22; // [rsp+80h] [rbp-48h]
  __int64 (__fastcall ***v23)(); // [rsp+98h] [rbp-30h]
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+A0h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  void *v26; // [rsp+E0h] [rbp+18h] BYREF

  v26 = (void *)a3;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v24 = v5;
  try
  {
    if ( (int)TsSessionFromSessionId(a2, 1, &v14) >= 0 )
    {
      if ( a4 <= -6.0 )
      {
        if ( a4 <= -18.0 )
          v6 = a4 > -96.0;
        else
          v6 = 2;
      }
      else
      {
        v6 = 3;
      }
      *((_DWORD *)v14 + 272) = v6;
    }
    if ( v5 )
      LeaveCriticalSection(v5);
    std::make_shared<std::wstring,unsigned short const * &>(&v12, &v26);
    v15 = a2;
    v7 = v13;
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
      v7 = v13;
    }
    v17 = a4;
    v18 = off_180047130;
    v19 = a2;
    v20 = v12;
    v21 = v7;
    v16 = 0LL;
    v22 = a4;
    v23 = &v18;
    std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)&v16);
    v8 = QueueGenericWorkItem(&v18);
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
        (void *)0x200,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
        (const char *)(unsigned int)v8);
      std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)&v12);
      result = v9;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x204,
                           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
                           v10);
  }
  return result;
}
