/*
 * XREFs of ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x180034934
 * Callers:
 *     ?JoinConversationAsServer@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG@Z @ 0x180034664 (-JoinConversationAsServer@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMess.c)
 *     ?JoinConversationAsClient@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@UMsgScopeID@@PEBG@Z @ 0x180034FF8 (-JoinConversationAsClient@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@UMsgScope.c)
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000B2C0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180023290 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180033458 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180034E08 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800558A8 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800C08C8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-FreeProcessHeap@details@.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::Join(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        const char *a4,
        _WORD *a5,
        char a6)
{
  __int64 v8; // rcx
  _WORD *v9; // rax
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rbx
  wil::details *v13; // rdi
  __int64 v14; // rcx
  wil::details *v15; // rax
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rcx
  char *v19; // rdx
  __int64 v20; // r9
  signed __int64 v21; // rax
  __int16 v22; // r8
  char *v23; // rax
  __int64 v24; // r14
  volatile signed __int32 *v25; // rbx
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 (__fastcall *v28)(__int64 *, wil::details *, _WORD *, __int64); // r14
  __int64 v29; // rcx
  int v30; // eax
  unsigned int v31; // r14d
  __int64 v32; // rcx
  __int64 v33; // rcx
  int ConversationHost; // eax
  __int64 (__fastcall *v35)(__int64 *, __int64); // r15
  __int64 v36; // rcx
  int v37; // eax
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r14
  unsigned __int64 v42; // rdx
  const char *v43; // r9
  signed __int32 v44; // edx
  bool v45; // sf
  __int64 (__fastcall *v47)(__int64 *, wil::details *, _WORD *, __int128 *); // r14
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // r8
  int v52; // [rsp+20h] [rbp-A9h]
  int *v53; // [rsp+20h] [rbp-A9h]
  __int64 v54; // [rsp+60h] [rbp-69h] BYREF
  int v55; // [rsp+68h] [rbp-61h]
  wil::details *v56; // [rsp+70h] [rbp-59h] BYREF
  volatile signed __int32 *v57; // [rsp+78h] [rbp-51h] BYREF
  __int64 v58; // [rsp+80h] [rbp-49h]
  int v59[4]; // [rsp+90h] [rbp-39h] BYREF
  __int128 v60; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-19h] BYREF
  int v62; // [rsp+B8h] [rbp-11h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+4Fh]

  *(_QWORD *)v59 = a4;
  v58 = a3;
  if ( *(_QWORD *)(a1 + 64) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x174,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      a4);
  if ( *(_BYTE *)(a1 + 218) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x17C,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      a4);
  v54 = 0LL;
  v61 = *(_QWORD *)L"_BAMO";
  v62 = *(_DWORD *)L"O";
  if ( !a5 )
  {
    v10 = 2147942487LL;
LABEL_60:
    v11 = 0LL;
    goto LABEL_8;
  }
  v8 = 0x7FFFFFFFLL;
  v9 = a5;
  do
  {
    if ( !*v9 )
      break;
    ++v9;
    --v8;
  }
  while ( v8 );
  v10 = v8 == 0 ? 0x80070057 : 0;
  v11 = (0x7FFFFFFF - v8) & -(__int64)(v8 != 0);
  if ( !v8 )
    goto LABEL_60;
LABEL_8:
  if ( (int)v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x190,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)v10,
      v52);
  v12 = v11 + 6;
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &v56,
    a5,
    v12);
  v13 = v56;
  if ( !v56 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x194,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)0x8007000ELL);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v56);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v54);
    return 2147942414LL;
  }
  if ( (unsigned __int64)(v12 - 1) > 0x7FFFFFFE )
  {
    v16 = 2147942487LL;
  }
  else
  {
    v14 = v12;
    v15 = v56;
    do
    {
      if ( !*(_WORD *)v15 )
        break;
      v15 = (wil::details *)((char *)v15 + 2);
      --v14;
    }
    while ( v14 );
    v16 = v14 == 0 ? 0x80070057 : 0;
    if ( v14 )
      v17 = v12 - v14;
    else
      v17 = 0LL;
    if ( v14 )
    {
      v18 = v12 - v17;
      v19 = (char *)v56 + 2 * v17;
      if ( v12 != v17 )
      {
        v20 = 2147483646LL;
        v21 = (char *)&v61 - v19;
        do
        {
          if ( !v20 )
            break;
          v22 = *(_WORD *)&v19[v21];
          if ( !v22 )
            break;
          *(_WORD *)v19 = v22;
          v19 += 2;
          --v20;
          --v18;
        }
        while ( v18 );
      }
      v23 = v19 - 2;
      if ( v18 )
        v23 = v19;
      *(_WORD *)v23 = 0;
      v16 = v18 == 0 ? 0x8007007A : 0;
    }
  }
  if ( (int)v16 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x196,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)v16,
      v52);
  v24 = *(_QWORD *)(a1 + 96);
  v25 = 0LL;
  v57 = 0LL;
  v26 = *(_QWORD *)(v24 + 32);
  if ( *(_DWORD *)(v26 + 184) != GetCurrentThreadId() )
  {
    v57 = (volatile signed __int32 *)v24;
    _InterlockedIncrement((volatile signed __int32 *)(v24 + 8));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v26 + 16) + 24LL))(*(_QWORD *)(v26 + 16));
    *(_DWORD *)(v26 + 184) = GetCurrentThreadId();
    v13 = v56;
    v25 = v57;
  }
  v27 = *a2;
  if ( !a6 )
  {
    v47 = *(__int64 (__fastcall **)(__int64 *, wil::details *, _WORD *, __int128 *))(v27 + 336);
    v48 = v54;
    v54 = 0LL;
    if ( v48 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    v60 = **(_OWORD **)v59;
    LODWORD(v53) = 3;
    v30 = v47(a2, v13, a5, &v60);
    v31 = v30;
    if ( v30 >= 0 )
      goto LABEL_32;
    v49 = 457LL;
LABEL_66:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v49,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v30);
    Microsoft::BamoImpl::InternalLock::~InternalLock(&v57, v50, v51);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v56);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v54);
    return v31;
  }
  v28 = *(__int64 (__fastcall **)(__int64 *, wil::details *, _WORD *, __int64))(v27 + 296);
  v29 = v54;
  v54 = 0LL;
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  *(_OWORD *)v59 = **(_OWORD **)v59;
  v53 = v59;
  v30 = v28(a2, v13, a5, v58);
  v31 = v30;
  if ( v30 < 0 )
  {
    v49 = 435LL;
    goto LABEL_66;
  }
LABEL_32:
  v32 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 80) = 0LL;
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  v33 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = 0LL;
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  ConversationHost = CoreUICallCreateConversationHost(a2, v54, a1 + 72, a1 + 80);
  if ( ConversationHost < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1DC,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)ConversationHost,
      (int)v53);
  v35 = *(__int64 (__fastcall **)(__int64 *, __int64))(*a2 + 40);
  v36 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = 0LL;
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  v37 = v35(a2, a1 + 56);
  if ( v37 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1E3,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v37,
      (int)v53);
  v38 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 56) + 80LL))(*(_QWORD *)(a1 + 56), a1 + 24);
  if ( v38 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1E5,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v38,
      (int)v53);
  *(_DWORD *)(a1 + 28) = v55;
  v39 = v54;
  v54 = 0LL;
  v40 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = v39;
  if ( v40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  v41 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = a2;
  (*(void (__fastcall **)(__int64 *))(*a2 + 8))(a2);
  if ( v41 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  if ( v25 )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(*((Microsoft::BamoImpl::BaseBamoConnectionImpl **)v25 + 4));
    v44 = _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF);
    v45 = v44 - 1 < 0;
    v42 = (unsigned int)(v44 - 1);
    if ( v45 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
        v43);
    if ( !(_DWORD)v42 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 24LL))(v57);
    v13 = v56;
  }
  wil::details::FreeProcessHeap(v13, (void *)v42);
  if ( v54 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  return 0LL;
}
