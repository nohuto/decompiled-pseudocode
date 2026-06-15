/*
 * XREFs of ?TryGetDevicePropertyStore@@YAJPEAUIMMDevice@@HKPEAPEAUIPropertyStore@@@Z @ 0x180052D5C
 * Callers:
 *     ?SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x180052CD0 (-SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARI.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1801160E8 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARI.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18001D4A8 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TryGetDevicePropertyStore(struct IUnknown *a1, int a2, unsigned int a3, struct IPropertyStore **a4)
{
  int v6; // ebx
  struct IUnknown *v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0;
  if ( a2 )
  {
    v8[0] = 0LL;
    if ( !a1 || (ATL::AtlComQIPtrAssign(v8, a1, &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21), !v8[0]) )
    {
      *a4 = 0LL;
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v8);
      return (unsigned int)v6;
    }
    v6 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, struct IPropertyStore **))v8[0]->lpVtbl[1].Release)(
           v8[0],
           a3,
           a4);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v8);
  }
  else
  {
    v6 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, struct IPropertyStore **))a1->lpVtbl[1].AddRef)(a1, a3, a4);
  }
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("TryGetDevicePropertyStore", 1372, v6);
  return (unsigned int)v6;
}
