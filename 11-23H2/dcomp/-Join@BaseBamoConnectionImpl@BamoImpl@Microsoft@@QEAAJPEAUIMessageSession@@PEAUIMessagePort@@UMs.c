/*
 * XREFs of ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x18016CB10
 * Callers:
 *     ??$CreateClient@VDiagCallbackClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVDiagCallbackClientConnection@@@Z @ 0x18016985C (--$CreateClient@VDiagCallbackClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessa.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x180012A48 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x180021CB8 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180069220 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18009938C (-reset@-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18016A220 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18016A878 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18016AA18 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-FreeProcessHeap@details@.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18016AC8C (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UIMessageSession@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIMessageSession@@@Z @ 0x18016AD1C (--4-$com_ptr_t@UIMessageSession@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIMessageSessio.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::Join(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  HRESULT v7; // eax
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  unsigned int v10; // edi
  void *v11; // rdx
  int v12; // eax
  __int64 v13; // rdi
  int v14; // eax
  int ConversationHost; // eax
  __int64 (__fastcall *v17)(__int64, __int64); // rdi
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rcx
  void *v22; // rdx
  int v23; // [rsp+20h] [rbp-69h]
  __int64 v24; // [rsp+60h] [rbp-29h] BYREF
  wil::details *v25; // [rsp+68h] [rbp-21h] BYREF
  unsigned __int64 v26; // [rsp+70h] [rbp-19h] BYREF
  int v27; // [rsp+78h] [rbp-11h]
  __int128 v28; // [rsp+80h] [rbp-9h] BYREF
  unsigned __int16 v29[4]; // [rsp+90h] [rbp+7h] BYREF
  int v30; // [rsp+98h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+4Fh]

  if ( *(_QWORD *)(a1 + 64) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      372LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      a4);
  if ( *(_BYTE *)(a1 + 218) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      380LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      a4);
  v24 = 0LL;
  *(_QWORD *)v29 = *(_QWORD *)L"_BAMO";
  v30 = *(_DWORD *)L"O";
  v7 = StringCchLengthW(L"Microsoft.DiagCallbackConversation", 0x7FFFFFFFuLL, &v26);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      400LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v7,
      v23);
  v9 = v26;
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &v25,
    v8,
    v26 + 6);
  if ( !v25 )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x194,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)0x8007000ELL);
LABEL_13:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(
      &v25,
      v11);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v24);
    return v10;
  }
  v12 = StringCchCatW((unsigned __int16 *)v25, v9 + 6, v29);
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      406LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v12,
      v23);
  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v26,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(a1 + 96));
  v13 = *(_QWORD *)a2;
  wil::com_ptr_t<IUnknown,wil::err_returncode_policy>::reset(&v24);
  v28 = *(_OWORD *)a4;
  v14 = (*(__int64 (__fastcall **)(__int64, wil::details *, const unsigned __int16 *, __int128 *))(v13 + 336))(
          a2,
          v25,
          L"Microsoft.DiagCallbackConversation",
          &v28);
  v10 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C9,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v14);
    Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::BamoImplObject **)&v26);
    goto LABEL_13;
  }
  wil::com_ptr_t<IUnknown,wil::err_returncode_policy>::reset((__int64 *)(a1 + 80));
  wil::com_ptr_t<IUnknown,wil::err_returncode_policy>::reset((__int64 *)(a1 + 72));
  ConversationHost = CoreUICallCreateConversationHost(a2, v24, a1 + 72, a1 + 80);
  if ( ConversationHost < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      476LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)ConversationHost,
      3);
  v17 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 40LL);
  wil::com_ptr_t<IUnknown,wil::err_returncode_policy>::reset((__int64 *)(a1 + 56));
  v18 = v17(a2, a1 + 56);
  if ( v18 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      483LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v18,
      3);
  v19 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 56) + 80LL))(*(_QWORD *)(a1 + 56), a1 + 24);
  if ( v19 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      485LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v19,
      3);
  *(_DWORD *)(a1 + 28) = v27;
  v20 = v24;
  v21 = *(_QWORD *)(a1 + 64);
  v24 = 0LL;
  *(_QWORD *)(a1 + 64) = v20;
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  wil::com_ptr_t<IMessageSession,wil::err_returncode_policy>::operator=((__int64 *)(a1 + 48), a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::BamoImplObject **)&v26);
  wil::details::FreeProcessHeap(v25, v22);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v24);
  return 0LL;
}
