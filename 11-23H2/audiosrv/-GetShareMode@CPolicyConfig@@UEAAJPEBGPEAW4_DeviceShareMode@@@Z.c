/*
 * XREFs of ?GetShareMode@CPolicyConfig@@UEAAJPEBGPEAW4_DeviceShareMode@@@Z @ 0x1801161F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180116098 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARI.c)
 */

__int64 __fastcall CPolicyConfig::GetShareMode(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        enum _DeviceShareMode *a3)
{
  int PropertyStoreProperty; // ebx
  struct tagPROPVARIANT pvar; // [rsp+20h] [rbp-28h] BYREF
  struct IMMDevice *v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0LL;
  memset(&pvar, 0, sizeof(pvar));
  PropertyStoreProperty = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, const unsigned __int16 *, struct IMMDevice **))g_DeviceEnumerator->lpVtbl->GetDevice)(
                            g_DeviceEnumerator,
                            a2,
                            &v7);
  if ( PropertyStoreProperty >= 0 )
  {
    PropertyStoreProperty = CPolicyConfig::GetPropertyStoreProperty(
                              (struct IUnknown *)v7,
                              0,
                              &PKEY_AudioEngine_ShareMode,
                              &pvar);
    if ( PropertyStoreProperty >= 0 )
    {
      if ( pvar.vt == 19 )
      {
        *(_DWORD *)a3 = pvar.lVal;
      }
      else if ( pvar.vt )
      {
        PropertyStoreProperty = -2147024809;
      }
      else
      {
        *(_DWORD *)a3 = 0;
      }
    }
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( PropertyStoreProperty < 0 )
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetShareMode", 1299, PropertyStoreProperty);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v7);
  return (unsigned int)PropertyStoreProperty;
}
