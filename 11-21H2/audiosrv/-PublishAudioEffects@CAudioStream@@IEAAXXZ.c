/*
 * XREFs of ?PublishAudioEffects@CAudioStream@@IEAAXXZ @ 0x1800E4D1C
 * Callers:
 *     wistd::__function::__func__lambda_a5055f5d6d4048a91be95dc35b5ac128__void___cdecl(void)_::operator() @ 0x1800E3C70 (wistd--__function--__func__lambda_a5055f5d6d4048a91be95dc35b5ac128__void___cdecl(void)_--operato.c)
 *     ?SetUpAudioEffectsChangedWnfState@CAudioStream@@IEAAJXZ @ 0x1800E5954 (-SetUpAudioEffectsChangedWnfState@CAudioStream@@IEAAJXZ.c)
 *     std::_Func_impl_no_alloc__lambda_0e8607873bfb62d69866cc1d20cee6d9__void_::_Do_call @ 0x1800E5EE0 (std--_Func_impl_no_alloc__lambda_0e8607873bfb62d69866cc1d20cee6d9__void_--_Do_call.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x18003CC5C (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005F02C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?GetAudioEffects@CAudioStream@@IEAAJPEAPEAUAudioEffectInternal@@PEAI@Z @ 0x1800E3E94 (-GetAudioEffects@CAudioStream@@IEAAJPEAPEAUAudioEffectInternal@@PEAI@Z.c)
 *     ?reset@?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@@wil@@QEAAXXZ @ 0x1800E5FA4 (-reset@-$unique_any_array_ptr@UAudioEffectInternal@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFr.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioStream::PublishAudioEffects(CAudioStream *this, void *a2)
{
  __int64 v3; // r14
  SIZE_T v4; // rax
  _DWORD *v5; // rax
  void *v6; // rbx
  _DWORD *v7; // rcx
  char *v8; // rdx
  __int64 v9; // r8
  struct AudioEffectInternal *v10[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF

  wil::details::ResetEvent(*((wil::details **)this + 43), a2);
  v10[0] = 0LL;
  v10[1] = 0LL;
  wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset(v10);
  if ( (int)CAudioStream::GetAudioEffects(this, v10, &v11) >= 0 )
  {
    if ( v11 )
    {
      v3 = v11;
      v4 = 24LL * v11;
      if ( !is_mul_ok(v11, 0x18uLL) )
        v4 = -1LL;
      v5 = operator new[](v4, (const struct std::nothrow_t *)&std::nothrow);
      v6 = v5;
      if ( v5 )
      {
        if ( v11 )
        {
          v7 = v5 + 4;
          v8 = (char *)(v10[0] - (struct AudioEffectInternal *)v5);
          v9 = (unsigned int)v3;
          do
          {
            *((_OWORD *)v7 - 1) = *(_OWORD *)((char *)v7 + (_QWORD)v8 - 16);
            *v7 = *(_DWORD *)((char *)v7 + (_QWORD)v8);
            v7[1] = *(_DWORD *)((char *)v7 + (_QWORD)v8 + 4) != 0;
            v7 += 6;
            --v9;
          }
          while ( v9 );
        }
        RtlPublishWnfStateData(*(_QWORD *)((char *)this + 332), 0LL, v5, 24 * v3, 0LL);
        operator delete(v6);
      }
    }
    else
    {
      RtlPublishWnfStateData(*(_QWORD *)((char *)this + 332), 0LL, 0LL, 0LL, 0LL);
    }
  }
  wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset(v10);
}
