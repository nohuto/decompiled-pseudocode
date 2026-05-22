/*
 * XREFs of ?ProcessPnpNotification@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x18003FCF0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_2b41a082a50d31d24644deaedcc451d5__void__MIT_PNP_DEVICE_NOTIFICATION_MESSAGE_const___::_Do_call @ 0x18003FC60 (std--_Func_impl_no_alloc__lambda_2b41a082a50d31d24644deaedcc451d5__void__MIT_PNP_DE_ea_18003FC60.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018310 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x180037D84 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18003FF48 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULeg.c)
 *     ??$_Insert_or_assign@AEBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@?$unordered_map@KV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBK$$QEAV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@1@@Z @ 0x18003FF7C (--$_Insert_or_assign@AEBKV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@.c)
 *     ?CreateDeviceInfo@Win32kInterop@@AEAA?AV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@W4InputType@@PEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x180040114 (-CreateDeviceInfo@Win32kInterop@@AEAA-AV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegac.c)
 *     ??1Completer@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAA@XZ @ 0x180048394 (--1Completer@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004D0EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4R.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007F788 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapSz@G@@@Z @ 0x1800DCFBC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$.c)
 *     ?ComputePnpActionAndInputType@Win32kInterop@@AEBA?AW4PnPHandlingAction@@PEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@PEAW4InputType@@@Z @ 0x1800DEC64 (-ComputePnpActionAndInputType@Win32kInterop@@AEBA-AW4PnPHandlingAction@@PEBU_MIT_PNP_DEVICE_NOTI.c)
 *     ?ProcessDeviceRemoval@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x1800E062C (-ProcessDeviceRemoval@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 *     ?UnsuppressForDeviceArrivalImpl@CursorSuppressionProcessor@@AEAAXK@Z @ 0x1801389AC (-UnsuppressForDeviceArrivalImpl@CursorSuppressionProcessor@@AEAAXK@Z.c)
 *     ?TriggerUpdateInputTarget@CursorProcessor@@SAXXZ @ 0x180139570 (-TriggerUpdateInputTarget@CursorProcessor@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Win32kInterop::ProcessPnpNotification(
        Win32kInterop *this,
        const struct _MIT_PNP_DEVICE_NOTIFICATION_MESSAGE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rcx
  ULONGLONG v9; // r14
  __int64 v10; // r9
  unsigned __int64 i; // rcx
  __int64 v12; // rcx
  int v13; // eax
  const char *v14; // rax
  __int16 v15; // bx
  __int16 v16; // si
  int v17; // [rsp+20h] [rbp-89h]
  WINBOOL v18[2]; // [rsp+50h] [rbp-59h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-51h] BYREF
  WINBOOL fPending[2]; // [rsp+60h] [rbp-49h] BYREF
  int v21; // [rsp+68h] [rbp-41h] BYREF
  int v22; // [rsp+6Ch] [rbp-3Dh] BYREF
  __int64 v23; // [rsp+70h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+78h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+98h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR *v26; // [rsp+B8h] [rbp+Fh]
  __int64 v27; // [rsp+C0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    v24.Ptr = (ULONGLONG)&`InputTraceLogging::Instance'::`2'::wrapper;
    Context = &qword_180242A58;
    qword_180242A58 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180242A70 = (__int64)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    v24.Size = 0;
    wil::details::static_lazy<InputTraceLogging>::Completer::~Completer(&v24);
  }
  v6 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v6 > 4u )
  {
    v5 = 512LL;
    if ( (*(_DWORD *)(v6 + 16) & 0x200LL) != 0 && (*(_QWORD *)(v6 + 24) & 0x200LL) == *(_QWORD *)(v6 + 24) )
    {
      v23 = (__int64)a2 + 52;
      v21 = *((_DWORD *)a2 + 3);
      v22 = *((_DWORD *)a2 + 2);
      v18[0] = *((_DWORD *)a2 + 1);
      if ( *(_DWORD *)a2 )
      {
        switch ( *(_DWORD *)a2 )
        {
          case 1:
            v14 = "Mouse";
            break;
          case 2:
            v14 = "Keyboard";
            break;
          case 3:
            v14 = "Touch";
            break;
          case 4:
            v14 = "PTP";
            break;
          case 5:
            v14 = "Pen";
            break;
          default:
            v14 = "UNKNOWN";
            break;
        }
      }
      else
      {
        v14 = "HID";
      }
      v24.Ptr = (ULONGLONG)v14;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v6,
        (int)&dword_180203485,
        (__int64)&v24,
        (__int64)v18,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v23);
    }
  }
  v7 = 2;
  if ( *((_DWORD *)a2 + 2) == 2 )
  {
    if ( *(_DWORD *)a2 )
    {
      switch ( *(_DWORD *)a2 )
      {
        case 1:
          v8 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                             (unsigned int)(*(_DWORD *)a2 - 1),
                             _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
               + 1);
          if ( *(_DWORD *)v8 > 4u
            && (*(_BYTE *)(v8 + 16) & 8) != 0
            && (*(_QWORD *)(v8 + 24) & 8LL) == *(_QWORD *)(v8 + 24) )
          {
            tlgWriteTransfer_EventWriteTransfer(v8, (int)&dword_180204749, 0, 0, 2u, &v24);
          }
          if ( CursorProcessor::s_processor )
            *((_BYTE *)CursorProcessor::s_processor + 72) = 1;
          if ( CursorSuppressionProcessor::s_processor )
            CursorSuppressionProcessor::UnsuppressForDeviceArrivalImpl(
              (CursorSuppressionProcessor *)v8,
              *((_DWORD *)a2 + 1));
          break;
        case 2:
          v7 = 4;
          break;
        case 4:
          v7 = 32;
          CursorProcessor::TriggerUpdateInputTarget();
          break;
        default:
          return;
      }
    }
    else
    {
      v15 = *((_WORD *)a2 + 10);
      v16 = *((_WORD *)a2 + 11);
      LOBYTE(v4) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultiProcessISM>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_MultiProcessISM>::GetImpl'::`2'::impl,
        v4);
      if ( v15 != 13 || v16 != 15 )
        return;
      v7 = 2048;
    }
    v9 = *((unsigned int *)a2 + 1);
    fPending[0] = *((_DWORD *)a2 + 1);
    v10 = 0xCBF29CE484222325uLL;
    for ( i = 0LL; i < 4; ++i )
      v10 = 0x100000001B3LL * (*((unsigned __int8 *)fPending + i) ^ (unsigned __int64)v10);
    if ( !*(_QWORD *)(std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>>,0>>::_Find_last<unsigned long>(
                        (char *)this + 64,
                        &v24,
                        fPending,
                        v10)
                    + 8) )
    {
      Context = 0LL;
      if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, v18, &Context) && v18[0] )
      {
        v24.Ptr = (ULONGLONG)&`InputETW::Instance'::`2'::wrapper;
        Context = &qword_180242E40;
        qword_180242E40 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
        qword_180242E58 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
        v24.Size = 0;
        wil::details::static_lazy<InputETW>::Completer::~Completer((LPINIT_ONCE *)&v24);
      }
      v12 = *((_QWORD *)Context + 1);
      if ( v12 && *(_DWORD *)v12 > 1u )
      {
        Context = 0LL;
        if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, v18, &Context) && v18[0] )
        {
          v24.Ptr = (ULONGLONG)&`InputETW::Instance'::`2'::wrapper;
          Context = &qword_180242E40;
          qword_180242E40 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
          qword_180242E58 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
          v24.Size = 0;
          wil::details::static_lazy<InputETW>::Completer::~Completer((LPINIT_ONCE *)&v24);
        }
        v12 = *((_QWORD *)Context + 1);
        if ( *(_DWORD *)v12 > 5u
          && (*(_BYTE *)(v12 + 16) & 1) != 0
          && (*(_QWORD *)(v12 + 24) & 1LL) == *(_QWORD *)(v12 + 24) )
        {
          v24.Ptr = v9;
          v26 = &v24;
          v27 = 8LL;
          tlgWriteTransfer_EventWriteTransfer(v12, (int)&dword_1802031E0, 0, 0, 3u, &v25);
        }
      }
      Win32kInterop::CreateDeviceInfo(v12, v18, v7, a2);
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, Win32kInterop *))(**((_QWORD **)this + 7) + 40LL))(
              *((_QWORD *)this + 7),
              *(_QWORD *)v18,
              this);
      if ( v13 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1F6,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
          (const char *)(unsigned int)v13,
          v17);
      std::unordered_map<unsigned long,std::unique_ptr<LegacyDeviceInfo>>::_Insert_or_assign<unsigned long const &,std::unique_ptr<LegacyDeviceInfo>>(
        (char *)this + 64,
        &v24,
        *(_QWORD *)v18,
        v18);
      if ( *(_QWORD *)v18 )
        operator delete(*(void **)v18, 0x60CuLL);
    }
  }
  else if ( *((_DWORD *)a2 + 2) == 3 && (unsigned int)Win32kInterop::ComputePnpActionAndInputType(v5, a2, v18) )
  {
    Win32kInterop::ProcessDeviceRemoval(this, a2);
  }
}
