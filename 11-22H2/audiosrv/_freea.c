/*
 * XREFs of _freea @ 0x18004B5A0
 * Callers:
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180009CA0 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?reset@?$unique_ptr@MU?$function_deleter@P6AXPEAX@Z$1?_freea@@YAX0@Z@wil@@@wistd@@QEAAXPEAM@Z @ 0x18004B768 (-reset@-$unique_ptr@MU-$function_deleter@P6AXPEAX@Z$1-_freea@@YAX0@Z@wil@@@wistd@@QEAAXPEAM@Z.c)
 *     _lambda_b08f66900c5e6cc9009fb22e38011b96_::operator() @ 0x180070D9C (_lambda_b08f66900c5e6cc9009fb22e38011b96_--operator().c)
 *     ??1?$unique_ptr@MU?$function_deleter@P6AXPEAX@Z$1?_freea@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1800DEB28 (--1-$unique_ptr@MU-$function_deleter@P6AXPEAX@Z$1-_freea@@YAX0@Z@wil@@@wistd@@QEAA@XZ.c)
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z @ 0x1800E0F8C (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z.c)
 *     ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x1800EB924 (-GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z.c)
 *     ?GetPeakValue@CAudioStream@@QEAAJPEAM@Z @ 0x1800EC344 (-GetPeakValue@CAudioStream@@QEAAJPEAM@Z.c)
 * Callees:
 *     <none>
 */

void __cdecl freea(void *Memory)
{
  _DWORD *v1; // rcx

  if ( Memory )
  {
    v1 = (char *)Memory - 16;
    if ( *v1 == 56797 )
      free(v1);
  }
}
