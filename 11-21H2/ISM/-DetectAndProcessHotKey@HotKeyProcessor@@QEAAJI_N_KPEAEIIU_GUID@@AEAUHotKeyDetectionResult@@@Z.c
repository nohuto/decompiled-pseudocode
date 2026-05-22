/*
 * XREFs of ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KPEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z @ 0x1801D2828
 * Callers:
 *     ?OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801B2720 (-OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcesso.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007F788 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800908D0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIde.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180092BB8 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$list@V-$shared_ptr@UHotKeyInfo@@@std.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444@Z @ 0x1800ACAD4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@@-$_tlgWriteTemplat.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800B5CC8 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800EB958 (--4-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?OnWinKeyDetected@WinKeyScenarioTelemetry@@SAXXZ @ 0x1800FB78C (-OnWinKeyDetected@WinKeyScenarioTelemetry@@SAXXZ.c)
 *     ?StartWinKeyScenario@WinKeyScenarioTelemetry@@SAXPEAI@Z @ 0x1800FB810 (-StartWinKeyScenario@WinKeyScenarioTelemetry@@SAXPEAI@Z.c)
 *     McTemplateU0sqq_EventWriteTransfer @ 0x1801975C4 (McTemplateU0sqq_EventWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@444@Z @ 0x1801D0484 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@@-$_tlgWrit.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4445@Z @ 0x1801D0650 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@U3@@-$_tlgW.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U_tlgWrapperPtrSize@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU_tlgWrapperPtrSize@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801D081C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U_tlgWrapperPtrSize@@U-$_tlgWrapperByVal@$07@@@-$_tlgWri.c)
 *     ??$_Buyheadnode@V?$allocator@U?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@1@@Z @ 0x1801D0BC8 (--$_Buyheadnode@V-$allocator@U-$_Tree_node@V-$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@-$_.c)
 *     ??$_Copy@U_Copy_tag@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@$0A@@std@@@std@@@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@$0A@@std@@@std@@IEAAXAEBV01@U_Copy_tag@01@@Z @ 0x1801D0BF4 (--$_Copy@U_Copy_tag@-$_Tree@V-$_Tset_traits@V-$shared_ptr@UHotKeyInfo@@@std@@U-$less@V-$shared_p.c)
 *     ??$_Emplace@AEBV?$shared_ptr@UHotKeyInfo@@@std@@@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@_N@1@AEBV?$shared_ptr@UHotKeyInfo@@@1@@Z @ 0x1801D0E3C (--$_Emplace@AEBV-$shared_ptr@UHotKeyInfo@@@std@@@-$_Tree@V-$_Tset_traits@V-$shared_ptr@UHotKeyIn.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@1@@Z @ 0x1801D1278 (--$_Erase_tree@V-$allocator@U-$_Tree_node@V-$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@-$_T.c)
 *     ??$_Try_emplace@AEB_K$$V@?$map@_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1801D13B4 (--$_Try_emplace@AEB_K$$V@-$map@_KV-$set@V-$shared_ptr@UHotKeyInfo@@@std@@U-$less@V-$shared_ptr@U.c)
 *     _lambda_db9b4c9bc50c20cd259e890d64ea8bd9_::operator() @ 0x1801D257C (_lambda_db9b4c9bc50c20cd259e890d64ea8bd9_--operator().c)
 *     ??_G?$shared_ptr@UHotKeyInfo@@@std@@QEAAPEAXI@Z @ 0x1801D2634 (--_G-$shared_ptr@UHotKeyInfo@@@std@@QEAAPEAXI@Z.c)
 *     ?AreAllKeysUp@HotKeyProcessor@@AEAA_NV?$shared_ptr@UHotKeyInfo@@@std@@@Z @ 0x1801D274C (-AreAllKeysUp@HotKeyProcessor@@AEAA_NV-$shared_ptr@UHotKeyInfo@@@std@@@Z.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x1801D3450 (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ?FindRegisteredClient@HotKeyProcessor@@AEAAJAEBUMessageObjectID@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801D3518 (-FindRegisteredClient@HotKeyProcessor@@AEAAJAEBUMessageObjectID@@PEAPEAVHotkeyClientRegistration.c)
 *     ?FindRegisteredHotKey@HotKeyProcessor@@AEAAJIIIIU_GUID@@PEAV?$shared_ptr@UHotKeyInfo@@@std@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801D36A4 (-FindRegisteredHotKey@HotKeyProcessor@@AEAAJIIIIU_GUID@@PEAV-$shared_ptr@UHotKeyInfo@@@std@@PEAP.c)
 *     ?reset@?$shared_ptr@UHotKeyInfo@@@std@@QEAAXXZ @ 0x1801D52C4 (-reset@-$shared_ptr@UHotKeyInfo@@@std@@QEAAXXZ.c)
 *     memcpy_s_2 @ 0x1801D52F0 (memcpy_s_2.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall HotKeyProcessor::DetectAndProcessHotKey(
        HotKeyProcessor *this,
        rsize_t a2,
        unsigned __int8 a3,
        rsize_t a4,
        unsigned __int8 *Source,
        unsigned int a6,
        unsigned int a7,
        struct _GUID *a8,
        struct HotKeyDetectionResult *a9)
{
  unsigned int v9; // esi
  unsigned int v10; // r15d
  int RegisteredClient; // r14d
  int v13; // ebx
  unsigned int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // r13d
  int v19; // eax
  unsigned __int64 v20; // r8
  struct HotkeyClientRegistration *v21; // rax
  std::_Ref_count_base *v22; // r9
  __int64 v23; // r8
  int v24; // r10d
  int RegisteredHotKey; // eax
  _WORD *v26; // rax
  unsigned int *v27; // rdx
  struct HotKeyDetectionResult *v28; // rbx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // r9
  unsigned __int64 v34; // r9
  const unsigned __int16 *v35; // rbx
  std::_Ref_count_base *v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  _QWORD *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 *v44; // rbx
  __int128 *v45; // rsi
  _QWORD *v46; // rbx
  __int64 v47; // r9
  _QWORD *v48; // rax
  struct HotkeyClientRegistration *v50; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v51; // [rsp+68h] [rbp-98h] BYREF
  struct HotkeyClientRegistration *v52; // [rsp+70h] [rbp-90h] BYREF
  char v53; // [rsp+78h] [rbp-88h]
  int v54; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v55; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v56; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v57; // [rsp+88h] [rbp-78h] BYREF
  int v58; // [rsp+8Ch] [rbp-74h] BYREF
  __int64 v59; // [rsp+90h] [rbp-70h] BYREF
  int v60; // [rsp+98h] [rbp-68h]
  int v61; // [rsp+9Ch] [rbp-64h] BYREF
  int v62; // [rsp+A0h] [rbp-60h] BYREF
  struct HotKeyDetectionResult *v63; // [rsp+A8h] [rbp-58h]
  __int128 v64; // [rsp+B0h] [rbp-50h] BYREF
  std::_Ref_count_base *v65[2]; // [rsp+C0h] [rbp-40h] BYREF
  std::_Ref_count_base *v66[2]; // [rsp+D0h] [rbp-30h] BYREF
  rsize_t v67; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v68; // [rsp+E8h] [rbp-18h] BYREF
  int v69; // [rsp+F0h] [rbp-10h] BYREF
  __int64 *v70[2]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v71[2]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v72; // [rsp+118h] [rbp+18h] BYREF
  char v73[16]; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+130h] [rbp+30h] BYREF
  int *v75; // [rsp+150h] [rbp+50h]
  __int64 v76; // [rsp+158h] [rbp+58h]
  unsigned __int64 retaddr; // [rsp+1A8h] [rbp+A8h]

  v9 = a3;
  v10 = a2;
  v67 = a4;
  v51 = (__int64)a8;
  v63 = a9;
  RegisteredClient = 0;
  v60 = 0;
  v13 = 0;
  *(_OWORD *)v66 = 0LL;
  v59 = 0LL;
  v70[0] = (__int64 *)v66;
  v70[1] = (__int64 *)a8;
  if ( !Source )
  {
    RegisteredClient = -2147024809;
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
      McTemplateU0sqq_EventWriteTransfer((__int64)v66, a2, "HotKeyProcessor::DetectAndProcessHotKey", 664LL, 87);
    goto LABEL_117;
  }
  memcpy_s_2((char *)this + 56, a2, Source, a4);
  v14 = (*((char *)this + 73) >> 31) & 2 | 4;
  if ( *((char *)this + 72) >= 0 )
    v14 = (*((char *)this + 73) >> 31) & 2;
  v15 = v14 | 1;
  v16 = 0LL;
  if ( *((char *)this + 74) >= 0 )
    v15 = v14;
  if ( *((char *)this + 147) < 0 || *((char *)this + 148) < 0 )
    v15 = (unsigned int)v15 | 8;
  *((_DWORD *)this + 78) = v15;
  v17 = 0x20000LL;
  if ( (unsigned int)dword_1802404C8 > 5 )
  {
    if ( (qword_1802404D8 & 0x20000) != 0 && (qword_1802404E0 & 0x20000) == qword_1802404E0 )
    {
      v54 = v15;
      v75 = &v54;
      v76 = 4LL;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_1802404C8,
        (unsigned __int8 *)dword_1802079DB,
        0LL,
        0LL,
        3u,
        &v74);
    }
    if ( (unsigned int)dword_1802404C8 > 5
      && (qword_1802404D8 & 0x60000) != 0
      && (qword_1802404E0 & 0x60000) == qword_1802404E0 )
    {
      v52 = (struct HotkeyClientRegistration *)*((_QWORD *)this + 6);
      v65[0] = (HotKeyProcessor *)((char *)this + 56);
      LODWORD(v65[1]) = 256;
      v54 = *((_DWORD *)this + 78);
      v61 = v9;
      v62 = v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperPtrSize,_tlgWrapperByVal<8>>(
        v17,
        byte_1802078F9,
        v15,
        v16,
        (__int64)&v62,
        (__int64)&v61,
        (__int64)&v54,
        (__int64 *)v65,
        (__int64)&v52);
    }
  }
  switch ( v10 )
  {
    case 0x10u:
      v13 = 4;
      break;
    case 0x11u:
      v13 = 2;
      break;
    case 0x12u:
      v13 = 1;
      break;
    default:
      if ( v10 - 91 > 1 )
        *((_DWORD *)this + 79) = 0;
      else
        v13 = 8;
      break;
  }
  if ( !(_BYTE)v9 )
  {
    if ( v13 )
    {
      *((_DWORD *)this + 79) = *((_DWORD *)this + 78);
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v59);
      *(_OWORD *)v65 = *(_OWORD *)v51;
      RegisteredHotKey = HotKeyProcessor::FindRegisteredHotKey(
                           (_DWORD)this,
                           *((_DWORD *)this + 78),
                           v10,
                           a6,
                           a7,
                           (__int64)v65,
                           (__int64)v66,
                           (__int64)&v59);
      RegisteredClient = RegisteredHotKey;
      if ( RegisteredHotKey < 0 )
      {
        if ( RegisteredHotKey == -2147024882 )
          TerminateProcessOnMemoryExhaustion(0LL);
        v20 = 774LL;
        goto LABEL_35;
      }
    }
    goto LABEL_38;
  }
  if ( !v13 )
  {
LABEL_38:
    v18 = v60;
    goto LABEL_39;
  }
  v60 = *((_DWORD *)this + 79);
  v18 = v60;
  *((_DWORD *)this + 79) = 0;
  if ( v18 )
  {
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v59);
    *(_OWORD *)v65 = *(_OWORD *)v51;
    v19 = HotKeyProcessor::FindRegisteredHotKey(
            (_DWORD)this,
            *((_DWORD *)this + 78),
            v10,
            a6,
            a7,
            (__int64)v65,
            (__int64)v66,
            (__int64)&v59);
    RegisteredClient = v19;
    if ( v19 < 0 )
    {
      if ( v19 == -2147024882 )
        TerminateProcessOnMemoryExhaustion(0LL);
      v20 = 753LL;
LABEL_35:
      FailFastWithHR(RegisteredClient, retaddr, v20);
      goto LABEL_117;
    }
  }
LABEL_39:
  v21 = (struct HotkeyClientRegistration *)v59;
  v22 = v66[0];
  if ( v66[0] )
  {
    v23 = 0LL;
    v24 = 1;
    if ( *(_DWORD *)(v59 + 16) )
      v23 = *(unsigned int *)(v59 + 16);
LABEL_52:
    if ( (unsigned int)dword_180240448 > 5
      && (qword_180240458 & 0x400000000000LL) != 0
      && (qword_180240460 & 0x400000000000LL) == qword_180240460 )
    {
      v62 = v23;
      v61 = v23;
      v54 = v23;
      v55 = v9;
      v56 = v24;
      v57 = v10;
      v58 = *((_DWORD *)this + 78);
      v51 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_180240448,
        byte_180207B4F,
        v23,
        (__int64)v66[0],
        (__int64)&v51,
        (__int64)&v58,
        (__int64)&v57,
        (__int64)&v56,
        (__int64)&v55,
        (__int64)&v54,
        (__int64)&v61,
        (__int64)&v62);
      v22 = v66[0];
      v21 = (struct HotkeyClientRegistration *)v59;
    }
    if ( !v22 )
    {
LABEL_83:
      if ( !(_BYTE)v9 )
        goto LABEL_117;
      goto LABEL_84;
    }
    if ( (unsigned int)dword_1802404C8 > 5
      && (qword_1802404D8 & 0x60000) != 0
      && (qword_1802404E0 & 0x60000) == qword_1802404E0 )
    {
      v51 = *((_QWORD *)this + 6);
      v58 = *((_DWORD *)this + 78);
      v57 = v9;
      v56 = v10;
      v52 = *(struct HotkeyClientRegistration **)v22;
      v55 = *((_DWORD *)v22 + 2);
      v50 = (struct HotkeyClientRegistration *)"Enabled hotkey found";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        qword_1802404E0 & 0x60000,
        byte_180207475,
        393216LL,
        (__int64)v22,
        (const unsigned __int16 **)&v50,
        (__int64)&v55,
        (__int64)&v52,
        (__int64)&v56,
        (__int64)&v57,
        (__int64)&v58,
        (__int64)&v51);
      v21 = (struct HotkeyClientRegistration *)v59;
    }
    if ( v21 && *((_QWORD *)v21 + 13) )
    {
      v50 = v21;
      Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v50);
      if ( !lambda_db9b4c9bc50c20cd259e890d64ea8bd9_::operator()(v70, (__int64 *)&v50) )
      {
        v26 = (_WORD *)*((_QWORD *)this + 40);
        v27 = (unsigned int *)v66[0];
        if ( (_WORD *)v66[0] != v26 || (v26[12] & 0x4000) == 0 )
        {
          v28 = v63;
          if ( v10 - 91 <= 1 && (_BYTE)v9 && !*((_DWORD *)this + 78) )
          {
            WinKeyScenarioTelemetry::StartWinKeyScenario((unsigned int *)v63 + 9);
            v27 = (unsigned int *)v66[0];
          }
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, rsize_t))(**(_QWORD **)(v59 + 104) + 24LL))(
            *(_QWORD *)(v59 + 104),
            v27[4],
            v27[5],
            v27[7],
            v67);
          if ( (unsigned int)dword_1802404C8 > 5
            && (qword_1802404D8 & 0x20000) != 0
            && (qword_1802404E0 & 0x20000) == qword_1802404E0 )
          {
            v51 = *((_QWORD *)this + 6);
            v58 = *((_DWORD *)v66[0] + 7);
            v57 = *((_DWORD *)v66[0] + 5);
            v56 = *((_DWORD *)v66[0] + 4);
            v52 = *(struct HotkeyClientRegistration **)v66[0];
            v55 = *((_DWORD *)v66[0] + 2);
            v50 = (struct HotkeyClientRegistration *)"Called OnHotKeyDetected";
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              (__int64)v66[0],
              byte_18020775B,
              v29,
              v30,
              (const unsigned __int16 **)&v50,
              (__int64)&v55,
              (__int64)&v52,
              (__int64)&v56,
              (__int64)&v57,
              (__int64)&v58,
              (__int64)&v51);
          }
          WinKeyScenarioTelemetry::OnWinKeyDetected();
          v21 = (struct HotkeyClientRegistration *)v59;
          goto LABEL_77;
        }
      }
      v21 = (struct HotkeyClientRegistration *)v59;
    }
    v28 = v63;
LABEL_77:
    if ( !v18 && !*((_DWORD *)this + 79) )
    {
      v50 = v21;
      Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v50);
      if ( !lambda_db9b4c9bc50c20cd259e890d64ea8bd9_::operator()(v70, (__int64 *)&v50) )
        *((_BYTE *)v28 + 32) = 1;
    }
    v31 = std::map<unsigned __int64,std::set<std::shared_ptr<HotKeyInfo>>>::_Try_emplace<unsigned __int64 const &,>(
            (__int64 *)this + 42,
            (__int64)v71,
            &v67,
            (unsigned __int64)v22);
    std::_Tree<std::_Tset_traits<std::shared_ptr<HotKeyInfo>,std::less<std::shared_ptr<HotKeyInfo>>,std::allocator<std::shared_ptr<HotKeyInfo>>,0>>::_Emplace<std::shared_ptr<HotKeyInfo> const &>(
      (__int64 *)(*(_QWORD *)v31 + 40LL),
      (__int64)v65,
      (unsigned __int64 *)v66);
    std::shared_ptr<SystemCursorShapeBitmap2>::operator=((__int64 *)this + 40, v66);
    std::shared_ptr<SystemCursorShapeBitmap2>::operator=((__int64 *)v28, v66);
    if ( v59 )
      *((_OWORD *)v28 + 1) = *(_OWORD *)(v59 + 84);
    goto LABEL_83;
  }
  if ( !(_BYTE)v9 )
    goto LABEL_117;
  if ( (*((_BYTE *)this + 312) & 8) != 0 && (v10 - 19 <= 0x47 || v10 <= 0xF || v10 - 93 <= 0x22) )
  {
    v23 = 0LL;
    v24 = 0;
    goto LABEL_52;
  }
LABEL_84:
  v32 = *(_QWORD *)std::map<unsigned __int64,std::set<std::shared_ptr<HotKeyInfo>>>::_Try_emplace<unsigned __int64 const &,>(
                     (__int64 *)this + 42,
                     (__int64)v73,
                     &v67,
                     (unsigned __int64)v22);
  v64 = 0LL;
  v65[0] = (std::_Ref_count_base *)&v64;
  v65[1] = (std::_Ref_count_base *)&v64;
  *(_QWORD *)&v64 = std::_Tree_node<std::shared_ptr<HotKeyInfo>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::shared_ptr<HotKeyInfo>,void *>>>();
  std::_Tree<std::_Tset_traits<std::shared_ptr<HotKeyInfo>,std::less<std::shared_ptr<HotKeyInfo>>,std::allocator<std::shared_ptr<HotKeyInfo>>,0>>::_Copy<std::_Tree<std::_Tset_traits<std::shared_ptr<HotKeyInfo>,std::less<std::shared_ptr<HotKeyInfo>>,std::allocator<std::shared_ptr<HotKeyInfo>>,0>>::_Copy_tag>(
    &v64,
    (_QWORD *)(v32 + 40),
    v53,
    v33);
  v35 = *(const unsigned __int16 **)v64;
  v51 = *(_QWORD *)v64;
  while ( v35 != (const unsigned __int16 *)v64 )
  {
    std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(v65, (_QWORD *)v35 + 4);
    v50 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v50);
    v36 = v65[0];
    RegisteredClient = HotKeyProcessor::FindRegisteredClient(this, v65[0], &v50);
    if ( RegisteredClient < 0 )
    {
      if ( RegisteredClient == -2147024882 )
        TerminateProcessOnMemoryExhaustion(0LL);
      FailFastWithHR(RegisteredClient, retaddr, 0x373uLL);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v50);
      if ( v65[1] )
        std::_Ref_count_base::_Decref(v65[1]);
      goto LABEL_116;
    }
    if ( v10 == *((_DWORD *)v36 + 7) && !v60 )
    {
      v52 = v50;
      Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v52);
      if ( !lambda_db9b4c9bc50c20cd259e890d64ea8bd9_::operator()(v70, (__int64 *)&v52) )
        *((_BYTE *)v63 + 32) = 1;
    }
    if ( (unsigned int)dword_1802404C8 > 5
      && (qword_1802404D8 & 0x60000) != 0
      && (qword_1802404E0 & 0x60000) == qword_1802404E0 )
    {
      v58 = *((_DWORD *)v36 + 7);
      v57 = *((_DWORD *)v36 + 5);
      v56 = *((_DWORD *)v36 + 4);
      v72 = *(_QWORD *)v36;
      v55 = *((_DWORD *)v36 + 2);
      v52 = (struct HotkeyClientRegistration *)"Checking hotkey for all keys up";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v37,
        byte_1802075C2,
        v38,
        v39,
        (const unsigned __int16 **)&v52,
        (__int64)&v55,
        (__int64)&v72,
        (__int64)&v56,
        (__int64)&v57,
        (__int64)&v58);
    }
    v40 = std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(v71, v65);
    if ( HotKeyProcessor::AreAllKeysUp((__int64)this, v40) )
    {
      if ( v50 )
      {
        if ( *((_QWORD *)v50 + 13) )
        {
          v52 = v50;
          Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v52);
          if ( !lambda_db9b4c9bc50c20cd259e890d64ea8bd9_::operator()(v70, (__int64 *)&v52) )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, rsize_t))(**((_QWORD **)v50 + 13) + 32LL))(
              *((_QWORD *)v50 + 13),
              *((unsigned int *)v36 + 4),
              *((unsigned int *)v36 + 5),
              *((unsigned int *)v36 + 7),
              v67);
            if ( (unsigned int)dword_1802404C8 > 5
              && (qword_1802404D8 & 0x20000) != 0
              && (qword_1802404E0 & 0x20000) == qword_1802404E0 )
            {
              v62 = *((_DWORD *)v36 + 7);
              v61 = *((_DWORD *)v36 + 5);
              v54 = *((_DWORD *)v36 + 4);
              v68 = *(_QWORD *)v36;
              v69 = *((_DWORD *)v36 + 2);
              v51 = (__int64)"Called OnHotKeyAllKeysUp";
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                v41,
                byte_18020781C,
                v42,
                v43,
                (const unsigned __int16 **)&v51,
                (__int64)&v69,
                (__int64)&v68,
                (__int64)&v54,
                (__int64)&v61,
                (__int64)&v62);
            }
          }
        }
      }
      v51 = (__int64)v35;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(&v51);
      v44 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>>::_Extract(
              &v64,
              (__int64)v35);
      std::shared_ptr<HotKeyInfo>::`scalar deleting destructor'((__int64)(v44 + 4));
      std::_Deallocate<16,0>(v44, 0x30uLL);
      v35 = (const unsigned __int16 *)v51;
    }
    else
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(&v51);
      v35 = (const unsigned __int16 *)v51;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v50);
    if ( v65[1] )
      std::_Ref_count_base::_Decref(v65[1]);
  }
  v45 = (__int128 *)(*(_QWORD *)std::map<unsigned __int64,std::set<std::shared_ptr<HotKeyInfo>>>::_Try_emplace<unsigned __int64 const &,>(
                                  (__int64 *)this + 42,
                                  (__int64)v71,
                                  &v67,
                                  v34)
                   + 40LL);
  if ( v45 != &v64 )
  {
    v46 = *(_QWORD **)v45;
    std::_Tree_val<std::_Tree_simple_types<std::shared_ptr<HotKeyInfo>>>::_Erase_tree<std::allocator<std::_Tree_node<std::shared_ptr<HotKeyInfo>,void *>>>(
      (__int64)v45,
      (__int64)v45,
      *(char **)(*(_QWORD *)v45 + 8LL));
    v46[1] = v46;
    *v46 = v46;
    v46[2] = v46;
    *((_QWORD *)v45 + 1) = 0LL;
    std::_Tree<std::_Tset_traits<std::shared_ptr<HotKeyInfo>,std::less<std::shared_ptr<HotKeyInfo>>,std::allocator<std::shared_ptr<HotKeyInfo>>,0>>::_Copy<std::_Tree<std::_Tset_traits<std::shared_ptr<HotKeyInfo>,std::less<std::shared_ptr<HotKeyInfo>>,std::allocator<std::shared_ptr<HotKeyInfo>>,0>>::_Copy_tag>(
      v45,
      &v64,
      v53,
      v47);
  }
  if ( *((_QWORD *)this + 40) )
  {
    v48 = std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(v71, (_QWORD *)this + 40);
    if ( HotKeyProcessor::AreAllKeysUp((__int64)this, v48) )
      std::shared_ptr<HotKeyInfo>::reset((char *)this + 320);
  }
LABEL_116:
  std::_Tree_val<std::_Tree_simple_types<std::shared_ptr<HotKeyInfo>>>::_Erase_tree<std::allocator<std::_Tree_node<std::shared_ptr<HotKeyInfo>,void *>>>(
    (__int64)&v64,
    (__int64)&v64,
    *(char **)(v64 + 8));
  std::_Deallocate<16,0>((void *)v64, 0x30uLL);
LABEL_117:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v59);
  if ( v66[1] )
    std::_Ref_count_base::_Decref(v66[1]);
  return (unsigned int)RegisteredClient;
}
