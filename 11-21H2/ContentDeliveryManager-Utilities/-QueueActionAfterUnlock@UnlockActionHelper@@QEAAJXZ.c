/*
 * XREFs of ?QueueActionAfterUnlock@UnlockActionHelper@@QEAAJXZ @ 0x1800B6B30
 * Callers:
 *     ?QueueActionAfterUnlock@ContentManagementService@ContentManagement@@UEAAJPEAUIInspectable@@@Z @ 0x180062EE0 (-QueueActionAfterUnlock@ContentManagementService@ContentManagement@@UEAAJPEAUIInspectable@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006940C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z @ 0x1800B531C (-GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z.c)
 *     ?GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z @ 0x1800B5848 (-GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall UnlockActionHelper::QueueActionAfterUnlock(UnlockActionHelper *this)
{
  int LockAppHost; // eax
  unsigned int v3; // ebx
  __int64 (__fastcall **v5)(struct ILockAppHost *, GUID *, __int64 *); // rax
  int v6; // eax
  __int64 v7; // rcx
  int SharedExtendedExecutionSession; // eax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  __int64 v11; // [rsp+38h] [rbp+18h] BYREF
  struct ILockAppHost *v12; // [rsp+40h] [rbp+20h] BYREF

  v12 = 0LL;
  LockAppHost = GetLockAppHost(&v12);
  v3 = LockAppHost;
  if ( LockAppHost < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)LockAppHost);
    if ( v12 )
      (*(void (__fastcall **)(struct ILockAppHost *))(*(_QWORD *)v12 + 16LL))(v12);
    return v3;
  }
  v11 = 0LL;
  v5 = *(__int64 (__fastcall ***)(struct ILockAppHost *, GUID *, __int64 *))v12;
  v11 = 0LL;
  v6 = (*v5)(v12, &GUID_f2f2e6cf_4806_4728_954a_ef83a6301791, &v11);
  v3 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)v6);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v12 )
      (*(void (__fastcall **)(struct ILockAppHost *))(*(_QWORD *)v12 + 16LL))(v12);
    return v3;
  }
  v7 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  SharedExtendedExecutionSession = UniqueExtendedExecutionSession::GetSharedExtendedExecutionSession((struct IInspectable **)this + 5);
  if ( SharedExtendedExecutionSession < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x34,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)SharedExtendedExecutionSession);
  v9 = (*(__int64 (__fastcall **)(__int64, UnlockActionHelper *))(*(_QWORD *)v11 + 32LL))(v11, this);
  v3 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)v9);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v12 )
      (*(void (__fastcall **)(struct ILockAppHost *))(*(_QWORD *)v12 + 16LL))(v12);
    return v3;
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
    (*(void (__fastcall **)(struct ILockAppHost *))(*(_QWORD *)v12 + 16LL))(v12);
  return 0LL;
}
