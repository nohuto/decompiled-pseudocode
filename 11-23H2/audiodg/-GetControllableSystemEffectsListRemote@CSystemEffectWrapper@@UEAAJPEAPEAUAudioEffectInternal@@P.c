/*
 * XREFs of ?GetControllableSystemEffectsListRemote@CSystemEffectWrapper@@UEAAJPEAPEAUAudioEffectInternal@@PEAIPEAX@Z @ 0x1400759B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@@wil@@QEAAXXZ @ 0x14006EE50 (-reset@-$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFre.c)
 */

__int64 __fastcall CSystemEffectWrapper::GetControllableSystemEffectsListRemote(
        CSystemEffectWrapper *this,
        struct AudioEffectInternal **a2,
        unsigned int *a3,
        void *a4)
{
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 v9; // r14
  __int64 (__fastcall *v10)(__int64, _QWORD *, unsigned int *, void *); // rbx
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rdx
  struct AudioEffectInternal *v14; // r8
  unsigned int v15; // eax
  __int64 i; // r9
  __int64 v17; // rdx
  BOOL v18; // ecx
  _QWORD v20[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v22; // [rsp+68h] [rbp+28h] BYREF

  if ( a2 )
  {
    if ( !a3 )
    {
      v7 = 829LL;
      goto LABEL_3;
    }
    *a2 = 0LL;
    *a3 = 0;
    v9 = *((_QWORD *)this + 15);
    if ( !v9 )
    {
      v8 = -2147467263;
      v7 = 834LL;
      goto LABEL_4;
    }
    v20[0] = 0LL;
    v20[1] = 0LL;
    v22 = 0;
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD *, unsigned int *, void *))(*(_QWORD *)v9 + 32LL);
    wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset((__int64)v20);
    v11 = v10(v9, v20, &v22, a4);
    v8 = v11;
    if ( v11 < 0 )
    {
      v12 = (unsigned int)v11;
      v13 = 838LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\systemeffectwrapper.cpp",
        (const char *)v12);
LABEL_19:
      wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset((__int64)v20);
      return v8;
    }
    if ( v22 )
    {
      v14 = (struct AudioEffectInternal *)CoTaskMemAlloc(24LL * v22);
      if ( !v14 )
      {
        v8 = -2147024882;
        v13 = 846LL;
        v12 = 2147942414LL;
        goto LABEL_14;
      }
      v15 = v22;
      for ( i = 0LL; (unsigned int)i < v22; v15 = v22 )
      {
        v17 = 3 * i;
        *(_OWORD *)((char *)v14 + 8 * v17) = *(_OWORD *)(v20[0] + 24 * i);
        *((_DWORD *)v14 + 2 * v17 + 4) = *(_DWORD *)(v20[0] + 24 * i + 16);
        v18 = *(_DWORD *)(v20[0] + 24 * i + 20) == 1;
        i = (unsigned int)(i + 1);
        *((_DWORD *)v14 + 2 * v17 + 5) = v18;
      }
      *a3 = v15;
      *a2 = v14;
    }
    v8 = 0;
    goto LABEL_19;
  }
  v7 = 828LL;
LABEL_3:
  v8 = -2147467261;
LABEL_4:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\systemeffectwrapper.cpp",
    (const char *)v8);
  return v8;
}
