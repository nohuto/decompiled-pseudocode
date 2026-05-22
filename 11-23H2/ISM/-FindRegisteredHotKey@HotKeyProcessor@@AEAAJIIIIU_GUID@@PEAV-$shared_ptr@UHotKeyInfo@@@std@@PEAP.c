/*
 * XREFs of ?FindRegisteredHotKey@HotKeyProcessor@@AEAAJIIIIU_GUID@@PEAV?$shared_ptr@UHotKeyInfo@@@std@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801F1618
 * Callers:
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z @ 0x180064C04 (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     IsEqualGUID @ 0x180021F40 (IsEqualGUID.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180045DDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VSystemCursor2@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800615BC (--4-$shared_ptr@VSystemCursor2@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@std@@@1@AEBK@Z @ 0x1800A8048 (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KUContactState@MagnifierRecognizer@@U-$less@K@std.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800CEB34 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800E8C88 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??4?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801045A4 (--4-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801EF250 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTempl.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@445@Z @ 0x1801EF69C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@U3@@-$_tlgWrit.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1801F0254 (--$_Try_emplace@AEBK$$V@-$map@KV-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator@V-$shared_p.c)
 *     ??0?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x1801F0790 (--0-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator@V-$shared_ptr@UHotKeyInfo@@@std@@@2@@std.c)
 *     ??_G?$shared_ptr@UHotKeyInfo@@@std@@QEAAPEAXI@Z @ 0x1801F11E4 (--_G-$shared_ptr@UHotKeyInfo@@@std@@QEAAPEAXI@Z.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x1801F13B8 (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ?FindRegisteredClient@HotKeyProcessor@@AEAAJAEBUMessageObjectID@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801F1480 (-FindRegisteredClient@HotKeyProcessor@@AEAAJAEBUMessageObjectID@@PEAPEAVHotkeyClientRegistration.c)
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
  unsigned int v8; // esi
  unsigned __int16 *v9; // r12
  unsigned int v10; // ebx
  HotKeyProcessor *v11; // rdi
  int RegisteredClient; // r15d
  __int64 v13; // r8
  __int64 v14; // r9
  std::_Ref_count_base *v15; // rcx
  __int64 *v16; // r10
  __int64 v17; // rax
  _QWORD **v18; // r14
  _QWORD *i; // rsi
  __int16 v20; // r12
  _QWORD *v21; // rdi
  __int16 v22; // r12
  std::_Ref_count_base *v23; // r13
  _QWORD *j; // rbx
  __int64 v25; // r8
  _QWORD *v26; // r9
  __int64 v27; // rax
  char v28; // r15
  HotKeyProcessor *v29; // rdi
  _QWORD **v30; // rcx
  _QWORD *v31; // rsi
  _QWORD *v32; // rbx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  _QWORD **v36; // rcx
  _QWORD *v37; // rsi
  _QWORD *v38; // rbx
  _QWORD **v39; // rcx
  _QWORD *v40; // rsi
  _QWORD *v41; // rbx
  __int64 v42; // r8
  __int64 v43; // r9
  struct HotkeyClientRegistration *v45; // [rsp+58h] [rbp-91h] BYREF
  unsigned int v46; // [rsp+60h] [rbp-89h] BYREF
  unsigned int v47; // [rsp+64h] [rbp-85h] BYREF
  unsigned int v48; // [rsp+68h] [rbp-81h] BYREF
  unsigned int v49; // [rsp+6Ch] [rbp-7Dh] BYREF
  unsigned int v50; // [rsp+70h] [rbp-79h]
  unsigned int v51; // [rsp+74h] [rbp-75h]
  __int64 v52; // [rsp+78h] [rbp-71h] BYREF
  struct MessageObjectID *v53; // [rsp+80h] [rbp-69h] BYREF
  std::_Ref_count_base *v54; // [rsp+88h] [rbp-61h]
  std::_Ref_count_base *v55[2]; // [rsp+90h] [rbp-59h] BYREF
  __int64 v56; // [rsp+A0h] [rbp-49h]
  unsigned __int16 *v57; // [rsp+A8h] [rbp-41h] BYREF
  struct MessageObjectID *v58; // [rsp+B0h] [rbp-39h] BYREF
  std::_Ref_count_base *v59; // [rsp+B8h] [rbp-31h]
  std::_Ref_count_base *v60[2]; // [rsp+C0h] [rbp-29h] BYREF
  HotKeyProcessor *v61; // [rsp+D0h] [rbp-19h]
  _QWORD **v62; // [rsp+D8h] [rbp-11h] BYREF
  ULONG_PTR retaddr; // [rsp+128h] [rbp+3Fh]

  v8 = a3;
  v9 = a7;
  v10 = a2;
  v51 = a3;
  v11 = a1;
  v52 = a8;
  v50 = a2;
  v61 = a1;
  v48 = ((unsigned __int16)a3 << 16) | a2 & 0xF;
  v47 = a4;
  v57 = a7;
  RegisteredClient = 0;
  *(_OWORD *)v55 = 0LL;
  std::shared_ptr<SystemCursor2>::operator=(a7, (__int64 *)v55);
  v15 = v55[1];
  if ( v55[1] )
    std::_Ref_count_base::_Decref(v55[1]);
  if ( (unsigned int)dword_180266508 > 5
    && (qword_180266518 & 0x60000) != 0
    && (qword_180266520 & 0x60000) == qword_180266520 )
  {
    v45 = (struct HotkeyClientRegistration *)*((_QWORD *)v11 + 6);
    v53 = (struct MessageObjectID *)"Searching for hotkey";
    v49 = v10;
    v46 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)v15,
      byte_180229B65,
      v13,
      v14,
      (const unsigned __int16 **)&v53,
      (__int64)&v46,
      (__int64)&v49,
      (__int64)&v45);
  }
  std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Find_lower_bound<unsigned long>(
    (__int64 *)v11 + 5,
    (__int64)v55,
    &v48);
  if ( *(_BYTE *)(v56 + 25) || v48 < *(_DWORD *)(v56 + 32) || v56 == *v16 )
    goto LABEL_86;
  v17 = std::map<unsigned long,std::list<std::shared_ptr<HotKeyInfo>>>::_Try_emplace<unsigned long const &,>(
          v16,
          (__int64)v55,
          &v48);
  std::list<std::shared_ptr<HotKeyInfo>>::list<std::shared_ptr<HotKeyInfo>>(&v62, (_QWORD ***)(*(_QWORD *)v17 + 40LL));
  v18 = v62;
  v45 = 0LL;
  for ( i = *v62; ; i = (_QWORD *)*i )
  {
    if ( i == v18 )
    {
      v9 = v57;
      goto LABEL_83;
    }
    std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(v55, i + 2);
    *(_OWORD *)v60 = 0LL;
    std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(&v58, v55);
    v20 = *((_WORD *)v55[0] + 12);
    if ( (v20 & 0x200) != 0 )
    {
      v21 = (_QWORD *)*((_QWORD *)v55[0] + 5);
      v22 = v20 & 0x100;
      v23 = v60[0];
      for ( j = (_QWORD *)*v21; ; j = (_QWORD *)*j )
      {
        if ( j == v21 )
        {
          v28 = 0;
LABEL_34:
          if ( v22 && !v28 && v23 )
            std::shared_ptr<SystemCursorShapeBitmap2>::operator=((__int64 *)&v58, v60);
          goto LABEL_38;
        }
        std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(&v53, j + 2);
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v45);
        RegisteredClient = HotKeyProcessor::FindRegisteredClient(v61, v53, &v45);
        if ( RegisteredClient < 0 )
          break;
        if ( v45 && *((_QWORD *)v45 + 13) )
        {
          if ( v47 && a5 )
          {
            if ( *((_QWORD *)v45 + 2) == __PAIR64__(a5, v47) )
              goto LABEL_31;
            if ( !IsEqualGUID(a6, &GUID_NULL) )
            {
              v27 = *v26 - *(_QWORD *)(v25 + 84);
              if ( *v26 == *(_QWORD *)(v25 + 84) )
                v27 = v26[1] - *(_QWORD *)(v25 + 92);
              if ( !v27 )
              {
LABEL_31:
                v28 = 1;
                std::shared_ptr<SystemCursorShapeBitmap2>::operator=((__int64 *)&v58, &v53);
                if ( v54 )
                  std::_Ref_count_base::_Decref(v54);
                goto LABEL_34;
              }
            }
          }
          if ( v22 && !v23 )
          {
            std::shared_ptr<SystemCursorShapeBitmap2>::operator=((__int64 *)v60, &v53);
            v23 = v60[0];
          }
        }
        if ( v54 )
          std::_Ref_count_base::_Decref(v54);
      }
      if ( RegisteredClient == -2147024882 )
        TerminateProcessOnMemoryExhaustion(0LL);
      FailFastWithHR(RegisteredClient, retaddr, 0x1D4uLL);
      if ( v54 )
        std::_Ref_count_base::_Decref(v54);
      if ( v59 )
        std::_Ref_count_base::_Decref(v59);
      if ( v60[1] )
        std::_Ref_count_base::_Decref(v60[1]);
      if ( v55[1] )
        std::_Ref_count_base::_Decref(v55[1]);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v45);
      v30 = v62;
      *v62[1] = 0LL;
      v31 = *v30;
      if ( *v30 )
      {
        do
        {
          v32 = (_QWORD *)*v31;
          std::shared_ptr<HotKeyInfo>::`scalar deleting destructor'((__int64)(v31 + 2));
          std::_Deallocate<16,0>(v31, 0x20uLL);
          v31 = v32;
        }
        while ( v32 );
      }
      goto LABEL_60;
    }
LABEL_38:
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v45);
    v29 = v61;
    RegisteredClient = HotKeyProcessor::FindRegisteredClient(v61, v58, &v45);
    if ( RegisteredClient < 0 )
    {
      if ( RegisteredClient == -2147024882 )
        TerminateProcessOnMemoryExhaustion(0LL);
      FailFastWithHR(RegisteredClient, retaddr, 0x203uLL);
      if ( v59 )
        std::_Ref_count_base::_Decref(v59);
      if ( v60[1] )
        std::_Ref_count_base::_Decref(v60[1]);
      if ( v55[1] )
        std::_Ref_count_base::_Decref(v55[1]);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v45);
      v36 = v62;
      *v62[1] = 0LL;
      v37 = *v36;
      if ( *v36 )
      {
        do
        {
          v38 = (_QWORD *)*v37;
          std::shared_ptr<HotKeyInfo>::`scalar deleting destructor'((__int64)(v37 + 2));
          std::_Deallocate<16,0>(v37, 0x20uLL);
          v37 = v38;
        }
        while ( v38 );
      }
LABEL_60:
      std::_Deallocate<16,0>(v62, 0x20uLL);
      return (unsigned int)RegisteredClient;
    }
    if ( v45 && *((_QWORD *)v45 + 13) )
      break;
    if ( v59 )
      std::_Ref_count_base::_Decref(v59);
    if ( v60[1] )
      std::_Ref_count_base::_Decref(v60[1]);
    if ( v55[1] )
      std::_Ref_count_base::_Decref(v55[1]);
  }
  v9 = v57;
  std::shared_ptr<SystemCursorShapeBitmap2>::operator=((__int64 *)v57, &v58);
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v45);
  RegisteredClient = 0;
  *(_QWORD *)v52 = v45;
  if ( (unsigned int)dword_180266508 > 5
    && (qword_180266518 & 0x60000) != 0
    && (qword_180266520 & 0x60000) == qword_180266520 )
  {
    v35 = *(_QWORD *)v9;
    v52 = *((_QWORD *)v29 + 6);
    v47 = v50;
    v46 = v51;
    v53 = *(struct MessageObjectID **)v35;
    v49 = *(_DWORD *)(v35 + 8);
    v57 = (unsigned __int16 *)"Registered hotkey found";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v35,
      byte_1802299F2,
      v33,
      v34,
      (const unsigned __int16 **)&v57,
      (__int64)&v49,
      (__int64)&v53,
      (__int64)&v46,
      (__int64)&v47,
      (__int64)&v52);
  }
  if ( v59 )
    std::_Ref_count_base::_Decref(v59);
  if ( v60[1] )
    std::_Ref_count_base::_Decref(v60[1]);
  if ( v55[1] )
    std::_Ref_count_base::_Decref(v55[1]);
LABEL_83:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v45);
  v39 = v62;
  *v62[1] = 0LL;
  v40 = *v39;
  if ( *v39 )
  {
    do
    {
      v41 = (_QWORD *)*v40;
      std::shared_ptr<HotKeyInfo>::`scalar deleting destructor'((__int64)(v40 + 2));
      std::_Deallocate<16,0>(v40, 0x20uLL);
      v40 = v41;
    }
    while ( v41 );
  }
  std::_Deallocate<16,0>(v62, 0x20uLL);
  v11 = v61;
  v10 = v50;
  v8 = v51;
LABEL_86:
  if ( *(_QWORD *)v9 && *(_BYTE *)(*(_QWORD *)v9 + 32LL) && (*((_BYTE *)v11 + 352) & 1) != 0 )
  {
    *(_OWORD *)v55 = 0LL;
    std::shared_ptr<SystemCursor2>::operator=(v9, (__int64 *)v55);
    if ( v55[1] )
      std::_Ref_count_base::_Decref(v55[1]);
    if ( (unsigned int)dword_180266508 > 5
      && (qword_180266518 & 0x20000) != 0
      && (qword_180266520 & 0x20000) == qword_180266520 )
    {
      v47 = v8;
      v52 = (__int64)"Registered HotKey was found, but was ignored because of KeyProcessingFlag_NoHotkeys flag.";
      v46 = v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_180266508,
        byte_180229D37,
        v42,
        v43,
        (const unsigned __int16 **)&v52,
        (__int64)&v46,
        (__int64)&v47);
    }
  }
  return (unsigned int)RegisteredClient;
}
