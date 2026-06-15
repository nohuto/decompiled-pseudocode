/*
 * XREFs of EnableSpatialOnSpeakerEndpoint @ 0x180020000
 * Callers:
 *     ReconsiderSpatialOnComboEndpoints @ 0x18001F818 (ReconsiderSpatialOnComboEndpoints.c)
 *     DisableSpatialOnInternalSpeakers @ 0x180155E80 (DisableSpatialOnInternalSpeakers.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180005074 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTempl.c)
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EnableSpatialOnSpeakerEndpoint(_DWORD *a1, __int64 a2, const WCHAR *a3, unsigned __int8 a4)
{
  int v4; // r15d
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // esi
  __int64 (__fastcall *v12)(__int64, LPVOID *); // rbx
  int v13; // eax
  int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // [rsp+20h] [rbp-60h]
  LPVOID pv; // [rsp+40h] [rbp-40h] BYREF
  __int64 v19; // [rsp+48h] [rbp-38h] BYREF
  const WCHAR *v20; // [rsp+50h] [rbp-30h] BYREF
  const WCHAR *v21; // [rsp+58h] [rbp-28h] BYREF
  __int64 v22; // [rsp+60h] [rbp-20h] BYREF
  PROPVARIANT pvar[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v24; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  int v26; // [rsp+B8h] [rbp+38h] BYREF

  v4 = a4;
  v19 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, 2LL, &v19);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6D,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)v8,
      v17);
    goto LABEL_6;
  }
  *(_OWORD *)pvar = 0LL;
  v24 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v19 + 40LL))(
          v19,
          &PKEY_Endpoint_SpatialNotAllowed,
          pvar);
  if ( v10 < 0 || LOWORD(pvar[0]) == 11 && LOWORD(pvar[1]) == (_WORD)v4 - 1 )
    goto LABEL_5;
  PropVariantClear(pvar);
  LOWORD(pvar[0]) = 11;
  LOWORD(pvar[1]) = v4 - 1;
  v10 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v19 + 48LL))(
          v19,
          &PKEY_Endpoint_SpatialNotAllowed,
          pvar);
  if ( v10 < 0 )
    goto LABEL_5;
  pv = 0LL;
  v12 = *(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a2 + 40LL);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v13 = v12(a2, &pv);
  v9 = v13;
  if ( v13 >= 0 )
  {
    if ( *a1 > 4u && (unsigned __int8)tlgKeywordOn(a1, 0x400000000010LL) )
    {
      v26 = v4;
      v20 = a3;
      v21 = (const WCHAR *)pv;
      v22 = 2048LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v14,
        (int)&unk_1801987EC,
        v15,
        v16,
        (__int64)&v22,
        &v21,
        &v20,
        (__int64)&v26);
    }
    if ( pv )
      CoTaskMemFree(pv);
LABEL_5:
    v9 = v10;
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x84,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
    (const char *)(unsigned int)v13,
    v17);
  if ( pv )
    CoTaskMemFree(pv);
LABEL_6:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v19);
  return v9;
}
