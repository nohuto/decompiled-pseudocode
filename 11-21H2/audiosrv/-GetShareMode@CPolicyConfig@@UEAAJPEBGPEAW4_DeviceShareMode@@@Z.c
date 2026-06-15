/*
 * XREFs of ?GetShareMode@CPolicyConfig@@UEAAJPEBGPEAW4_DeviceShareMode@@@Z @ 0x1800E9BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18000E8CC (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARI.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
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
  PropertyStoreProperty = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, struct IMMDevice **))(*(_QWORD *)g_DeviceEnumerator + 40LL))(
                            g_DeviceEnumerator,
                            a2,
                            &v7);
  if ( PropertyStoreProperty >= 0 )
  {
    PropertyStoreProperty = CPolicyConfig::GetPropertyStoreProperty(v7, 0, &PKEY_AudioEngine_ShareMode, &pvar);
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
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetShareMode", 1239, PropertyStoreProperty);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v7);
  return (unsigned int)PropertyStoreProperty;
}
