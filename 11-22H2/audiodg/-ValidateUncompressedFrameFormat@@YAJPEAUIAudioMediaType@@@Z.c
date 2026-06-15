/*
 * XREFs of ?ValidateUncompressedFrameFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x140010ACC
 * Callers:
 *     ?ValidateAPOConnectionDescriptor@@YAJPEAUAPO_CONNECTION_DESCRIPTOR@@@Z @ 0x140010AA0 (-ValidateAPOConnectionDescriptor@@YAJPEAUAPO_CONNECTION_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ?GetAudioFormat@@YAXPEAUIAudioMediaType@@PEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x140010B50 (-GetAudioFormat@@YAXPEAUIAudioMediaType@@PEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z.c)
 */

__int64 __fastcall ValidateUncompressedFrameFormat(struct IAudioMediaType *a1)
{
  unsigned int v1; // ebx
  struct _UNCOMPRESSEDAUDIOFORMAT v3; // [rsp+20h] [rbp-38h] BYREF

  v1 = 0;
  if ( a1 )
  {
    GetAudioFormat(a1, &v3);
    if ( _isnan(v3.fFramesPerSecond)
      || v3.fFramesPerSecond <= 0.0
      || !v3.dwSamplesPerFrame
      || !v3.dwBytesPerSampleContainer
      || !v3.dwValidBitsPerSample
      || 8 * v3.dwBytesPerSampleContainer < v3.dwValidBitsPerSample
      || v3.dwSamplesPerFrame > 0x1000
      || v3.dwBytesPerSampleContainer > 0x20 )
    {
      return (unsigned int)-2147024809;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v1;
}
