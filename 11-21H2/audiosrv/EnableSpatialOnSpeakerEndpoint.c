/*
 * XREFs of EnableSpatialOnSpeakerEndpoint @ 0x180053958
 * Callers:
 *     ReconsiderSpatialOnComboEndpoints @ 0x1800537D8 (ReconsiderSpatialOnComboEndpoints.c)
 *     DisableSpatialOnInternalSpeakers @ 0x18014EAD0 (DisableSpatialOnInternalSpeakers.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180143960 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTempl.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EnableSpatialOnSpeakerEndpoint(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  int v4; // r15d
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // esi
  __int64 (__fastcall *v12)(__int64, void **); // rbx
  int v13; // eax
  int v14; // r8d
  int v15; // r9d
  int v16; // [rsp+20h] [rbp-60h]
  void *v17; // [rsp+40h] [rbp-40h] BYREF
  __int64 v18; // [rsp+48h] [rbp-38h] BYREF
  __int64 v19; // [rsp+50h] [rbp-30h] BYREF
  void *v20; // [rsp+58h] [rbp-28h] BYREF
  __int64 v21; // [rsp+60h] [rbp-20h] BYREF
  PROPVARIANT pvar[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v23; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  int v25; // [rsp+B8h] [rbp+38h] BYREF

  v4 = a4;
  v18 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, 2LL, &v18);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x70,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)v8,
      v16);
    goto LABEL_6;
  }
  *(_OWORD *)pvar = 0LL;
  v23 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v18 + 40LL))(
          v18,
          &PKEY_Endpoint_SpatialNotAllowed,
          pvar);
  if ( v10 < 0
    || LOWORD(pvar[0]) == 11 && LOWORD(pvar[1]) == (_WORD)v4 - 1
    || (PropVariantClear(pvar),
        LOWORD(pvar[0]) = 11,
        LOWORD(pvar[1]) = v4 - 1,
        v10 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v18 + 48LL))(
                v18,
                &PKEY_Endpoint_SpatialNotAllowed,
                pvar),
        v10 < 0) )
  {
LABEL_5:
    v9 = v10;
    goto LABEL_6;
  }
  v17 = 0LL;
  v12 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)a2 + 40LL);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &v17,
    0LL);
  v13 = v12(a2, &v17);
  v9 = v13;
  if ( v13 >= 0 )
  {
    if ( *(_DWORD *)a1 > 4u
      && (*(_QWORD *)(a1 + 16) & 0x400000000010LL) != 0
      && (*(_QWORD *)(a1 + 24) & 0x400000000010LL) == *(_QWORD *)(a1 + 24) )
    {
      v25 = v4;
      v19 = a3;
      v20 = v17;
      v21 = 2048LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        a1,
        (unsigned int)&unk_18018F350,
        v14,
        v15,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v25);
    }
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v17);
    goto LABEL_5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x87,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
    (const char *)(unsigned int)v13,
    v16);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v17);
LABEL_6:
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return v9;
}
