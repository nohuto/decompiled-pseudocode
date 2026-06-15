/*
 * XREFs of ?GetControllableSystemEffectsList@CAPOWrapperClient@@UEAAJPEAPEAUAUDIO_SYSTEMEFFECT@@PEAIPEAX@Z @ 0x1800CF4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@@wil@@QEAAXXZ @ 0x18000973C (-reset@-$unique_any_array_ptr@UAudioEffectInternal@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFr.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAPOWrapperClient::GetControllableSystemEffectsList(
        CAPOWrapperClient *this,
        struct AUDIO_SYSTEMEFFECT **a2,
        unsigned int *a3,
        void *a4)
{
  __int64 v4; // r14
  __int64 (__fastcall *v8)(__int64, _QWORD *, unsigned int *, void *); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  struct AUDIO_SYSTEMEFFECT *v13; // r8
  __int64 i; // r9
  __int64 v15; // rdx
  BOOL v16; // ecx
  _QWORD v18[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = *((_QWORD *)this + 7);
  if ( !v4 || !g_ADGProcess )
  {
    v10 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE9,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
      (const char *)0x80070057LL);
    return v10;
  }
  v18[0] = 0LL;
  v18[1] = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64, _QWORD *, unsigned int *, void *))(*(_QWORD *)v4 + 56LL);
  wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset((__int64)v18);
  v9 = v8(v4, v18, a3, a4);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( *a3 )
    {
      v13 = (struct AUDIO_SYSTEMEFFECT *)CoTaskMemAlloc(24LL * *a3);
      if ( !v13 )
      {
        v10 = -2147024882;
        v12 = 245LL;
        v11 = 2147942414LL;
        goto LABEL_9;
      }
      for ( i = 0LL; (unsigned int)i < *a3; *((_DWORD *)v13 + 2 * v15 + 5) = v16 )
      {
        v15 = 3 * i;
        *(_OWORD *)((char *)v13 + 8 * v15) = *(_OWORD *)(v18[0] + 24 * i);
        *((_DWORD *)v13 + 2 * v15 + 4) = *(_DWORD *)(v18[0] + 24 * i + 16);
        v16 = *(_DWORD *)(v18[0] + 24 * i + 20) != 0;
        i = (unsigned int)(i + 1);
      }
      *a2 = v13;
    }
    else
    {
      *a2 = 0LL;
    }
    v10 = 0;
    goto LABEL_14;
  }
  v11 = (unsigned int)v9;
  v12 = 236LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
    (const char *)v11);
LABEL_14:
  wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset((__int64)v18);
  return v10;
}
