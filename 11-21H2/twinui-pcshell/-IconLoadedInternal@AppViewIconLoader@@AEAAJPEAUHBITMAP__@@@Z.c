/*
 * XREFs of ?IconLoadedInternal@AppViewIconLoader@@AEAAJPEAUHBITMAP__@@@Z @ 0x180454858
 * Callers:
 *     ?IconLoaded@AppViewIconLoader@@UEAAXPEAUHBITMAP__@@@Z @ 0x180454810 (-IconLoaded@AppViewIconLoader@@UEAAXPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIBufferByteAccess@Streams@Storage@Windows@@@?$com_ptr_t@UIBuffer@Streams@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIBufferByteAccess@Streams@Storage@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801ADF9C (--$query@UIBufferByteAccess@Streams@Storage@Windows@@@-$com_ptr_t@UIBuffer@Streams@Storage@Windo.c)
 *     memcpy_0 @ 0x1801EACEF (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AppViewIconLoader::IconLoadedInternal(AppViewIconLoader *this, HBITMAP a2)
{
  __int64 v4; // rax
  __int64 (*v5)(void); // rax
  int v6; // eax
  int v7; // eax
  _QWORD *v8; // rax
  int v9; // eax
  __int64 v10; // r10
  int v11; // r8d
  int v12; // r9d
  int v13; // ebx
  int v14; // eax
  const char *v15; // r9
  __int64 result; // rax
  __int64 v17; // [rsp+20h] [rbp-48h] BYREF
  _BYTE pv[8]; // [rsp+28h] [rbp-40h] BYREF
  int v19; // [rsp+30h] [rbp-38h]
  int v20; // [rsp+34h] [rbp-34h]
  __int16 v21; // [rsp+3Ah] [rbp-2Eh]
  __int64 v22; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v24; // [rsp+70h] [rbp+8h] BYREF
  __int64 (__fastcall ***v25)(_QWORD, GUID *, _QWORD *); // [rsp+80h] [rbp+18h] BYREF
  __int64 v26; // [rsp+88h] [rbp+20h] BYREF

  v25 = 0LL;
  v4 = **((_QWORD **)this + 5);
  v25 = 0LL;
  v5 = *(__int64 (**)(void))(v4 + 48);
  try
  {
    v6 = v5();
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x25,
        (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewIconFactory.h",
        (const char *)(unsigned int)v6,
        v17);
    v7 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), unsigned int *))(*v25)[7])(
           v25,
           &v24);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x28,
        (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewIconFactory.h",
        (const char *)(unsigned int)v7,
        v17);
    v8 = wil::com_ptr_t<Windows::Storage::Streams::IBuffer,wil::err_exception_policy>::query<Windows::Storage::Streams::IBufferByteAccess>(
           &v25,
           &v26);
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v8 + 24LL))(*v8, &v17);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2B,
        (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewIconFactory.h",
        (const char *)(unsigned int)v9,
        v17);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v26);
    if ( !GetObjectW(a2, 32, pv) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2E,
        (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewIconFactory.h",
        (const char *)0x80004005LL,
        v17);
    v10 = v22;
    if ( !v22 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2F,
        (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewIconFactory.h",
        (const char *)0x80004003LL,
        v17);
    if ( v21 != 32 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x30,
        (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewIconFactory.h",
        (const char *)0x800707D0LL,
        v17);
    v11 = v19;
    v12 = v20;
    if ( v20 * v19 > v24 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x31,
        (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewIconFactory.h",
        (const char *)0x800700EALL,
        v17);
    v13 = 0;
    if ( v19 > 0 )
    {
      while ( 1 )
      {
        memcpy_0((void *)(v17 + v12 * (v11 - v13 - 1)), (const void *)(v10 + v12 * v13), v12);
        ++v13;
        v11 = v19;
        if ( v13 >= v19 )
          break;
        v10 = v22;
        v12 = v20;
      }
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 56LL))(*((_QWORD *)this + 5));
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3B,
        (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewIconFactory.h",
        (const char *)(unsigned int)v14,
        v17);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v25);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3E,
                           (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewIconFactory.h",
                           v15);
  }
  return result;
}
