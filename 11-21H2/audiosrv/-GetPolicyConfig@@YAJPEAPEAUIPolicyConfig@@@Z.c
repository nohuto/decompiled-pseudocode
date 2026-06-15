/*
 * XREFs of ?GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z @ 0x18004FBF0
 * Callers:
 *     ?GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z @ 0x18004FB44 (-GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z.c)
 *     ?Initialize@CVolumeSoftware@@EEAAJPEAUIMMDevice@@@Z @ 0x1800CC3F0 (-Initialize@CVolumeSoftware@@EEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GetPolicyConfig(struct IPolicyConfig **a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = (**(__int64 (__fastcall ***)(CPolicyConfig *, GUID *, struct IPolicyConfig **))g_PolicyConfig)(
         g_PolicyConfig,
         &GUID_4495581a_01b9_4a8f_b05c_741a6c983d28,
         a1);
  v2 = v1;
  if ( v1 < 0 )
    AudSrvTraceLoggingErrorHelper("GetPolicyConfig", 2883, v1);
  return v2;
}
