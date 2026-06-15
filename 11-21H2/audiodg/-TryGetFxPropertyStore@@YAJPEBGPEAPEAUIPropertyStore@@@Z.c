/*
 * XREFs of ?TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x140015140
 * Callers:
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000B1F4 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000B748 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14001327C (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?TryGetApoDeviceIdPKey@@YAJAEBU_GUID@@PEBGPEAPEAG@Z @ 0x140017D24 (-TryGetApoDeviceIdPKey@@YAJAEBU_GUID@@PEBGPEAPEAG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall TryGetFxPropertyStore(const unsigned __int16 *a1, struct IPropertyStore **a2)
{
  HRESULT v4; // eax
  int v5; // ebx
  __int64 v6; // rax
  int v7; // eax
  int v8; // eax
  int ppv; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v12; // [rsp+58h] [rbp+28h] BYREF
  __int64 v13; // [rsp+60h] [rbp+30h] BYREF
  LPVOID v14; // [rsp+68h] [rbp+38h] BYREF

  *a2 = 0LL;
  v14 = 0LL;
  v4 = CoCreateInstance(&CLSID_MMDeviceEnumerator, 0LL, 0x17u, &GUID_a95664d2_9614_4f35_a746_de8db63617e6, &v14);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
      (const char *)(unsigned int)v4,
      ppv);
    goto LABEL_10;
  }
  v12 = 0LL;
  v6 = *(_QWORD *)v14;
  v12 = 0LL;
  v7 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, __int64 *))(v6 + 40))(v14, a1, &v12);
  v5 = v7;
  if ( v7 >= 0 )
  {
    v13 = 0LL;
    v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v12)(
           v12,
           &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21,
           &v13);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4E8,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\com.h",
        (const char *)(unsigned int)v8,
        ppv);
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IPropertyStore **))(*(_QWORD *)v13 + 40LL))(v13, 0LL, a2);
      if ( v5 < 0 )
        goto LABEL_6;
    }
    v5 = 0;
LABEL_6:
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x18,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
    (const char *)(unsigned int)v7,
    ppv);
LABEL_8:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
LABEL_10:
  if ( v14 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v14 + 16LL))(v14);
  return (unsigned int)v5;
}
