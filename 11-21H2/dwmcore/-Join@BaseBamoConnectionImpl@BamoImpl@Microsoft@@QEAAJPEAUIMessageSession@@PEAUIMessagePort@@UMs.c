/*
 * XREFs of ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x180026484
 * Callers:
 *     ?JoinConversationAsServer@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG@Z @ 0x180026308 (-JoinConversationAsServer@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMess.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180026754 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180026854 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-FreeProcessHeap@details@wil@@YAX0@ZU-$in.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180026A28 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180026A5C (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180027C58 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180177B90 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180195110 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::Join(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        const char *a4,
        _WORD *a5)
{
  _WORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // r15
  unsigned __int16 *v14; // rbx
  int v15; // eax
  __int64 (__fastcall *v16)(__int64 *, unsigned __int16 *, _WORD *, __int64); // r15
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int ConversationHost; // eax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 (__fastcall *v24)(__int64 *, __int64); // r14
  int v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rbx
  int v30; // [rsp+20h] [rbp-89h]
  int v31; // [rsp+68h] [rbp-41h]
  unsigned __int16 *v32[2]; // [rsp+70h] [rbp-39h] BYREF
  int v33[4]; // [rsp+80h] [rbp-29h] BYREF
  unsigned __int16 v34[4]; // [rsp+90h] [rbp-19h] BYREF
  int v35; // [rsp+98h] [rbp-11h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+4Fh]

  if ( *(_QWORD *)(a1 + 64) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x172,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      a4);
  if ( *(_BYTE *)(a1 + 218) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x17A,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      a4);
  *(_QWORD *)v34 = *(_QWORD *)L"_BAMO";
  v35 = *(_DWORD *)L"O";
  if ( !a5 )
  {
    v12 = 2147942487LL;
    goto LABEL_36;
  }
  v9 = a5;
  v10 = 0x7FFFFFFFLL;
  do
  {
    if ( !*v9 )
      break;
    ++v9;
    --v10;
  }
  while ( v10 );
  v11 = (0x7FFFFFFF - v10) & -(__int64)(v10 != 0);
  v12 = v10 == 0 ? 0x80070057 : 0;
  if ( !v10 )
LABEL_36:
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x18E,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)v12,
      v30);
  v13 = v11 + 6;
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    v32,
    a5,
    v11 + 6,
    v12);
  v14 = v32[0];
  if ( v32[0] )
  {
    v15 = StringCchCatW(v32[0], v13, v34);
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x194,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v15,
        v30);
    Microsoft::BamoImpl::InternalLock::InternalLock(
      (Microsoft::BamoImpl::InternalLock *)v34,
      *(struct Microsoft::BamoImpl::ConnectionIndirector **)(a1 + 96));
    v16 = *(__int64 (__fastcall **)(__int64 *, unsigned __int16 *, _WORD *, __int64))(*a2 + 296);
    *(_OWORD *)v33 = *(_OWORD *)a4;
    v17 = v16(a2, v14, a5, a3);
    v18 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B1,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v17);
    }
    else
    {
      v19 = *(_QWORD *)(a1 + 80);
      *(_QWORD *)(a1 + 80) = 0LL;
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      v20 = *(_QWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 72) = 0LL;
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      ConversationHost = CoreUICallCreateConversationHost(a2, 0LL, a1 + 72, a1 + 80);
      if ( ConversationHost < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1DA,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)ConversationHost,
          (int)v33);
      v22 = *a2;
      v23 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 56) = 0LL;
      v24 = *(__int64 (__fastcall **)(__int64 *, __int64))(v22 + 40);
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      v25 = v24(a2, a1 + 56);
      if ( v25 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1E1,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v25,
          (int)v33);
      v26 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 56) + 80LL))(*(_QWORD *)(a1 + 56), a1 + 24);
      if ( v26 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1E3,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v26,
          (int)v33);
      *(_DWORD *)(a1 + 28) = v31;
      v27 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 64) = 0LL;
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      v28 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 48) = a2;
      (*(void (__fastcall **)(__int64 *))(*a2 + 8))(a2);
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      v18 = 0;
    }
    Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)v34);
  }
  else
  {
    v18 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x192,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)0x8007000ELL);
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(v32);
  return v18;
}
