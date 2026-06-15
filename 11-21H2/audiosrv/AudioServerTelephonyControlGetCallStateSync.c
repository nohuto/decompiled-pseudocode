/*
 * XREFs of AudioServerTelephonyControlGetCallStateSync @ 0x1800F4740
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800462C0 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerTelephonyControlGetCallStateSync(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  struct IUnknown *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( g_TelephonyControl
    && (ATL::AtlComQIPtrAssign(&v7, g_TelephonyControl, &GUID_12f0ac85_d91a_4950_96a5_e7385ed7b7f4), v7) )
  {
    v5 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, __int64))v7->lpVtbl[1].QueryInterface)(v7, a2, a3);
  }
  else
  {
    v5 = -2147467262;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v7);
  return v5;
}
