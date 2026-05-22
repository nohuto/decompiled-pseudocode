/*
 * XREFs of ?FindRegisteredHotKey@HotKeyProcessor@@AEAAJIIIIU_GUID@@PEAV?$shared_ptr@UHotKeyInfo@@@std@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801D36A4
 * Callers:
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KPEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z @ 0x1801D2828 (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KPEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@std@@@1@AEBK@Z @ 0x180091978 (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KUContactState@MagnifierRecognizer@@U-$less@K@std.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800B5CC8 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B6080 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-Nt.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800CF5C4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??4?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800EB958 (--4-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801D02F4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTempl.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@445@Z @ 0x1801D0740 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@U3@@-$_tlgWrit.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1801D12EC (--$_Try_emplace@AEBK$$V@-$map@KV-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator@V-$shared_p.c)
 *     ??0?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x1801D1924 (--0-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator@V-$shared_ptr@UHotKeyInfo@@@std@@@2@@std.c)
 *     ??_G?$shared_ptr@UHotKeyInfo@@@std@@QEAAPEAXI@Z @ 0x1801D2634 (--_G-$shared_ptr@UHotKeyInfo@@@std@@QEAAPEAXI@Z.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x1801D3450 (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ?FindRegisteredClient@HotKeyProcessor@@AEAAJAEBUMessageObjectID@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801D3518 (-FindRegisteredClient@HotKeyProcessor@@AEAAJAEBUMessageObjectID@@PEAPEAVHotkeyClientRegistration.c)
 */

