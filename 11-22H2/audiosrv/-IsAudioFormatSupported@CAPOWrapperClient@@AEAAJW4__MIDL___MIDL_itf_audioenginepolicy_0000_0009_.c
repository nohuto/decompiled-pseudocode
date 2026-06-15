/*
 * XREFs of ?IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0001@@PEAUIAudioMediaType@@1PEAPEAU3@@Z @ 0x1800618F8
 * Callers:
 *     ?IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x1800618D0 (-IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?IsOutputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x180080F40 (-IsOutputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreateAudioMediaType_Unsafe @ 0x1800699C4 (CreateAudioMediaType_Unsafe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080F10 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAPOWrapperClient::IsAudioFormatSupported(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v6; // r14d
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // edi
  void *v13; // rcx
  int AudioMediaType_Unsafe; // eax
  unsigned int v15; // ebx
  void *v16; // rcx
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rdx
  int v21[2]; // [rsp+38h] [rbp-18h] BYREF
  char v22; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  LPVOID pv; // [rsp+70h] [rbp+20h] BYREF

  v6 = a2;
  if ( !*(_QWORD *)(a1 + 80) )
  {
    v15 = -2147024809;
    v18 = 279LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
      (const char *)v15);
    return v15;
  }
  v8 = 0LL;
  if ( a3 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 40LL))(a3);
    if ( !v8 )
    {
      v15 = -2004287480;
      v18 = 285LL;
      goto LABEL_17;
    }
  }
  v9 = 0LL;
  if ( a4 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 40LL))(a4, a2, a3, 0LL);
    if ( !v9 )
    {
      v15 = -2004287480;
      v18 = 292LL;
      goto LABEL_17;
    }
  }
  pv = 0LL;
  v10 = *(__int64 **)(a1 + 80);
  v11 = *v10;
  *(_QWORD *)v21 = 0LL;
  v22 = 1;
  v12 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, __int64, int *))(v11 + 40))(v10, v6, v8, v9, v21);
  if ( v22 )
  {
    v13 = pv;
    pv = *(LPVOID *)v21;
    if ( v13 )
      CoTaskMemFree(v13);
  }
  if ( v12 < 0 )
  {
    v15 = -2005073917;
    if ( v12 != -2005073917 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12A,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
        (const char *)(unsigned int)v12);
      v15 = v12;
    }
    goto LABEL_20;
  }
  if ( !pv )
  {
    v15 = -2004287480;
    v19 = 2290679816LL;
    v20 = 300LL;
    goto LABEL_19;
  }
  AudioMediaType_Unsafe = CreateAudioMediaType_Unsafe(pv, (unsigned int)*((unsigned __int16 *)pv + 8) + 18, a5);
  v15 = AudioMediaType_Unsafe;
  if ( AudioMediaType_Unsafe < 0 )
  {
    v19 = (unsigned int)AudioMediaType_Unsafe;
    v20 = 307LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
      (const char *)v19);
LABEL_20:
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
    return v15;
  }
  v16 = pv;
  pv = 0LL;
  if ( v16 )
    CoTaskMemFree(v16);
  return (unsigned int)v12;
}
