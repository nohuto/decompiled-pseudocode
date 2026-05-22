/*
 * XREFs of ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z @ 0x18007867C
 * Callers:
 *     ?OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801DE4B0 (-OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcesso.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004673C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18006A564 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIde.c)
 *     _lambda_66b71e0fbdc67b4ac52304c75f4bce4c_::operator() @ 0x1800783D4 (_lambda_66b71e0fbdc67b4ac52304c75f4bce4c_--operator().c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800C033C (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444@Z @ 0x1800D4DEC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@@-$_tlgWriteTemplat.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800DDDB4 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801130E4 (--4-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?OnWinKeyDetected@WinKeyScenarioTelemetry@@SAXXZ @ 0x1801257FC (-OnWinKeyDetected@WinKeyScenarioTelemetry@@SAXXZ.c)
 *     ?StartWinKeyScenario@WinKeyScenarioTelemetry@@SAXPEAI@Z @ 0x180125880 (-StartWinKeyScenario@WinKeyScenarioTelemetry@@SAXPEAI@Z.c)
 *     McTemplateU0sqq_EventWriteTransfer @ 0x1801C2D98 (McTemplateU0sqq_EventWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@444@Z @ 0x1801FC110 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@@-$_tlgWrit.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4445@Z @ 0x1801FC2DC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@U3@@-$_tlgW.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U_tlgWrapperPtrSize@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU_tlgWrapperPtrSize@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801FC4A8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U_tlgWrapperPtrSize@@U-$_tlgWrapperByVal@$07@@@-$_tlgWri.c)
 *     ??$_Buyheadnode@V?$allocator@U?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@1@@Z @ 0x1801FC860 (--$_Buyheadnode@V-$allocator@U-$_Tree_node@V-$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@-$_.c)
 *     ??$_Copy@U_Copy_tag@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@$0A@@std@@@std@@@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@$0A@@std@@@std@@IEAAXAEBV01@U_Copy_tag@01@@Z @ 0x1801FC88C (--$_Copy@U_Copy_tag@-$_Tree@V-$_Tset_traits@V-$shared_ptr@UHotKeyInfo@@@std@@U-$less@V-$shared_p.c)
 *     ??$_Emplace@AEBV?$shared_ptr@UHotKeyInfo@@@std@@@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@_N@1@AEBV?$shared_ptr@UHotKeyInfo@@@1@@Z @ 0x1801FCAD4 (--$_Emplace@AEBV-$shared_ptr@UHotKeyInfo@@@std@@@-$_Tree@V-$_Tset_traits@V-$shared_ptr@UHotKeyIn.c)
 *     ??$_Try_emplace@AEB_K$$V@?$map@_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1801FD04C (--$_Try_emplace@AEB_K$$V@-$map@_KV-$set@V-$shared_ptr@UHotKeyInfo@@@std@@U-$less@V-$shared_ptr@U.c)
 *     ??1?$_Tree_head_scoped_ptr@V?$allocator@U?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@V?$_Tree_val@U?$_Tree_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1801FD8FC (--1-$_Tree_head_scoped_ptr@V-$allocator@U-$_Tree_node@V-$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@.c)
 *     ??1?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@QEAA@XZ @ 0x1801FDBC8 (--1-$set@V-$shared_ptr@UHotKeyInfo@@@std@@U-$less@V-$shared_ptr@UHotKeyInfo@@@std@@@2@V-$allocat.c)
 *     ?AreAllKeysUp@HotKeyProcessor@@AEAA_NV?$shared_ptr@UHotKeyInfo@@@std@@@Z @ 0x1801FE02C (-AreAllKeysUp@HotKeyProcessor@@AEAA_NV-$shared_ptr@UHotKeyInfo@@@std@@@Z.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x1801FE0E8 (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ?FindRegisteredClient@HotKeyProcessor@@AEAAJAEBUMessageObjectID@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801FE1B0 (-FindRegisteredClient@HotKeyProcessor@@AEAAJAEBUMessageObjectID@@PEAPEAVHotkeyClientRegistration.c)
 *     ?FindRegisteredHotKey@HotKeyProcessor@@AEAAJIIIIU_GUID@@PEAV?$shared_ptr@UHotKeyInfo@@@std@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801FE348 (-FindRegisteredHotKey@HotKeyProcessor@@AEAAJIIIIU_GUID@@PEAV-$shared_ptr@UHotKeyInfo@@@std@@PEAP.c)
 *     ?_Copy_assign@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@$0A@@std@@@std@@AEAAXAEBV12@U?$integral_constant@_N$0A@@2@@Z @ 0x1801FFDFC (-_Copy_assign@-$_Tree@V-$_Tset_traits@V-$shared_ptr@UHotKeyInfo@@@std@@U-$less@V-$shared_ptr@UHo.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@@2@V32@@Z @ 0x1801FFF94 (-erase@-$_Tree@V-$_Tset_traits@V-$shared_ptr@UHotKeyInfo@@@std@@U-$less@V-$shared_ptr@UHotKeyInf.c)
 *     ?reset@?$shared_ptr@UHotKeyInfo@@@std@@QEAAXXZ @ 0x1801FFFF8 (-reset@-$shared_ptr@UHotKeyInfo@@@std@@QEAAXXZ.c)
 *     memcpy_s_2 @ 0x180200024 (memcpy_s_2.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall HotKeyProcessor::DetectAndProcessHotKey(
        HotKeyProcessor *this,
        rsize_t a2,
        unsigned __int8 a3,
        rsize_t a4,
        unsigned __int64 a5,
        unsigned __int8 *Source,
        unsigned int a7,
        unsigned int a8,
        struct _GUID *a9,
        struct HotKeyDetectionResult *a10)
{
  unsigned int v10; // r13d
  int RegisteredClient; // esi
  int v13; // ebx
  std::_Ref_count_base *v14; // r14
  int v15; // r9d
  int v16; // ecx
  int v17; // r8d
  unsigned __int8 v18; // r14
  int v19; // eax
  int RegisteredHotKey; // eax
  unsigned __int64 v21; // r8
  std::_Ref_count_base *v22; // r8
  unsigned int v23; // r10d
  struct HotkeyClientRegistration *v24; // rax
  int v25; // r9d
  int v26; // eax
  _WORD *v27; // rax
  unsigned int *v28; // rdx
  struct HotKeyDetectionResult *v29; // rbx
  int v30; // r8d
  int v31; // r9d
  _QWORD *v32; // rax
  HotKeyProcessor *v33; // rcx
  char *v34; // r12
  __int64 v35; // rbx
  __int64 v36; // r8
  __int64 v37; // rbx
  std::_Ref_count_base *v38; // r14
  int v39; // ecx
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // rax
  int v43; // ecx
  int v44; // r8d
  int v45; // r9d
  __int128 *v46; // rcx
  __int64 v47; // rax
  struct HotkeyClientRegistration *v50; // [rsp+68h] [rbp-98h] BYREF
  int v51; // [rsp+70h] [rbp-90h] BYREF
  int v52; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v53; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v54; // [rsp+7Ch] [rbp-84h] BYREF
  int v55; // [rsp+80h] [rbp-80h] BYREF
  struct HotkeyClientRegistration *v56; // [rsp+88h] [rbp-78h] BYREF
  __int64 v57; // [rsp+90h] [rbp-70h] BYREF
  __int64 v58; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v59; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v60; // [rsp+A4h] [rbp-5Ch] BYREF
  struct HotKeyDetectionResult *v61; // [rsp+A8h] [rbp-58h]
  std::_Ref_count_base *v62[2]; // [rsp+B0h] [rbp-50h] BYREF
  int v63; // [rsp+C0h] [rbp-40h]
  std::_Ref_count_base *v64[2]; // [rsp+C8h] [rbp-38h] BYREF
  rsize_t v65; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v66; // [rsp+E0h] [rbp-20h] BYREF
  int v67; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v68; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v69[2]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v70[16]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v71; // [rsp+120h] [rbp+20h] BYREF
  char v72[8]; // [rsp+128h] [rbp+28h] BYREF
  char v73[64]; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int64 retaddr; // [rsp+178h] [rbp+78h]

  v10 = a2;
  v65 = a4;
  v61 = a10;
  RegisteredClient = 0;
  v63 = 0;
  v13 = 0;
  *(_OWORD *)v64 = 0LL;
  v58 = 0LL;
  v69[0] = v64;
  v69[1] = a9;
  if ( !Source )
  {
    RegisteredClient = -2147024809;
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
      McTemplateU0sqq_EventWriteTransfer(
        (_DWORD)this,
        a2,
        (unsigned int)"HotKeyProcessor::DetectAndProcessHotKey",
        665,
        87);
    goto LABEL_119;
  }
  v14 = (HotKeyProcessor *)((char *)this + 56);
  memcpy_s_2((char *)this + 56, a2, Source, a4);
  v16 = (*((char *)this + 73) >> 31) & 2 | 4;
  if ( *((char *)this + 72) >= 0 )
    v16 = (*((char *)this + 73) >> 31) & 2;
  v17 = v16 | 1;
  if ( *((char *)this + 74) >= 0 )
    v17 = v16;
  if ( *((char *)this + 147) < 0 || *((char *)this + 148) < 0 )
    v17 |= 8u;
  *((_DWORD *)this + 78) = v17;
  if ( (unsigned int)dword_180275508 > 5
    && (qword_180275518 & 0x20000) != 0
    && (qword_180275520 & 0x20000) == qword_180275520 )
  {
    v51 = v17;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (unsigned int)&dword_180275508,
      (unsigned int)&unk_180238FB5,
      v17,
      v15,
      (__int64)&v51);
  }
  if ( (unsigned int)dword_180275508 > 5
    && (qword_180275518 & 0x60000) != 0
    && (qword_180275520 & 0x60000) == qword_180275520 )
  {
    v57 = *((_QWORD *)this + 6);
    v62[0] = v14;
    LODWORD(v62[1]) = 256;
    v51 = *((_DWORD *)this + 78);
    v18 = a3;
    v59 = a3;
    v60 = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperPtrSize,_tlgWrapperByVal<8>>(
      393216,
      (unsigned int)&unk_18023889E,
      v17,
      v15,
      (__int64)&v60,
      (__int64)&v59,
      (__int64)&v51,
      (__int64)v62,
      (__int64)&v57);
  }
  else
  {
    v18 = a3;
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
      if ( v10 - 91 < 2 )
        v13 = 8;
      else
        *((_DWORD *)this + 79) = 0;
      break;
  }
  if ( v18 )
  {
    if ( v13 )
    {
      v63 = *((_DWORD *)this + 79);
      v19 = v63;
      *((_DWORD *)this + 79) = 0;
      if ( v19 )
      {
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v58);
        *(struct _GUID *)v62 = *a9;
        RegisteredHotKey = HotKeyProcessor::FindRegisteredHotKey(
                             (_DWORD)this,
                             *((_DWORD *)this + 78),
                             v10,
                             a7,
                             a8,
                             (__int64)v62,
                             (__int64)v64,
                             (__int64)&v58);
        RegisteredClient = RegisteredHotKey;
        if ( RegisteredHotKey < 0 )
        {
          if ( RegisteredHotKey == -2147024882 )
            TerminateProcessOnMemoryExhaustion(0LL);
          v21 = 754LL;
LABEL_36:
          FailFastWithHR(RegisteredClient, retaddr, v21);
          goto LABEL_119;
        }
      }
    }
  }
  else if ( v13 )
  {
    *((_DWORD *)this + 79) = *((_DWORD *)this + 78);
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v58);
    *(struct _GUID *)v62 = *a9;
    v26 = HotKeyProcessor::FindRegisteredHotKey(
            (_DWORD)this,
            *((_DWORD *)this + 78),
            v10,
            a7,
            a8,
            (__int64)v62,
            (__int64)v64,
            (__int64)&v58);
    RegisteredClient = v26;
    if ( v26 < 0 )
    {
      if ( v26 == -2147024882 )
        TerminateProcessOnMemoryExhaustion(0LL);
      v21 = 775LL;
      goto LABEL_36;
    }
  }
  v22 = v64[0];
  if ( !v64[0] && (!v18 || (*((_BYTE *)this + 312) & 8) == 0 || v10 - 19 > 0x47 && v10 > 0xF && v10 - 93 > 0x22) )
    goto LABEL_84;
  v23 = 0;
  v24 = (struct HotkeyClientRegistration *)v58;
  if ( v64[0] )
  {
    v25 = 1;
    if ( *(_DWORD *)(v58 + 16) )
      v23 = *(_DWORD *)(v58 + 16);
  }
  else
  {
    v25 = 0;
  }
  if ( (unsigned int)dword_1802754D0 > 5
    && (qword_1802754E0 & 0x400000000000LL) != 0
    && (qword_1802754E8 & 0x400000000000LL) == qword_1802754E8 )
  {
    v60 = v23;
    v59 = v23;
    v51 = v23;
    v52 = v18;
    v53 = v25;
    v54 = v10;
    v55 = *((_DWORD *)this + 78);
    v57 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1802754D0,
      (unsigned int)&unk_180238980,
      v64[0],
      v25,
      (__int64)&v57,
      (__int64)&v55,
      (__int64)&v54,
      (__int64)&v53,
      (__int64)&v52,
      (__int64)&v51,
      (__int64)&v59,
      (__int64)&v60);
    v22 = v64[0];
    v24 = (struct HotkeyClientRegistration *)v58;
  }
  if ( !v22 )
  {
LABEL_84:
    v33 = this;
    goto LABEL_85;
  }
  if ( (unsigned int)dword_180275508 > 5
    && (qword_180275518 & 0x60000) != 0
    && (qword_180275520 & 0x60000) == qword_180275520 )
  {
    v57 = *((_QWORD *)this + 6);
    v55 = *((_DWORD *)this + 78);
    v54 = v18;
    v53 = v10;
    v56 = *(struct HotkeyClientRegistration **)v22;
    v52 = *((_DWORD *)v22 + 2);
    v50 = (struct HotkeyClientRegistration *)"Enabled hotkey found";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      qword_180275520 & 0x60000,
      (unsigned int)&unk_180238FFF,
      (_DWORD)v22,
      393216,
      (__int64)&v50,
      (__int64)&v52,
      (__int64)&v56,
      (__int64)&v53,
      (__int64)&v54,
      (__int64)&v55,
      (__int64)&v57);
    v24 = (struct HotkeyClientRegistration *)v58;
  }
  if ( v24 && *((_QWORD *)v24 + 13) )
  {
    v50 = v24;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v50);
    if ( !lambda_66b71e0fbdc67b4ac52304c75f4bce4c_::operator()((__int64)v69) )
    {
      v27 = (_WORD *)*((_QWORD *)this + 40);
      v28 = (unsigned int *)v64[0];
      if ( (_WORD *)v64[0] != v27 || (v27[12] & 0x4000) == 0 )
      {
        v29 = v61;
        if ( v10 - 91 <= 1 && v18 && !*((_DWORD *)this + 78) )
        {
          WinKeyScenarioTelemetry::StartWinKeyScenario((unsigned int *)v61 + 9);
          v28 = (unsigned int *)v64[0];
        }
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, rsize_t, unsigned __int64))(**(_QWORD **)(v58 + 104)
                                                                                          + 24LL))(
          *(_QWORD *)(v58 + 104),
          v28[4],
          v28[5],
          v28[7],
          v65,
          a5);
        if ( (unsigned int)dword_180275508 > 5
          && (qword_180275518 & 0x20000) != 0
          && (qword_180275520 & 0x20000) == qword_180275520 )
        {
          v57 = *((_QWORD *)this + 6);
          v55 = *((_DWORD *)v64[0] + 7);
          v54 = *((_DWORD *)v64[0] + 5);
          v53 = *((_DWORD *)v64[0] + 4);
          v56 = *(struct HotkeyClientRegistration **)v64[0];
          v52 = *((_DWORD *)v64[0] + 2);
          v50 = (struct HotkeyClientRegistration *)"Called OnHotKeyDetected";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
            v64[0],
            (unsigned int)&unk_180238E10,
            v30,
            v31,
            (__int64)&v50,
            (__int64)&v52,
            (__int64)&v56,
            (__int64)&v53,
            (__int64)&v54,
            (__int64)&v55,
            (__int64)&v57);
        }
        WinKeyScenarioTelemetry::OnWinKeyDetected();
        v24 = (struct HotkeyClientRegistration *)v58;
        goto LABEL_78;
      }
    }
    v24 = (struct HotkeyClientRegistration *)v58;
  }
  v29 = v61;
LABEL_78:
  if ( !v63 && !*((_DWORD *)this + 79) )
  {
    v50 = v24;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v50);
    if ( !lambda_66b71e0fbdc67b4ac52304c75f4bce4c_::operator()((__int64)v69) )
      *((_BYTE *)v29 + 32) = 1;
  }
  v32 = (_QWORD *)std::map<unsigned __int64,std::set<std::shared_ptr<HotKeyInfo>>>::_Try_emplace<unsigned __int64 const &,>(
                    (char *)this + 336,
                    v70,
                    &v65);
  std::_Tree<std::_Tset_traits<std::shared_ptr<HotKeyInfo>,std::less<std::shared_ptr<HotKeyInfo>>,std::allocator<std::shared_ptr<HotKeyInfo>>,0>>::_Emplace<std::shared_ptr<HotKeyInfo> const &>(
    *v32 + 40LL,
    v62,
    v64);
  std::shared_ptr<SystemCursorShapeBitmap2>::operator=((char *)this + 320, v64);
  std::shared_ptr<SystemCursorShapeBitmap2>::operator=(v29, v64);
  v33 = this;
  if ( v58 )
    *((_OWORD *)v29 + 1) = *(_OWORD *)(v58 + 84);
LABEL_85:
  v34 = (char *)v33 + 336;
  if ( v18 )
  {
    v35 = *(_QWORD *)std::map<unsigned __int64,std::set<std::shared_ptr<HotKeyInfo>>>::_Try_emplace<unsigned __int64 const &,>(
                       (char *)v33 + 336,
                       v73,
                       &v65);
    v66 = 0LL;
    v62[0] = (std::_Ref_count_base *)&v66;
    v62[1] = (std::_Ref_count_base *)&v66;
    *(_QWORD *)&v66 = std::_Tree_node<std::shared_ptr<HotKeyInfo>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::shared_ptr<HotKeyInfo>,void *>>>();
    LOBYTE(v36) = a3;
    std::_Tree<std::_Tset_traits<std::shared_ptr<HotKeyInfo>,std::less<std::shared_ptr<HotKeyInfo>>,std::allocator<std::shared_ptr<HotKeyInfo>>,0>>::_Copy<std::_Tree<std::_Tset_traits<std::shared_ptr<HotKeyInfo>,std::less<std::shared_ptr<HotKeyInfo>>,std::allocator<std::shared_ptr<HotKeyInfo>>,0>>::_Copy_tag>(
      &v66,
      v35 + 40,
      v36);
    v62[1] = 0LL;
    std::_Tree_head_scoped_ptr<std::allocator<std::_Tree_node<std::shared_ptr<HotKeyInfo>,void *>>,std::_Tree_val<std::_Tree_simple_types<std::shared_ptr<HotKeyInfo>>>>::~_Tree_head_scoped_ptr<std::allocator<std::_Tree_node<std::shared_ptr<HotKeyInfo>,void *>>,std::_Tree_val<std::_Tree_simple_types<std::shared_ptr<HotKeyInfo>>>>(v62);
    v37 = *(_QWORD *)v66;
    v57 = *(_QWORD *)v66;
    while ( v37 != (_QWORD)v66 )
    {
      std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(v62, v37 + 32);
      v50 = 0LL;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v50);
      v38 = v62[0];
      RegisteredClient = HotKeyProcessor::FindRegisteredClient(this, v62[0], &v50);
      if ( RegisteredClient < 0 )
      {
        if ( RegisteredClient == -2147024882 )
          TerminateProcessOnMemoryExhaustion(0LL);
        FailFastWithHR(RegisteredClient, retaddr, 0x374uLL);
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v50);
        if ( v62[1] )
          std::_Ref_count_base::_Decref(v62[1]);
        goto LABEL_118;
      }
      if ( v10 == *((_DWORD *)v38 + 7) && !v63 )
      {
        v56 = v50;
        Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v56);
        if ( !lambda_66b71e0fbdc67b4ac52304c75f4bce4c_::operator()((__int64)v69) )
          *((_BYTE *)v61 + 32) = 1;
      }
      if ( (unsigned int)dword_180275508 > 5
        && (qword_180275518 & 0x60000) != 0
        && (qword_180275520 & 0x60000) == qword_180275520 )
      {
        v55 = *((_DWORD *)v38 + 7);
        v54 = *((_DWORD *)v38 + 5);
        v53 = *((_DWORD *)v38 + 4);
        v71 = *(_QWORD *)v38;
        v52 = *((_DWORD *)v38 + 2);
        v56 = (struct HotkeyClientRegistration *)"Checking hotkey for all keys up";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v39,
          (unsigned int)&unk_180238ED1,
          v40,
          v41,
          (__int64)&v56,
          (__int64)&v52,
          (__int64)&v71,
          (__int64)&v53,
          (__int64)&v54,
          (__int64)&v55);
      }
      v42 = std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(v70, v62);
      if ( (unsigned __int8)HotKeyProcessor::AreAllKeysUp(this, v42) )
      {
        if ( v50 )
        {
          if ( *((_QWORD *)v50 + 13) )
          {
            v56 = v50;
            Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v56);
            if ( !lambda_66b71e0fbdc67b4ac52304c75f4bce4c_::operator()((__int64)v69) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, rsize_t, unsigned __int64))(**((_QWORD **)v50 + 13)
                                                                                                + 32LL))(
                *((_QWORD *)v50 + 13),
                *((unsigned int *)v38 + 4),
                *((unsigned int *)v38 + 5),
                *((unsigned int *)v38 + 7),
                v65,
                a5);
              if ( (unsigned int)dword_180275508 > 5
                && (qword_180275518 & 0x20000) != 0
                && (qword_180275520 & 0x20000) == qword_180275520 )
              {
                v60 = *((_DWORD *)v38 + 7);
                v59 = *((_DWORD *)v38 + 5);
                v51 = *((_DWORD *)v38 + 4);
                v68 = *(_QWORD *)v38;
                v67 = *((_DWORD *)v38 + 2);
                v57 = (__int64)"Called OnHotKeyAllKeysUp";
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                  v43,
                  (unsigned int)&unk_180238D33,
                  v44,
                  v45,
                  (__int64)&v57,
                  (__int64)&v67,
                  (__int64)&v68,
                  (__int64)&v51,
                  (__int64)&v59,
                  (__int64)&v60);
              }
            }
          }
        }
        v37 = *(_QWORD *)std::_Tree<std::_Tset_traits<std::shared_ptr<HotKeyInfo>,std::less<std::shared_ptr<HotKeyInfo>>,std::allocator<std::shared_ptr<HotKeyInfo>>,0>>::erase(
                           &v66,
                           v72,
                           v37);
        v57 = v37;
      }
      else
      {
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(&v57);
        v37 = v57;
      }
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v50);
      if ( v62[1] )
        std::_Ref_count_base::_Decref(v62[1]);
    }
    v46 = (__int128 *)(*(_QWORD *)std::map<unsigned __int64,std::set<std::shared_ptr<HotKeyInfo>>>::_Try_emplace<unsigned __int64 const &,>(
                                    v34,
                                    v70,
                                    &v65)
                     + 40LL);
    if ( v46 != &v66 )
      std::_Tree<std::_Tset_traits<std::shared_ptr<HotKeyInfo>,std::less<std::shared_ptr<HotKeyInfo>>,std::allocator<std::shared_ptr<HotKeyInfo>>,0>>::_Copy_assign(
        v46,
        &v66);
    if ( *((_QWORD *)this + 40) )
    {
      v47 = std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(v70, (char *)this + 320);
      if ( (unsigned __int8)HotKeyProcessor::AreAllKeysUp(this, v47) )
        std::shared_ptr<HotKeyInfo>::reset((char *)this + 320);
    }
LABEL_118:
    std::set<std::shared_ptr<HotKeyInfo>>::~set<std::shared_ptr<HotKeyInfo>>(&v66);
  }
LABEL_119:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v58);
  if ( v64[1] )
    std::_Ref_count_base::_Decref(v64[1]);
  return (unsigned int)RegisteredClient;
}
