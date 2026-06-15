/*
 * XREFs of ?CopyAudioSystemEffectsProperties@@YAJPEAUIAudioSystemEffectsPropertyStore@@0@Z @ 0x180168AA4
 * Callers:
 *     ?CreateEffectPackContexts@CEndpointCharacteristics@@AEAAJPEAVEffectPack@@@Z @ 0x18014B75C (-CreateEffectPackContexts@CEndpointCharacteristics@@AEAAJPEAVEffectPack@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyAudioSystemEffectsProperties@@YAJPEAUIAudioSystemEffectsPropertyStore@@0W4__MIDL___MIDL_itf_mmdeviceapi_0000_0008_0002@@@Z @ 0x180168B54 (-CopyAudioSystemEffectsProperties@@YAJPEAUIAudioSystemEffectsPropertyStore@@0W4__MIDL___MIDL_itf.c)
 *     ?CopyContextProperties@@YAJPEAUIAudioSystemEffectsPropertyStore@@0@Z @ 0x180168DE8 (-CopyContextProperties@@YAJPEAUIAudioSystemEffectsPropertyStore@@0@Z.c)
 */

__int64 __fastcall CopyAudioSystemEffectsProperties(
        struct IAudioSystemEffectsPropertyStore *a1,
        struct IAudioSystemEffectsPropertyStore *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CopyAudioSystemEffectsProperties(a1, a2, 0LL);
  if ( v4 < 0 )
  {
    v5 = 694LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = CopyAudioSystemEffectsProperties(a1, a2, 1LL);
  if ( v4 < 0 )
  {
    v5 = 695LL;
    goto LABEL_3;
  }
  v4 = CopyAudioSystemEffectsProperties(a1, a2, 2LL);
  if ( v4 < 0 )
  {
    v5 = 696LL;
    goto LABEL_3;
  }
  v4 = CopyContextProperties(a1, a2);
  if ( v4 < 0 )
  {
    v5 = 697LL;
    goto LABEL_3;
  }
  return 0LL;
}
