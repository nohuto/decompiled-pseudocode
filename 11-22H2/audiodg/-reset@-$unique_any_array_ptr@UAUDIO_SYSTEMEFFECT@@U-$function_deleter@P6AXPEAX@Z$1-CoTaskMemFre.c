/*
 * XREFs of ?reset@?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@@wil@@QEAAXXZ @ 0x14006EEA0
 * Callers:
 *     ??1?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@@wil@@QEAA@XZ @ 0x14006E5C4 (--1-$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@Y.c)
 *     ?GetControllableSystemEffectsListRemote@CAPOWrapperSrv@@UEAAJPEAPEAUAudioEffectInternal@@PEAIPEAX@Z @ 0x14006E5E0 (-GetControllableSystemEffectsListRemote@CAPOWrapperSrv@@UEAAJPEAPEAUAudioEffectInternal@@PEAIPEA.c)
 *     ?GetControllableSystemEffectsListRemote@CSystemEffectWrapper@@UEAAJPEAPEAUAudioEffectInternal@@PEAIPEAX@Z @ 0x140075A00 (-GetControllableSystemEffectsListRemote@CSystemEffectWrapper@@UEAAJPEAPEAUAudioEffectInternal@@P.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
