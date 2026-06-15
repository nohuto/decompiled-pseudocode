/*
 * XREFs of ?TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x140016758
 * Callers:
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000A320 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJ_NPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000C590 (-CreateStreamPipeInstance@CPipeInstance@@SAJ_NPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STRE.c)
 *     ?TryGetApoDeviceIdPKey@@YAJAEBU_GUID@@PEBGPEAPEAG@Z @ 0x140016174 (-TryGetApoDeviceIdPKey@@YAJAEBU_GUID@@PEBGPEAPEAG@Z.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14001CF18 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TryGetFxPropertyStore(const unsigned __int16 *a1, struct IPropertyStore **a2)
{
  HRESULT v4; // eax
  int v5; // ebx
  __int64 v6; // rax
  int v7; // eax
  int ppv; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp+28h] BYREF
  __int64 v12; // [rsp+60h] [rbp+30h] BYREF
  LPVOID v13; // [rsp+68h] [rbp+38h] BYREF

  *a2 = 0LL;
  v13 = 0LL;
  v4 = CoCreateInstance(&CLSID_MMDeviceEnumerator, 0LL, 0x17u, &GUID_a95664d2_9614_4f35_a746_de8db63617e6, &v13);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v11 = 0LL;
    v6 = *(_QWORD *)v13;
    v11 = 0LL;
    v7 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, _QWORD))(v6 + 40))(v13, a1, &v11);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v12 = 0LL;
      if ( (**v11)(v11, &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21, &v12) < 0
        || (v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IPropertyStore **))(*(_QWORD *)v12 + 40LL))(
                   v12,
                   0LL,
                   a2),
            v5 >= 0) )
      {
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v12);
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v11);
        v5 = 0;
        goto LABEL_10;
      }
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v12);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
        (const char *)(unsigned int)v7,
        ppv);
    }
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
      (const char *)(unsigned int)v4,
      ppv);
  }
LABEL_10:
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v13);
  return (unsigned int)v5;
}
