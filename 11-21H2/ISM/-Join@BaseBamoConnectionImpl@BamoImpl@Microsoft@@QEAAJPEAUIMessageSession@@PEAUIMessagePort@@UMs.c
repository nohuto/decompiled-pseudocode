/*
 * XREFs of ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x18002CF90
 * Callers:
 *     ??$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVAnimationDataProviderConnection@@@Z @ 0x18002C4D0 (--$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 *     ??$CreateServer@VInputSystemServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVInputSystemServerConnection@@@Z @ 0x18002C5CC (--$CreateServer@VInputSystemServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessag.c)
 *     ??$CreateServer@VInputSystemInternalServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVInputSystemInternalServerConnection@@@Z @ 0x18002CC2C (--$CreateServer@VInputSystemInternalServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEA.c)
 *     ??$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVMPCManagerConnection@@@Z @ 0x18002CD44 (--$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSessio.c)
 *     ?JoinConversationAsClient@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@UMsgScopeID@@PEBG@Z @ 0x1800F5F0C (-JoinConversationAsClient@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@UMsgScope.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800484B8 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?make_process_heap_string_nothrow@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG_K@Z @ 0x18004CFAC (-make_process_heap_string_nothrow@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=10
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
  wil::details *v12; // rdi
  __int64 v13; // rcx
  wil::details *v14; // rax
  int v15; // r10d
  __int64 v16; // rcx
  char *v17; // rax
  __int64 v18; // rdx
  signed __int64 v19; // r9
  __int16 v20; // r8
  __int64 v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 (__fastcall *v25)(__int64 *, wil::details *, _WORD *, __int64); // rsi
  int v26; // eax
  unsigned int v27; // r14d
  __int64 v28; // rcx
  __int64 v29; // rcx
  int ConversationHost; // eax
  __int64 (__fastcall *v31)(__int64 *, __int64); // r14
  __int64 v32; // rcx
  int v33; // eax
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rsi
  void *v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rsi
  const char *v40; // r9
  int v41; // eax
  __int64 (__fastcall *v43)(__int64 *, wil::details *, _WORD *, __int128 *); // rsi
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rdx
  int v47; // [rsp+20h] [rbp-A9h]
  int *v48; // [rsp+20h] [rbp-A9h]
  int v49; // [rsp+68h] [rbp-61h]
  wil::details *v50; // [rsp+70h] [rbp-59h] BYREF
  __int64 v51; // [rsp+78h] [rbp-51h]
  __int64 v52; // [rsp+80h] [rbp-49h]
  int v53[4]; // [rsp+90h] [rbp-39h] BYREF
  __int128 v54; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v55; // [rsp+B0h] [rbp-19h] BYREF
  int v56; // [rsp+B8h] [rbp-11h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+4Fh]

  *(_QWORD *)v53 = a4;
  v52 = a3;
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
  v55 = *(_QWORD *)L"_BAMO";
  v56 = *(_DWORD *)L"O";
  if ( !a5 )
  {
    v10 = 2147942487LL;
LABEL_62:
    v44 = 0LL;
    goto LABEL_10;
  }
  v8 = 0x7FFFFFFFLL;
  v9 = a5;
  v10 = 0LL;
  while ( *v9 )
  {
    ++v9;
    if ( !--v8 )
    {
      v10 = 2147942487LL;
      v44 = 0LL;
      goto LABEL_9;
    }
  }
  v44 = 0x7FFFFFFF - v8;
LABEL_9:
  if ( (int)v10 < 0 )
    goto LABEL_62;
LABEL_10:
  if ( (int)v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x18E,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)v10,
      v47);
  v11 = v44 + 6;
  wil::make_process_heap_string_nothrow(&v50, a5, v44 + 6);
  v12 = v50;
  if ( !v50 )
  {
    v27 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x192,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)0x8007000ELL,
      v47);
    goto LABEL_54;
  }
  if ( (unsigned __int64)(v11 - 1) > 0x7FFFFFFE )
  {
    v15 = -2147024809;
  }
  else
  {
    v13 = v11;
    v14 = v50;
    v15 = 0;
    while ( *(_WORD *)v14 )
    {
      v14 = (wil::details *)((char *)v14 + 2);
      if ( !--v13 )
      {
        v15 = -2147024809;
        v45 = 0LL;
        goto LABEL_18;
      }
    }
    v45 = v11 - v13;
LABEL_18:
    if ( v15 >= 0 )
    {
      v16 = v11 - v45;
      v17 = (char *)v50 + 2 * v45;
      v15 = 0;
      if ( v11 == v45 )
      {
LABEL_64:
        v17 -= 2;
        v15 = -2147024774;
      }
      else
      {
        v18 = 2147483646LL;
        v19 = (char *)&v55 - v17;
        while ( v18 )
        {
          v20 = *(_WORD *)&v17[v19];
          if ( !v20 )
          {
            if ( !v16 )
              goto LABEL_64;
            break;
          }
          *(_WORD *)v17 = v20;
          v17 += 2;
          --v18;
          if ( !--v16 )
            goto LABEL_64;
        }
      }
      *(_WORD *)v17 = 0;
    }
  }
  if ( v15 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x194,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v15,
      v47);
  v21 = *(_QWORD *)(a1 + 96);
  v22 = 0LL;
  v51 = 0LL;
  v23 = *(_QWORD *)(v21 + 32);
  if ( *(_DWORD *)(v23 + 184) != GetCurrentThreadId() )
  {
    v51 = v21;
    _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v23 + 16) + 24LL))(*(_QWORD *)(v23 + 16));
    *(_DWORD *)(v23 + 184) = GetCurrentThreadId();
    v12 = v50;
    v22 = v51;
  }
  v24 = *a2;
  if ( a6 )
  {
    v25 = *(__int64 (__fastcall **)(__int64 *, wil::details *, _WORD *, __int64))(v24 + 296);
    *(_OWORD *)v53 = **(_OWORD **)v53;
    v48 = v53;
    v26 = v25(a2, v12, a5, v52);
    v27 = v26;
    if ( v26 >= 0 )
    {
LABEL_32:
      v28 = *(_QWORD *)(a1 + 80);
      *(_QWORD *)(a1 + 80) = 0LL;
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      v29 = *(_QWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 72) = 0LL;
      if ( v29 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      ConversationHost = CoreUICallCreateConversationHost(a2, 0LL, a1 + 72, a1 + 80);
      if ( ConversationHost < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1DA,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)ConversationHost,
          (int)v48);
      v31 = *(__int64 (__fastcall **)(__int64 *, __int64))(*a2 + 40);
      v32 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 56) = 0LL;
      if ( v32 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      v33 = v31(a2, a1 + 56);
      if ( v33 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1E1,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v33,
          (int)v48);
      v34 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 56) + 80LL))(*(_QWORD *)(a1 + 56), a1 + 24);
      if ( v34 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1E3,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v34,
          (int)v48);
      *(_DWORD *)(a1 + 28) = v49;
      v35 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 64) = 0LL;
      if ( v35 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      v36 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 48) = a2;
      (*(void (__fastcall **)(__int64 *))(*a2 + 8))(a2);
      if ( v36 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
      v27 = 0;
      goto LABEL_46;
    }
    v46 = 433LL;
  }
  else
  {
    v43 = *(__int64 (__fastcall **)(__int64 *, wil::details *, _WORD *, __int128 *))(v24 + 336);
    v54 = **(_OWORD **)v53;
    LODWORD(v48) = 3;
    v26 = v43(a2, v12, a5, &v54);
    v27 = v26;
    if ( v26 >= 0 )
      goto LABEL_32;
    v46 = 455LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v46,
    (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
    (const char *)(unsigned int)v26,
    (int)v48);
LABEL_46:
  if ( v22 )
  {
    v39 = *(_QWORD *)(v22 + 32);
    if ( *(_DWORD *)(v39 + 184) != GetCurrentThreadId() )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x8CF,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v40);
    *(_DWORD *)(v39 + 184) = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v39 + 16) + 32LL))(*(_QWORD *)(v39 + 16));
  }
  if ( v22 )
  {
    v41 = _InterlockedDecrement((volatile signed __int32 *)(v22 + 8));
    if ( v41 < 0 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
        (const char *)retaddr);
    if ( !v41 )
      (*(void (__fastcall **)(__int64, void *, __int64, wil::details::in1diag3 *))(*(_QWORD *)v51 + 24LL))(
        v51,
        v37,
        v38,
        retaddr);
    v12 = v50;
  }
LABEL_54:
  if ( v12 )
    wil::details::FreeProcessHeap(v12, v37);
  return v27;
}
