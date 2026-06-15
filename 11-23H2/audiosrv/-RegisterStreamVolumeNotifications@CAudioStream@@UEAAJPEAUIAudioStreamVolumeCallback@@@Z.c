/*
 * XREFs of ?RegisterStreamVolumeNotifications@CAudioStream@@UEAAJPEAUIAudioStreamVolumeCallback@@@Z @ 0x1800ECC30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIAudioSystemEffects3@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioSystemEffects3@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioSystemEffects3@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAudioSystemEffects3@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800EA984 (--$_Emplace_reallocate@V-$com_ptr_t@UIAudioSystemEffects3@@Uerr_returncode_policy@wil@@@wil@@@-$.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioStream::RegisterStreamVolumeNotifications(
        CAudioStream *this,
        struct IAudioStreamVolumeCallback *a2)
{
  __int64 result; // rax
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  _QWORD *v6; // rdx
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IAudioStreamVolumeCallback *v9; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+50h] [rbp+18h]

  if ( a2 )
  {
    v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 256);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 256));
    v10 = v5;
    v9 = a2;
    try
    {
      (*(void (**)(void))(*(_QWORD *)a2 + 8LL))();
      v6 = (_QWORD *)*((_QWORD *)this + 38);
      if ( v6 == *((_QWORD **)this + 39) )
      {
        std::vector<wil::com_ptr_t<IAudioSystemEffects3,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioSystemEffects3,wil::err_returncode_policy>>(
          (__int64 *)this + 37,
          (__int64)v6,
          (__int64 *)&v9);
      }
      else
      {
        v9 = 0LL;
        *v6 = a2;
        *((_QWORD *)this + 38) += 8LL;
      }
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v9);
      if ( v5 )
        LeaveCriticalSection(v5);
      result = 0LL;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x2FA,
                             (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                             v7);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F5,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  return result;
}
