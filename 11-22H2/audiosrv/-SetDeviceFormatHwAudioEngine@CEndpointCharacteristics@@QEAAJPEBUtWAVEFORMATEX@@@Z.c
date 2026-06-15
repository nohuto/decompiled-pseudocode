/*
 * XREFs of ?SetDeviceFormatHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18014F61C
 * Callers:
 *     ?SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x1800601E4 (-SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     _lambda_cc8545399a300f832261433c2fbaac5d_::operator() @ 0x180075540 (_lambda_cc8545399a300f832261433c2fbaac5d_--operator().c)
 * Callees:
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18001DDB8 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002FF68 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080F10 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ?GetOffloadMixFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x18014CE0C (-GetOffloadMixFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?SetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18014F7EC (-SetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::SetDeviceFormatHwAudioEngine(
        CEndpointCharacteristics *this,
        const struct tWAVEFORMATEX *a2)
{
  int updated; // ebx
  __int64 v5; // rdx
  int v7; // esi
  __int64 v8; // rdx
  void *v9; // rcx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  void *v13; // rcx
  struct tWAVEFORMATEX *v14; // [rsp+28h] [rbp-28h] BYREF
  char v15; // [rsp+30h] [rbp-20h]
  __int16 v16; // [rsp+38h] [rbp-18h] BYREF
  int v17; // [rsp+40h] [rbp-10h]
  LPVOID v18; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  LPVOID pv; // [rsp+68h] [rbp+18h] BYREF

  if ( !a2 )
  {
    updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(this, 1, 0, 0LL);
    if ( updated < 0 )
    {
      v5 = 8522LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
    return 0LL;
  }
  v7 = ValidateUncompressedWaveFormatEx(a2);
  if ( v7 < 0 )
  {
    v8 = 8531LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v7 = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(this, 1, 0, a2);
  if ( v7 < 0 )
  {
    v8 = 8534LL;
    goto LABEL_8;
  }
  updated = CEndpointCharacteristics::SetOffloadDeviceFormat(this, a2);
  if ( updated < 0 )
  {
    v5 = 8537LL;
    goto LABEL_4;
  }
  pv = 0LL;
  v14 = 0LL;
  v15 = 1;
  updated = CEndpointCharacteristics::GetOffloadMixFormat(this, &v14);
  if ( v15 )
  {
    v9 = pv;
    pv = v14;
    if ( v9 )
      CoTaskMemFree(v9);
  }
  if ( updated < 0 )
  {
    v10 = (unsigned int)updated;
    v11 = 8541LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v10);
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
    return (unsigned int)updated;
  }
  v16 = 65;
  v17 = *((unsigned __int16 *)pv + 8) + 18;
  v18 = pv;
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int16 *))(**((_QWORD **)this + 9) + 48LL))(
          *((_QWORD *)this + 9),
          &PKEY_AudioEngine_HWMixFormat,
          &v16);
  updated = v12;
  if ( v12 < 0 )
  {
    v10 = (unsigned int)v12;
    v11 = 8550LL;
    goto LABEL_20;
  }
  v13 = pv;
  pv = 0LL;
  if ( v13 )
    CoTaskMemFree(v13);
  return 0LL;
}
