/*
 * XREFs of ?TryEnsurePackageRegistered@ProtocolLauncher@Utils@@AEAAXXZ @ 0x1806C33E0
 * Callers:
 *     ?LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z @ 0x1806C2684 (-LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18046AC88 (-Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??$ActivateInstance@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@wil@@YA?AV?$com_ptr_t@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1806C1A1C (--$ActivateInstance@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@wil@@YA-AV.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Utils::ProtocolLauncher::TryEnsurePackageRegistered(Utils::ProtocolLauncher *this)
{
  RTL_SRWLOCK *v2; // rbx
  PCWSTR StringRawBuffer; // rax
  unsigned int EffectivePackageStatusForUserSid; // eax
  __int64 v5; // rdx
  unsigned int v6; // r8d
  int v7; // eax
  const char *v8; // r9
  unsigned int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v2 = (RTL_SRWLOCK *)((char *)this + 32);
  AcquireSRWLockShared((PSRWLOCK)this + 4);
  if ( *((_BYTE *)this + 40) )
  {
    if ( v2 )
      ReleaseSRWLockShared(v2);
  }
  else
  {
    if ( v2 )
      ReleaseSRWLockShared(v2);
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 3), 0LL);
    EffectivePackageStatusForUserSid = GetEffectivePackageStatusForUserSid(0LL, StringRawBuffer, &v11);
    try
    {
      if ( EffectivePackageStatusForUserSid )
        wil::details::in1diag3::Throw_Win32(
          retaddr,
          329LL,
          (__int64)"pcshell\\twinui\\meetandchatmanager\\lib\\utils.cpp",
          (const char *)EffectivePackageStatusForUserSid,
          v9);
      if ( (v11 & 0x400800) != 0 )
      {
        wil::ActivateInstance<Windows::Management::Deployment::Internal::IPackageManagerInternal>(&v12, v5, v6);
        v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 264LL))(v12, *((_QWORD *)this + 3));
        if ( v7 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x14D,
            (int)"pcshell\\twinui\\meetandchatmanager\\lib\\utils.cpp",
            (const char *)(unsigned int)v7,
            v9);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
      }
      AcquireSRWLockExclusive(v2);
      *((_BYTE *)this + 40) = 1;
      if ( v2 )
        ReleaseSRWLockExclusive(v2);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x153,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\utils.cpp",
        v8);
    }
  }
}
