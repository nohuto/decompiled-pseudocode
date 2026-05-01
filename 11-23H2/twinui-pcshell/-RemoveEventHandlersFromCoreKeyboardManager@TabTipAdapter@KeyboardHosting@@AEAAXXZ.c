/*
 * XREFs of ?RemoveEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAXXZ @ 0x180185448
 * Callers:
 *     ?UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x180185330 (-UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall KeyboardHosting::TabTipAdapter::RemoveEventHandlersFromCoreKeyboardManager(
        KeyboardHosting::TabTipAdapter *this)
{
  _QWORD *v2; // rdi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 32);
  if ( *((_QWORD *)this + 22) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 56LL))(*v2);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x23E,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v3);
    *((_QWORD *)this + 22) = 0LL;
  }
  if ( *((_QWORD *)this + 23) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 120LL))(*v2);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x244,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v4);
    *((_QWORD *)this + 23) = 0LL;
  }
  if ( *((_QWORD *)this + 24) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 136LL))(*v2);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x24A,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v5);
    *((_QWORD *)this + 24) = 0LL;
  }
  if ( *((_QWORD *)this + 25) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 152LL))(*v2);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x250,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v6);
    *((_QWORD *)this + 25) = 0LL;
  }
  if ( *((_QWORD *)this + 26) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 168LL))(*v2);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x256,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v7);
    *((_QWORD *)this + 26) = 0LL;
  }
  if ( *((_QWORD *)this + 27) )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 184LL))(*v2);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x25C,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v8);
    *((_QWORD *)this + 27) = 0LL;
  }
  if ( *((_QWORD *)this + 28) )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 200LL))(*v2);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x262,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v9);
    *((_QWORD *)this + 28) = 0LL;
  }
  if ( *((_QWORD *)this + 29) )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 216LL))(*v2);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x268,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v10);
    *((_QWORD *)this + 29) = 0LL;
  }
  if ( *((_QWORD *)this + 30) )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 232LL))(*v2);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x26E,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v11);
    *((_QWORD *)this + 30) = 0LL;
  }
  if ( *((_QWORD *)this + 31) )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 248LL))(*v2);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x274,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v12);
    *((_QWORD *)this + 31) = 0LL;
  }
  if ( *((_QWORD *)this + 32) )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 280LL))(*v2);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x27A,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v13);
    *((_QWORD *)this + 32) = 0LL;
  }
  if ( *((_QWORD *)this + 33) )
  {
    v25 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 296LL))(*v2);
    if ( v25 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x280,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v25);
    *((_QWORD *)this + 33) = 0LL;
  }
  if ( *((_QWORD *)this + 34) )
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 312LL))(*v2);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x286,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v14);
    *((_QWORD *)this + 34) = 0LL;
  }
  if ( *((_QWORD *)this + 35) )
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 328LL))(*v2);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x28C,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v15);
    *((_QWORD *)this + 35) = 0LL;
  }
  if ( *((_QWORD *)this + 36) )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 344LL))(*v2);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x292,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v16);
    *((_QWORD *)this + 36) = 0LL;
  }
  if ( *((_QWORD *)this + 37) )
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 72LL))(*v2);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x298,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v17);
    *((_QWORD *)this + 37) = 0LL;
  }
  if ( *((_QWORD *)this + 38) )
  {
    v18 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 400LL))(*v2);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x29E,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v18);
    *((_QWORD *)this + 38) = 0LL;
  }
  if ( *((_QWORD *)this + 41) )
  {
    v19 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 376LL))(*v2);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2A4,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v19);
    *((_QWORD *)this + 41) = 0LL;
  }
  if ( *((_QWORD *)this + 42) )
  {
    v20 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 392LL))(*v2);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2AA,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v20);
    *((_QWORD *)this + 42) = 0LL;
  }
  if ( *((_QWORD *)this + 39) )
  {
    v21 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 440LL))(*v2);
    if ( v21 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2B0,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v21);
    *((_QWORD *)this + 39) = 0LL;
  }
  if ( *((_QWORD *)this + 40) )
  {
    v22 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 456LL))(*v2);
    if ( v22 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2B6,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v22);
    *((_QWORD *)this + 40) = 0LL;
  }
  if ( *((_QWORD *)this + 43) )
  {
    v23 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 472LL))(*v2);
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2BC,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v23);
    *((_QWORD *)this + 43) = 0LL;
  }
  if ( *((_QWORD *)this + 45) )
  {
    v24 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 64LL))(*((_QWORD *)this + 5));
    if ( v24 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2C2,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v24);
    *((_QWORD *)this + 45) = 0LL;
  }
}
