/*
 * XREFs of ?SetShareMode@CPolicyConfig@@UEAAJPEBGW4_DeviceShareMode@@@Z @ 0x1800EAEA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800EAD3C (-SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARI.c)
 */

__int64 __fastcall CPolicyConfig::SetShareMode(__int64 a1, __int64 a2, LONG a3)
{
  int v4; // ebx
  struct tagPROPVARIANT v6; // [rsp+20h] [rbp-28h] BYREF
  struct IMMDevice *v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(LPVOID, __int64, struct IMMDevice **))(*(_QWORD *)g_DeviceEnumerator + 40LL))(
         g_DeviceEnumerator,
         a2,
         &v7);
  if ( v4 < 0
    || (memset(&v6, 0, sizeof(v6)),
        v6.vt = 19,
        v6.lVal = a3,
        v4 = CPolicyConfig::SetPropertyStoreProperty((struct IUnknown *)v7, 0, &PKEY_AudioEngine_ShareMode, &v6),
        v4 < 0) )
  {
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetShareMode", 1272, v4);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v7);
  return (unsigned int)v4;
}
