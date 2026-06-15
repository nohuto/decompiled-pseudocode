/*
 * XREFs of ?GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z @ 0x18004C794
 * Callers:
 *     ?GetChannelCount@CMeterSoftware@@MEAAJPEAI@Z @ 0x18004C750 (-GetChannelCount@CMeterSoftware@@MEAAJPEAI@Z.c)
 *     ?GetChannelCount@CMeterHardware@@MEAAJPEAI@Z @ 0x18010FDA0 (-GetChannelCount@CMeterHardware@@MEAAJPEAI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z @ 0x18004C840 (-GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMeterControlBase::GetChannelCountFromDeviceFormat(CMeterControlBase *this, unsigned int *a2)
{
  int PolicyConfig; // ebx
  void *v5; // rcx
  struct IPolicyConfig *v7; // [rsp+50h] [rbp+18h] BYREF
  LPVOID pv; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  PolicyConfig = GetPolicyConfig(&v7);
  if ( PolicyConfig < 0 )
    goto LABEL_8;
  pv = 0LL;
  PolicyConfig = (*(__int64 (__fastcall **)(struct IPolicyConfig *, _QWORD, _QWORD, LPVOID *))(*(_QWORD *)v7 + 32LL))(
                   v7,
                   *((_QWORD *)this + 2),
                   0LL,
                   &pv);
  v5 = pv;
  if ( PolicyConfig >= 0 )
    *a2 = *((unsigned __int16 *)pv + 1);
  if ( v5 )
    CoTaskMemFree(v5);
  if ( PolicyConfig < 0 )
LABEL_8:
    AudSrvTraceLoggingErrorHelper("CMeterControlBase::GetChannelCountFromDeviceFormat", 188, PolicyConfig);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v7);
  return (unsigned int)PolicyConfig;
}
