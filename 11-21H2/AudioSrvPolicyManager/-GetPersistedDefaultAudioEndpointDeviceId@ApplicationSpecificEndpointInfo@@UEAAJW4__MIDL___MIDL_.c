/*
 * XREFs of ?GetPersistedDefaultAudioEndpointDeviceId@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x18003BF70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000E27C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ApplicationSpecificEndpointInfo::GetPersistedDefaultAudioEndpointDeviceId(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  void *v8; // rcx
  int v9; // eax
  LPVOID v10; // rax
  LPVOID pv; // [rsp+30h] [rbp-10h] BYREF
  __int64 v12; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  LPVOID v14; // [rsp+50h] [rbp+10h] BYREF

  v14 = 0LL;
  pv = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, LPVOID *))(*(_QWORD *)a1 + 32LL))(a1, a2, a3, &v14);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = v14;
    if ( v14 )
    {
      v12 = 0LL;
      if ( (int)mmdDevGetMMDeviceFromInterfaceId(v14, &v12) >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v12 + 40LL))(v12, &pv);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xF9,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
            (const char *)(unsigned int)v9);
      }
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      v8 = v14;
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
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)(unsigned int)v5);
    if ( v14 )
      CoTaskMemFree(v14);
    return v6;
  }
}
