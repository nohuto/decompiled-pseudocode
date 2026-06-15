/*
 * XREFs of ?SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x180052CD0
 * Callers:
 *     ?SetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@@Z @ 0x180052C30 (-SetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@@Z.c)
 *     ?SetShareMode@CPolicyConfig@@UEAAJPEBGW4_DeviceShareMode@@@Z @ 0x180117360 (-SetShareMode@CPolicyConfig@@UEAAJPEBGW4_DeviceShareMode@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?TryGetDevicePropertyStore@@YAJPEAUIMMDevice@@HKPEAPEAUIPropertyStore@@@Z @ 0x180052D5C (-TryGetDevicePropertyStore@@YAJPEAUIMMDevice@@HKPEAPEAUIPropertyStore@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::SetPropertyStoreProperty(
        struct IMMDevice *a1,
        int a2,
        const struct _tagpropertykey *a3,
        const struct tagPROPVARIANT *a4)
{
  int DevicePropertyStore; // ebx
  struct IPropertyStore *v8[2]; // [rsp+28h] [rbp-10h] BYREF

  v8[0] = 0LL;
  DevicePropertyStore = TryGetDevicePropertyStore(a1, a2, 1u, v8);
  if ( DevicePropertyStore < 0 )
    goto LABEL_6;
  if ( !v8[0] )
  {
    DevicePropertyStore = -2147024894;
    goto LABEL_6;
  }
  DevicePropertyStore = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, const struct tagPROPVARIANT *))v8[0]->lpVtbl->SetValue)(
                          v8[0],
                          a3,
                          a4);
  if ( DevicePropertyStore < 0 )
LABEL_6:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetPropertyStoreProperty", 2108, DevicePropertyStore);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v8);
  return (unsigned int)DevicePropertyStore;
}
