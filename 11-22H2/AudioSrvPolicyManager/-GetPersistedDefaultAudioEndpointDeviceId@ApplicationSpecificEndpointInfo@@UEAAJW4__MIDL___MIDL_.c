/*
 * XREFs of ?GetPersistedDefaultAudioEndpointDeviceId@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x18000EDC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F560 (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180023594 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationSpecificEndpointInfo::GetPersistedDefaultAudioEndpointDeviceId(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v5; // eax
  unsigned int v6; // edi
  void *v8; // rcx
  int v9; // eax
  LPVOID v10; // rax
  int v11; // [rsp+20h] [rbp-28h]
  LPVOID pv; // [rsp+30h] [rbp-18h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = 0LL;
  pv = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, LPVOID *))(*(_QWORD *)a1 + 32LL))(a1, a2, a3, &v15);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = v15;
    if ( v15 )
    {
      v13[0] = 0LL;
      if ( (int)mmdDevGetMMDeviceFromInterfaceId(v15, v13) >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(*(_QWORD *)v13[0] + 40LL))(v13[0], &pv);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xF9,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
            (const char *)(unsigned int)v9,
            v11);
      }
      wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(v13);
      v8 = v15;
    }
    v10 = pv;
    pv = 0LL;
    *a4 = v10;
    if ( v8 )
      CoTaskMemFree(v8);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEF,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)(unsigned int)v5,
      v11);
    if ( v15 )
      CoTaskMemFree(v15);
    return v6;
  }
}
