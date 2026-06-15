/*
 * XREFs of ?GetEffectsFromApo@CAudioStream@@AEAAJPEAUIAPOWrapperSrv@@AEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x1800EBF78
 * Callers:
 *     ?GetControllableEffects@CAudioStream@@AEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x1800EBB88 (-GetControllableEffects@CAudioStream@@AEAAJAEAV-$vector@UAudioEffectInternal@@V-$allocator@UAudi.c)
 * Callees:
 *     ?reset@?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@@wil@@QEAAXXZ @ 0x18000973C (-reset@-$unique_any_array_ptr@UAudioEffectInternal@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFr.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800CD4A0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$_Emplace_reallocate@AEBUAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@QEAAPEAUAudioEffectInternal@@QEAU2@AEBU2@@Z @ 0x1800EA720 (--$_Emplace_reallocate@AEBUAudioEffectInternal@@@-$vector@UAudioEffectInternal@@V-$allocator@UAu.c)
 *     ?reset@?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@@wil@@QEAAXXZ @ 0x1800EE76C (-reset@-$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFre.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStream::GetEffectsFromApo(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // esi
  __int64 (*v7)(void); // rdi
  int v8; // eax
  unsigned int v9; // ebx
  void *v10; // rbx
  void *v11; // rdi
  HANDLE CurrentProcess; // rax
  const char *v13; // r9
  unsigned int LastError; // ebx
  const char *v15; // r9
  __int64 result; // rax
  __int64 (__fastcall *v17)(__int64, _QWORD *, unsigned int *, HANDLE); // rdi
  HANDLE v18; // rbx
  int v19; // eax
  unsigned int v20; // ebx
  __int64 v21; // rbx
  char *v22; // rdi
  unsigned int i; // r8d
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  char *v27; // [rsp+40h] [rbp-48h] BYREF
  __int64 v28; // [rsp+48h] [rbp-40h]
  _QWORD v29[7]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v31; // [rsp+90h] [rbp+8h] BYREF
  HANDLE TargetHandle; // [rsp+98h] [rbp+10h] BYREF

  v6 = 0;
  v27 = 0LL;
  v28 = 0LL;
  v31 = 0;
  v7 = *(__int64 (**)(void))(*(_QWORD *)a2 + 56LL);
  wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset((__int64)&v27);
  try
  {
    v8 = v7();
    v9 = v8;
    if ( v8 == -2147467263 )
    {
      TargetHandle = 0LL;
      v10 = *(void **)&g_ADGProcess[2].LockCount;
      v11 = *(void **)(a1 + 360);
      CurrentProcess = GetCurrentProcess();
      if ( !DuplicateHandle(CurrentProcess, v11, v10, &TargetHandle, 0, 0, 2u) )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x71C,
                      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                      v13);
        wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset((__int64)&v27);
        return LastError;
      }
      v29[0] = 0LL;
      v29[1] = 0LL;
      v17 = *(__int64 (__fastcall **)(__int64, _QWORD *, unsigned int *, HANDLE))(*(_QWORD *)a2 + 48LL);
      v18 = TargetHandle;
      wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset(v29);
      v19 = v17(a2, v29, &v31, v18);
      v20 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x71F,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v19);
        wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset(v29);
        wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset((__int64)&v27);
        return v20;
      }
      v21 = v31;
      v22 = (char *)CoTaskMemAlloc(24LL * v31);
      wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset((__int64)&v27);
      v27 = v22;
      v28 = v21;
      if ( !v22 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x722,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)0x8007000ELL);
        wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset(v29);
        wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset((__int64)&v27);
        return 2147942414LL;
      }
      for ( i = 0; i < v31; ++i )
      {
        v24 = 3LL * i;
        *(_OWORD *)&v22[8 * v24] = *(_OWORD *)(v29[0] + 16LL * i);
        *(_DWORD *)&v27[8 * v24 + 16] = 0;
        *(_DWORD *)&v27[8 * v24 + 20] = 1;
        v22 = v27;
      }
      wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset(v29);
LABEL_15:
      while ( v6 < v31 )
      {
        v25 = (__int64)&v27[24 * v6];
        v26 = *(_QWORD *)(a3 + 8);
        if ( v26 == *(_QWORD *)(a3 + 16) )
        {
          std::vector<AudioEffectInternal>::_Emplace_reallocate<AudioEffectInternal const &>(
            (const void **)a3,
            (_BYTE *)v26,
            v25);
        }
        else
        {
          *(_OWORD *)v26 = *(_OWORD *)v25;
          *(_QWORD *)(v26 + 16) = *(_QWORD *)(v25 + 16);
          *(_QWORD *)(a3 + 8) += 24LL;
        }
        ++v6;
      }
      wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset((__int64)&v27);
      return 0LL;
    }
    if ( v8 >= 0 )
      goto LABEL_15;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x72B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v8);
    wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset((__int64)&v27);
    result = v9;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x733,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                           v15);
  }
  return result;
}