__int64 __fastcall HotKeyProcessor::FindRegisteredHotKey(
        HotKeyProcessor *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        _QWORD *a6,
        unsigned __int16 *a7,
        __int64 a8)
{
  unsigned int v8; // ebx
  unsigned __int16 *v9; // r12
  HotKeyProcessor *v10; // rdi
  unsigned int v11; // esi
  int RegisteredClient; // r15d
  __int64 v13; // r8
  __int64 v14; // r9
  std::_Ref_count_base *v15; // rcx
  __int64 v16; // rax
  _QWORD **v17; // r14
  _QWORD *i; // rsi
  __int16 v19; // r12
  _QWORD *v20; // rdi
  __int16 v21; // r12
  std::_Ref_count_base *v22; // r13
  _QWORD *j; // rbx
  __int64 v24; // rcx
  __int64 v25; // rcx
  char v26; // r15
  HotKeyProcessor *v27; // rdi
  _QWORD **v28; // rcx
  _QWORD *v29; // rsi
  _QWORD *v30; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  _QWORD **v34; // rcx
  _QWORD *v35; // rsi
  _QWORD *v36; // rbx
  _QWORD **v37; // rcx
  _QWORD *v38; // rsi
  _QWORD *v39; // rbx
  __int64 v40; // r8
  __int64 v41; // r9
  struct HotkeyClientRegistration *v43; // [rsp+58h] [rbp-91h] BYREF
  unsigned int v44; // [rsp+60h] [rbp-89h] BYREF
  unsigned int v45; // [rsp+64h] [rbp-85h] BYREF
  unsigned int v46; // [rsp+68h] [rbp-81h] BYREF
  unsigned int v47; // [rsp+6Ch] [rbp-7Dh] BYREF
  unsigned int v48; // [rsp+70h] [rbp-79h]
  unsigned int v49; // [rsp+74h] [rbp-75h]
  __int64 v50; // [rsp+78h] [rbp-71h] BYREF
  struct MessageObjectID *v51; // [rsp+80h] [rbp-69h] BYREF
  std::_Ref_count_base *v52; // [rsp+88h] [rbp-61h]
  std::_Ref_count_base *v53[2]; // [rsp+90h] [rbp-59h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-49h]
  unsigned __int16 *v55; // [rsp+A8h] [rbp-41h] BYREF
  struct MessageObjectID *v56; // [rsp+B0h] [rbp-39h] BYREF
  std::_Ref_count_base *v57; // [rsp+B8h] [rbp-31h]
  std::_Ref_count_base *v58[2]; // [rsp+C0h] [rbp-29h] BYREF
  HotKeyProcessor *v59; // [rsp+D0h] [rbp-19h]
  _QWORD **v60; // [rsp+D8h] [rbp-11h] BYREF
  ULONG_PTR retaddr; // [rsp+128h] [rbp+3Fh]

  v8 = a2;
  v9 = a7;
  v10 = a1;
  v48 = a2;
  v50 = a8;
  v11 = a3;
  v59 = a1;
  v46 = ((unsigned __int16)a3 << 16) | a2 & 0xF;
  v45 = a4;
  v49 = a3;
  RegisteredClient = 0;
  v55 = a7;
  *(_OWORD *)v53 = 0LL;
  std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=(
    a7,
    (__int64 *)v53);
  v15 = v53[1];
  if ( v53[1] )
    std::_Ref_count_base::_Decref(v53[1]);
  if ( (unsigned int)dword_1802404C8 > 5
    && (qword_1802404D8 & 0x60000) != 0
    && (qword_1802404E0 & 0x60000) == qword_1802404E0 )
  {
    v43 = (struct HotkeyClientRegistration *)*((_QWORD *)v10 + 6);
    v51 = (struct MessageObjectID *)"Searching for hotkey";
    v47 = v8;
    v44 = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)v15,
      byte_180207A25,
      v13,
      v14,
      (const unsigned __int16 **)&v51,
      (__int64)&v44,
      (__int64)&v47,
      (__int64)&v43);
  }
  std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Find_lower_bound<unsigned long>(
    (__int64 *)v10 + 5,
    (__int64)v53,
    &v46);
  if ( *(_BYTE *)(v54 + 25) || v46 < *(_DWORD *)(v54 + 32) || v54 == *((_QWORD *)v10 + 5) )
    goto LABEL_88;
  v16 = std::map<unsigned long,std::list<std::shared_ptr<HotKeyInfo>>>::_Try_emplace<unsigned long const &,>(
          (__int64 *)v10 + 5,
          (__int64)v53,
          &v46);
  std::list<std::shared_ptr<HotKeyInfo>>::list<std::shared_ptr<HotKeyInfo>>(&v60, (_QWORD **)(*(_QWORD *)v16 + 40LL));
  v17 = v60;
  v43 = 0LL;
  for ( i = *v60; ; i = (_QWORD *)*i )
  {
    if ( i == v17 )
    {
      v9 = v55;
      goto LABEL_85;
    }
    std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(v53, i + 2);
    *(_OWORD *)v58 = 0LL;
    std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(&v56, v53);
    v19 = *((_WORD *)v53[0] + 12);
    if ( (v19 & 0x200) != 0 )
    {
      v20 = (_QWORD *)*((_QWORD *)v53[0] + 5);
      v21 = v19 & 0x100;
      v22 = v58[0];
      for ( j = (_QWORD *)*v20; ; j = (_QWORD *)*j )
      {
        if ( j == v20 )
        {
          v26 = 0;
LABEL_36:
          if ( v21 && !v26 && v22 )
            std::shared_ptr<SystemCursorShapeBitmap2>::operator=((__int64 *)&v56, v58);
          goto LABEL_40;
        }
        std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(&v51, j + 2);
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v43);
        RegisteredClient = HotKeyProcessor::FindRegisteredClient(v59, v51, &v43);
        if ( RegisteredClient < 0 )
          break;
        if ( v43 && *((_QWORD *)v43 + 13) )
        {
          if ( v45 && a5 )
          {
            if ( *((_QWORD *)v43 + 2) == __PAIR64__(a5, v45) )
              goto LABEL_33;
            v24 = *a6 - *(_QWORD *)&GUID_NULL.Data1;
            if ( *a6 == *(_QWORD *)&GUID_NULL.Data1 )
              v24 = a6[1] - *(_QWORD *)GUID_NULL.Data4;
            if ( v24 )
            {
              v25 = *a6 - *(_QWORD *)((char *)v43 + 84);
              if ( *a6 == *(_QWORD *)((char *)v43 + 84) )
                v25 = a6[1] - *(_QWORD *)((char *)v43 + 92);
              if ( !v25 )
              {
LABEL_33:
                v26 = 1;
                std::shared_ptr<SystemCursorShapeBitmap2>::operator=((__int64 *)&v56, &v51);
                if ( v52 )
                  std::_Ref_count_base::_Decref(v52);
                goto LABEL_36;
              }
            }
          }
          if ( v21 && !v22 )
          {
            std::shared_ptr<SystemCursorShapeBitmap2>::operator=((__int64 *)v58, &v51);
            v22 = v58[0];
          }
        }
        if ( v52 )
          std::_Ref_count_base::_Decref(v52);
      }
      if ( RegisteredClient == -2147024882 )
        TerminateProcessOnMemoryExhaustion(0LL);
      FailFastWithHR(RegisteredClient, retaddr, 0x1D4uLL);
      if ( v52 )
        std::_Ref_count_base::_Decref(v52);
      if ( v57 )
        std::_Ref_count_base::_Decref(v57);
      if ( v58[1] )
        std::_Ref_count_base::_Decref(v58[1]);
      if ( v53[1] )
        std::_Ref_count_base::_Decref(v53[1]);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v43);
      v28 = v60;
      *v60[1] = 0LL;
      v29 = *v28;
      if ( *v28 )
      {
        do
        {
          v30 = (_QWORD *)*v29;
          std::shared_ptr<HotKeyInfo>::`scalar deleting destructor'((__int64)(v29 + 2));
          std::_Deallocate<16,0>(v29, 0x20uLL);
          v29 = v30;
        }
        while ( v30 );
      }
      goto LABEL_62;
    }
LABEL_40:
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v43);
    v27 = v59;
    RegisteredClient = HotKeyProcessor::FindRegisteredClient(v59, v56, &v43);
    if ( RegisteredClient < 0 )
    {
      if ( RegisteredClient == -2147024882 )
        TerminateProcessOnMemoryExhaustion(0LL);
      FailFastWithHR(RegisteredClient, retaddr, 0x203uLL);
      if ( v57 )
        std::_Ref_count_base::_Decref(v57);
      if ( v58[1] )
        std::_Ref_count_base::_Decref(v58[1]);
      if ( v53[1] )
        std::_Ref_count_base::_Decref(v53[1]);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v43);
      v34 = v60;
      *v60[1] = 0LL;
      v35 = *v34;
      if ( *v34 )
      {
        do
        {
          v36 = (_QWORD *)*v35;
          std::shared_ptr<HotKeyInfo>::`scalar deleting destructor'((__int64)(v35 + 2));
          std::_Deallocate<16,0>(v35, 0x20uLL);
          v35 = v36;
        }
        while ( v36 );
      }
