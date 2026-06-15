/*
 * XREFs of ?GetDeviceFromDeviceId@DynamicAudioEndpointManager@@CAJPEBGPEAPEAUIMMDevice@@@Z @ 0x18013F300
 * Callers:
 *     ?GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAUIMMDevice@@@Z @ 0x180035780 (-GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$copy_to@UIMMDevice@@@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIMMDevice@@@Z @ 0x18004756C (--$copy_to@UIMMDevice@@@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIM.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DynamicAudioEndpointManager::GetDeviceFromDeviceId(
        const unsigned __int16 *a1,
        struct IMMDevice **a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  LPVOID v7; // rbx
  __int64 (__fastcall *v8)(LPVOID, const unsigned __int16 *, __int64 *); // rsi
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF
  LPVOID v13; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v4 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &v13);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = v13;
    v8 = *(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, __int64 *))(*(_QWORD *)v13 + 40LL);
    v9 = v12;
    v12 = 0LL;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v4 = v8(v7, a1, &v12);
    v5 = v4;
    if ( v4 >= 0 )
    {
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::copy_to<IMMDevice>(&v12, a2);
      v5 = 0;
      goto LABEL_9;
    }
    v6 = 853LL;
  }
  else
  {
    v6 = 851LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
    (const char *)(unsigned int)v4);
LABEL_9:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v12);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v13);
  return v5;
}
