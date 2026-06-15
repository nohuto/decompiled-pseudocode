/*
 * XREFs of ?Lookup@CAudioSignalProcessingModeMap@@QEAA?AU_GUID@@U2@@Z @ 0x18014B6D8
 * Callers:
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x18000EC78 (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x18002E210 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x180034120 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800C5F24 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

struct _GUID *__fastcall CAudioSignalProcessingModeMap::Lookup(
        CAudioSignalProcessingModeMap *this,
        struct _GUID *__return_ptr retstr,
        struct _GUID *a3)
{
  int v3; // r9d
  int v4; // eax
  _QWORD *v7; // r8
  __int64 v8; // rcx
  GUID v9; // xmm0
  struct _GUID *result; // rax

  v3 = *((_DWORD *)this + 4);
  v4 = 0;
  if ( v3 <= 0 )
    goto LABEL_6;
  while ( 1 )
  {
    v7 = (_QWORD *)(*(_QWORD *)this + 16LL * v4);
    v8 = *v7 - *(_QWORD *)&a3->Data1;
    if ( *v7 == *(_QWORD *)&a3->Data1 )
      v8 = v7[1] - *(_QWORD *)a3->Data4;
    if ( !v8 )
      break;
    if ( ++v4 >= v3 )
      goto LABEL_6;
  }
  if ( v4 == -1 )
  {
LABEL_6:
    v9 = GUID_00000000_0000_0000_0000_000000000000;
  }
  else
  {
    if ( v4 < 0 || v4 >= v3 )
    {
      ATL::_AtlRaiseException(0xC000008C);
      JUMPOUT(0x18014B74FLL);
    }
    v9 = *(GUID *)(*((_QWORD *)this + 1) + 16LL * v4);
  }
  result = retstr;
  *retstr = v9;
  return result;
}
