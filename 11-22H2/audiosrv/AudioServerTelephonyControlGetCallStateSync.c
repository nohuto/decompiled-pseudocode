/*
 * XREFs of AudioServerTelephonyControlGetCallStateSync @ 0x180125950
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18001D4A8 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
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
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v7);
  return v5;
}
