/*
 * XREFs of ?RuntimeClassInitialize@CAudioSystemEffectsPropertyChangeNotificationsDelegator@@QEAAJPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Z @ 0x1400734D4
 * Callers:
 *     ??$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsDelegator@@V1@PEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSystemEffectsPropertyChangeNotificationsDelegator@@$$QEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Z @ 0x140072944 (--$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsDelegator@@V1@PEAVCAudioSyst.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$com_weak_query@AEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@AEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Z @ 0x140072A34 (--$com_weak_query@AEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@wil@@YA-AV-$com.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSystemEffectsPropertyChangeNotificationsDelegator::RuntimeClassInitialize(
        CAudioSystemEffectsPropertyChangeNotificationsDelegator *this,
        struct CAudioSystemEffectsPropertyChangeNotificationsHandler *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2;
  try
  {
    v3 = wil::com_weak_query<CAudioSystemEffectsPropertyChangeNotificationsHandler * &>(&v10, &v9);
    v4 = *v3;
    *v3 = 0LL;
    v5 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = v4;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp",
                           v6);
  }
  return result;
}
