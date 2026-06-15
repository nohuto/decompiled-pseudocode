/*
 * XREFs of AudioServerTelephonyControlGetMuteSync @ 0x180125B40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18001D4A8 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerTelephonyControlGetMuteSync(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // ebx
  struct IUnknown *v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0LL;
  if ( g_TelephonyControl
    && (ATL::AtlComQIPtrAssign(v9, g_TelephonyControl, &GUID_12f0ac85_d91a_4950_96a5_e7385ed7b7f4), v9[0]) )
  {
    v7 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, _QWORD, __int64))v9[0]->lpVtbl[1].AddRef)(
           v9[0],
           a2,
           a3,
           a4);
  }
  else
  {
    v7 = -2147467262;
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v9);
  return v7;
}
