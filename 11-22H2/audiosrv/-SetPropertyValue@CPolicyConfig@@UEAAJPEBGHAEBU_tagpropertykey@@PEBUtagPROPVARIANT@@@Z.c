/*
 * XREFs of ?SetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@@Z @ 0x180052C30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x180052CD0 (-SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARI.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPolicyConfig::SetPropertyValue(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        int a3,
        const struct _tagpropertykey *a4,
        const struct tagPROPVARIANT *a5)
{
  int v7; // ebx
  struct IMMDevice *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  if ( !a2 || !a5 )
  {
    v7 = -2147467261;
LABEL_7:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetPropertyValue", 1517, v7);
    goto LABEL_5;
  }
  v7 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, const unsigned __int16 *, struct IMMDevice **))g_DeviceEnumerator->lpVtbl->GetDevice)(
         g_DeviceEnumerator,
         a2,
         &v9);
  if ( v7 < 0 )
    goto LABEL_7;
  v7 = CPolicyConfig::SetPropertyStoreProperty(v9, a3, a4, a5);
  if ( v7 < 0 )
    goto LABEL_7;
LABEL_5:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v9);
  return (unsigned int)v7;
}
