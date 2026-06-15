/*
 * XREFs of ?reset@?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@@wil@@QEAAXXZ @ 0x1800E5FA4
 * Callers:
 *     ??1?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@@wil@@QEAA@XZ @ 0x1800E3B10 (--1-$unique_any_array_ptr@UAudioEffectInternal@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ?GetAudioEffects@CAudioStream@@IEAAJPEAPEAUAudioEffectInternal@@PEAI@Z @ 0x1800E3E94 (-GetAudioEffects@CAudioStream@@IEAAJPEAPEAUAudioEffectInternal@@PEAI@Z.c)
 *     ?PublishAudioEffects@CAudioStream@@IEAAXXZ @ 0x1800E4D1C (-PublishAudioEffects@CAudioStream@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset(
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
