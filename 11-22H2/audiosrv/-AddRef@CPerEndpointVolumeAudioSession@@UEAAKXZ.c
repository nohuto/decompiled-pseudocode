/*
 * XREFs of ?AddRef@CPerEndpointVolumeAudioSession@@UEAAKXZ @ 0x1800815F0
 * Callers:
 *     ?AddRef@CPerEndpointVolumeAudioSession@@W7EAAKXZ @ 0x180076200 (-AddRef@CPerEndpointVolumeAudioSession@@W7EAAKXZ.c)
 *     ?AddRef@CPerEndpointVolumeAudioSession@@WBA@EAAKXZ @ 0x180076220 (-AddRef@CPerEndpointVolumeAudioSession@@WBA@EAAKXZ.c)
 *     ?AddRef@CPerEndpointVolumeAudioSession@@WBI@EAAKXZ @ 0x180076240 (-AddRef@CPerEndpointVolumeAudioSession@@WBI@EAAKXZ.c)
 *     ?AddRef@CPerEndpointVolumeAudioSession@@WCA@EAAKXZ @ 0x180076260 (-AddRef@CPerEndpointVolumeAudioSession@@WCA@EAAKXZ.c)
 *     ?AddRef@CPerEndpointVolumeAudioSession@@WCI@EAAKXZ @ 0x180076280 (-AddRef@CPerEndpointVolumeAudioSession@@WCI@EAAKXZ.c)
 *     ?AddRef@CPerEndpointVolumeAudioSession@@WDJI@EAAKXZ @ 0x1800762A0 (-AddRef@CPerEndpointVolumeAudioSession@@WDJI@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003F104 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::AddRef(CPerEndpointVolumeAudioSession *this)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 7);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return (unsigned int)Microsoft::WRL::Details::SafeUnknownIncrementReference(
                         (Microsoft::WRL::Details *)(2 * v1 + 16),
                         (volatile int *)((unsigned __int64)v1 >> 63));
}
