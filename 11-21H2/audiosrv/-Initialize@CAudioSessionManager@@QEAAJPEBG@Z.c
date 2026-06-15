/*
 * XREFs of ?Initialize@CAudioSessionManager@@QEAAJPEBG@Z @ 0x180045B50
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z @ 0x180046714 (-RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$?4UIMMDevice@@@?$CComPtr@UIMMEndpointInternal@@@ATL@@QEAAPEAUIMMEndpointInternal@@AEBV?$CComPtr@UIMMDevice@@@1@@Z @ 0x180045C90 (--$-4UIMMDevice@@@-$CComPtr@UIMMEndpointInternal@@@ATL@@QEAAPEAUIMMEndpointInternal@@AEBV-$CComP.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800462C0 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18004D0F4 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSessionManager::Initialize(CAudioSessionManager *this, unsigned __int16 *a2)
{
  __int64 v4; // r8
  int v5; // ebx
  struct IUnknown *v6; // rcx
  struct IUnknown *v8; // [rsp+20h] [rbp-38h] BYREF
  struct IUnknown *v9[6]; // [rsp+28h] [rbp-30h] BYREF
  struct IUnknown *v10; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0LL;
  v10 = 0LL;
  v9[0] = 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  std::wstring::assign((char *)this + 240, a2);
  v5 = (*(__int64 (__fastcall **)(LPVOID, unsigned __int16 *, struct IUnknown **))(*(_QWORD *)g_DeviceEnumerator + 40LL))(
         g_DeviceEnumerator,
         a2,
         &v8);
  if ( v5 < 0 )
    goto LABEL_12;
  ATL::CComPtr<IMMEndpointInternal>::operator=<IMMDevice>(v9);
  if ( !v9[0] )
    goto LABEL_11;
  v5 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v9[0]->lpVtbl[2].Release)(v9[0], (char *)this + 272);
  if ( v5 < 0 )
  {
LABEL_12:
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::Initialize", 0x3D7u, v5);
    goto LABEL_10;
  }
  v6 = v10;
  if ( v10 != v8 )
  {
    ATL::AtlComQIPtrAssign(&v10, v8, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
    v6 = v10;
  }
  if ( !v6 )
  {
LABEL_11:
    v5 = -2147024809;
    goto LABEL_12;
  }
  v5 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v6->lpVtbl[1].QueryInterface)(v6, (char *)this + 280);
  if ( v5 < 0 )
    goto LABEL_12;
LABEL_10:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v9);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v10);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v8);
  return (unsigned int)v5;
}