LABEL_62:
      std::_Deallocate<16,0>(v60, 0x20uLL);
      return (unsigned int)RegisteredClient;
    }
    if ( v43 && *((_QWORD *)v43 + 13) )
      break;
    if ( v57 )
      std::_Ref_count_base::_Decref(v57);
    if ( v58[1] )
      std::_Ref_count_base::_Decref(v58[1]);
    if ( v53[1] )
      std::_Ref_count_base::_Decref(v53[1]);
  }
  v9 = v55;
  std::shared_ptr<SystemCursorShapeBitmap2>::operator=((__int64 *)v55, &v56);
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v43);
  RegisteredClient = 0;
  *(_QWORD *)v50 = v43;
  if ( (unsigned int)dword_1802404C8 > 5
    && (qword_1802404D8 & 0x60000) != 0
    && (qword_1802404E0 & 0x60000) == qword_1802404E0 )
  {
    v33 = *(_QWORD *)v9;
    v50 = *((_QWORD *)v27 + 6);
    v45 = v48;
    v44 = v49;
    v51 = *(struct MessageObjectID **)v33;
    v47 = *(_DWORD *)(v33 + 8);
    v55 = (unsigned __int16 *)"Registered hotkey found";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v33,
      byte_1802073D9,
      v31,
      v32,
      (const unsigned __int16 **)&v55,
      (__int64)&v47,
      (__int64)&v51,
      (__int64)&v44,
      (__int64)&v45,
      (__int64)&v50);
  }
  if ( v57 )
    std::_Ref_count_base::_Decref(v57);
  if ( v58[1] )
    std::_Ref_count_base::_Decref(v58[1]);
  if ( v53[1] )
    std::_Ref_count_base::_Decref(v53[1]);
LABEL_85:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v43);
  v37 = v60;
  *v60[1] = 0LL;
  v38 = *v37;
  if ( *v37 )
  {
    do
    {
      v39 = (_QWORD *)*v38;
      std::shared_ptr<HotKeyInfo>::`scalar deleting destructor'((__int64)(v38 + 2));
      std::_Deallocate<16,0>(v38, 0x20uLL);
      v38 = v39;
    }
    while ( v39 );
  }
  std::_Deallocate<16,0>(v60, 0x20uLL);
  v10 = v59;
  v8 = v48;
  v11 = v49;
LABEL_88:
  if ( *(_QWORD *)v9 && *(_BYTE *)(*(_QWORD *)v9 + 32LL) && (*((_BYTE *)v10 + 352) & 1) != 0 )
  {
    *(_OWORD *)v53 = 0LL;
    std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=(
      v9,
      (__int64 *)v53);
    if ( v53[1] )
      std::_Ref_count_base::_Decref(v53[1]);
    if ( (unsigned int)dword_1802404C8 > 5
      && (qword_1802404D8 & 0x20000) != 0
      && (qword_1802404E0 & 0x20000) == qword_1802404E0 )
    {
      v45 = v11;
      v50 = (__int64)"Registered HotKey was found, but was ignored because of KeyProcessingFlag_NoHotkeys flag.";
      v44 = v8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1802404C8,
        byte_180207AA8,
        v40,
        v41,
        (const unsigned __int16 **)&v50,
        (__int64)&v44,
        (__int64)&v45);
    }
  }
  return (unsigned int)RegisteredClient;
}
