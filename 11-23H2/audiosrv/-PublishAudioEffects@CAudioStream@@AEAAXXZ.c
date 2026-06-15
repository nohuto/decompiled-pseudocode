/*
 * XREFs of ?PublishAudioEffects@CAudioStream@@AEAAXXZ @ 0x1800ECAE0
 * Callers:
 *     wistd::__function::__func__lambda_6a6f76b54097c0dbebd0b6d97fee1068__void___cdecl(void)_::operator() @ 0x1800EB430 (wistd--__function--__func__lambda_6a6f76b54097c0dbebd0b6d97fee1068__void___cdecl(void)_--operato.c)
 *     ?SetUpAudioEffectsChangedWnfState@CAudioStream@@AEAAJXZ @ 0x1800EDE70 (-SetUpAudioEffectsChangedWnfState@CAudioStream@@AEAAJXZ.c)
 *     std::_Func_impl_no_alloc__lambda_fd18c6a3b571192092869a19e3ba0802__void_::_Do_call @ 0x1800EE6D0 (std--_Func_impl_no_alloc__lambda_fd18c6a3b571192092869a19e3ba0802__void_--_Do_call.c)
 * Callees:
 *     ?reset@?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@@wil@@QEAAXXZ @ 0x18000973C (-reset@-$unique_any_array_ptr@UAudioEffectInternal@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFr.c)
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006707C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U_GUID@@U?$default_delete@$$BY0A@U_GUID@@@std@@@std@@QEAA@XZ @ 0x1800EB324 (--1-$unique_ptr@$$BY0A@U_GUID@@U-$default_delete@$$BY0A@U_GUID@@@std@@@std@@QEAA@XZ.c)
 *     ?GetAudioEffects@CAudioStream@@AEAAJPEAPEAUAudioEffectInternal@@PEAI@Z @ 0x1800EB69C (-GetAudioEffects@CAudioStream@@AEAAJPEAPEAUAudioEffectInternal@@PEAI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioStream::PublishAudioEffects(CAudioStream *this)
{
  __int64 v2; // r14
  unsigned __int64 v3; // rax
  _DWORD *v4; // rax
  void *v5; // rdi
  _DWORD *v6; // rcx
  char *v7; // rdx
  __int64 v8; // r8
  struct AudioEffectInternal *v9[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+58h] [rbp+10h] BYREF
  void *v11; // [rsp+60h] [rbp+18h] BYREF

  v9[0] = 0LL;
  v9[1] = 0LL;
  wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset((__int64)v9);
  if ( (int)CAudioStream::GetAudioEffects(this, v9, &v10) >= 0 )
  {
    if ( v10 )
    {
      v2 = v10;
      v3 = 24LL * v10;
      if ( !is_mul_ok(v10, 0x18uLL) )
        v3 = -1LL;
      v4 = operator new[](v3, (const struct std::nothrow_t *)&std::nothrow);
      v5 = v4;
      v11 = v4;
      if ( v4 )
      {
        if ( v10 )
        {
          v6 = v4 + 4;
          v7 = (char *)(v9[0] - (struct AudioEffectInternal *)v4);
          v8 = v2;
          do
          {
            *((_OWORD *)v6 - 1) = *(_OWORD *)((char *)v6 + (_QWORD)v7 - 16);
            *v6 = *(_DWORD *)((char *)v6 + (_QWORD)v7);
            v6[1] = *(_DWORD *)((char *)v6 + (_QWORD)v7 + 4) != 0;
            v6 += 6;
            --v8;
          }
          while ( v8 );
        }
        RtlPublishWnfStateData(*(_QWORD *)((char *)this + 348), 0LL, v4, 24 * v2, 0LL);
        operator delete(v5);
      }
      else
      {
        std::unique_ptr<_GUID [0]>::~unique_ptr<_GUID [0]>(&v11);
      }
    }
    else
    {
      RtlPublishWnfStateData(*(_QWORD *)((char *)this + 348), 0LL, 0LL, 0LL, 0LL);
    }
  }
  wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset((__int64)v9);
}
