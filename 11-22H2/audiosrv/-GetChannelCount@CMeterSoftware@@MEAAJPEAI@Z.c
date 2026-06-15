/*
 * XREFs of ?GetChannelCount@CMeterSoftware@@MEAAJPEAI@Z @ 0x18004C750
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z @ 0x18004C794 (-GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMeterSoftware::GetChannelCount(CMeterSoftware *this, unsigned int *a2)
{
  void (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  int ChannelCountFromDeviceFormat; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 4);
  if ( v4 )
  {
    v7 = 0LL;
    (**v4)(v4, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, &v7);
    if ( v7 )
      ChannelCountFromDeviceFormat = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 4) + 32LL))(
                                       *((_QWORD *)this + 4),
                                       a2);
    else
      ChannelCountFromDeviceFormat = -2147467262;
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v7);
  }
  else
  {
    ChannelCountFromDeviceFormat = CMeterControlBase::GetChannelCountFromDeviceFormat(this, a2);
  }
  if ( ChannelCountFromDeviceFormat < 0 )
    AudSrvTraceLoggingErrorHelper("CMeterSoftware::GetChannelCount", 825, ChannelCountFromDeviceFormat);
  return (unsigned int)ChannelCountFromDeviceFormat;
}
