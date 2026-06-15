/*
 * XREFs of ?GetProcessingModes@@YAJPEAUIPropertyStore@@U_tagpropertykey@@PEAIPEAPEAU_GUID@@@Z @ 0x180023988
 * Callers:
 *     ?ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigurationSettings@@@Z @ 0x180022BF0 (-ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigura.c)
 * Callees:
 *     ??$make_unique_cotaskmem_nothrow@$$BY0A@U_GUID@@@wil@@YA?AV?$unique_ptr@$$BY0A@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@_K@Z @ 0x180023B8C (--$make_unique_cotaskmem_nothrow@$$BY0A@U_GUID@@@wil@@YA-AV-$unique_ptr@$$BY0A@U_GUID@@U-$functi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080EE0 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetProcessingModes(
        struct IPropertyStore *a1,
        struct _tagpropertykey *a2,
        unsigned int *a3,
        struct _GUID **a4)
{
  unsigned int v6; // edi
  struct _GUID *v8; // rbx
  __int64 v9; // rsi
  unsigned int v10; // eax
  HRESULT v11; // eax
  LPVOID pv; // [rsp+20h] [rbp-28h] BYREF
  PROPVARIANT pvar[2]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v14; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]

  *a4 = 0LL;
  *a3 = 0;
  *(_OWORD *)pvar = 0LL;
  v14 = 0LL;
  if ( ((int (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->GetValue)(
         a1,
         a2,
         pvar) < 0
    || LOWORD(pvar[0]) != 4127
    || !LODWORD(pvar[1]) )
  {
    goto LABEL_3;
  }
  wil::make_unique_cotaskmem_nothrow<_GUID [0]>(&pv, LODWORD(pvar[1]));
  v8 = (struct _GUID *)pv;
  if ( !pv )
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x123,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
      (const char *)0x8007000ELL,
      0);
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
    goto LABEL_4;
  }
  v9 = 0LL;
  v10 = (unsigned int)pvar[1];
  if ( !LODWORD(pvar[1]) )
  {
LABEL_10:
    *a3 = v10;
    *a4 = v8;
LABEL_3:
    v6 = 0;
    goto LABEL_4;
  }
  while ( 1 )
  {
    v11 = CLSIDFromString(*(LPCOLESTR *)(v14 + 8 * v9), &v8[(unsigned int)v9]);
    v6 = v11;
    if ( v11 < 0 )
      break;
    v9 = (unsigned int)(v9 + 1);
    v10 = (unsigned int)pvar[1];
    if ( (unsigned int)v9 >= LODWORD(pvar[1]) )
      goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x127,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
    (const char *)(unsigned int)v11,
    (int)pv);
  CoTaskMemFree(v8);
LABEL_4:
  PropVariantClear(pvar);
  return v6;
}
