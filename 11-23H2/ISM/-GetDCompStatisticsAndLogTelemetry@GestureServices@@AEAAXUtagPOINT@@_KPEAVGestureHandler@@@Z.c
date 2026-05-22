/*
 * XREFs of ?GetDCompStatisticsAndLogTelemetry@GestureServices@@AEAAXUtagPOINT@@_KPEAVGestureHandler@@@Z @ 0x180060694
 * Callers:
 *     _lambda_80df7c2b76f58973f9ddec3659020abd_::operator() @ 0x180060274 (_lambda_80df7c2b76f58973f9ddec3659020abd_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U1@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@33333334@Z @ 0x180001394 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@U1@U1@U1@U1@U1@U1@U2@@-$_tlgWriteTemplate@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@33333AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1800014F8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U3@@-.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?CalculateElapsedMicroseconds@InputETW@@SA_K_K0@Z @ 0x18005BA48 (-CalculateElapsedMicroseconds@InputETW@@SA_K_K0@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UtagCOMPOSITION_TARGET_ID@@V?$allocator@UtagCOMPOSITION_TARGET_ID@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18005FF3C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UtagCOMPOSITION_TARGET_ID@@V-$allocator@Ut.c)
 *     ?FindDCompTargetIdForPoint@GestureServices@@AEAA?AV?$tuple@V?$optional@UtagCOMPOSITION_TARGET_ID@@@std@@PEBG@std@@UtagPOINT@@IPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x18006055C (-FindDCompTargetIdForPoint@GestureServices@@AEAA-AV-$tuple@V-$optional@UtagCOMPOSITION_TARGET_ID.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009DCC4 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18011DC70 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GestureServices::GetDCompStatisticsAndLogTelemetry(
        GestureServices *this,
        struct tagPOINT a2,
        unsigned __int64 a3,
        struct GestureHandler *a4)
{
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r13
  __int64 v8; // rdi
  __int128 *v9; // r15
  int Statistics; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  void *v13; // r14
  unsigned int v14; // eax
  __int64 DCompTargetIdForPoint; // rax
  const WCHAR *v16; // r15
  unsigned __int8 v17; // di
  unsigned int v18; // ebx
  int TargetStatistics; // eax
  unsigned __int64 v20; // rbx
  __int64 v21; // rcx
  unsigned __int64 v22; // r8
  __int64 v23; // r9
  struct GestureHandler *v24; // r14
  unsigned __int64 v25; // rbx
  __int64 v26; // rcx
  unsigned __int64 v27; // r8
  __int64 v28; // r9
  int v29; // [rsp+20h] [rbp-E0h]
  int v30; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v31; // [rsp+78h] [rbp-88h] BYREF
  struct GestureHandler *v32; // [rsp+80h] [rbp-80h] BYREF
  const WCHAR *v33; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v34; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v35; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v36; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v37; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v38; // [rsp+B0h] [rbp-50h] BYREF
  const WCHAR *v39; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v40; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v41; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v42; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v43; // [rsp+E0h] [rbp-20h]
  __int128 v44; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v45; // [rsp+100h] [rbp+0h]
  unsigned int v46; // [rsp+108h] [rbp+8h]
  unsigned __int64 v47; // [rsp+118h] [rbp+18h]
  unsigned int v48; // [rsp+120h] [rbp+20h]
  unsigned __int64 v49; // [rsp+130h] [rbp+30h]
  __int128 v50; // [rsp+140h] [rbp+40h] BYREF
  __int64 v51; // [rsp+150h] [rbp+50h]
  int v52[28]; // [rsp+160h] [rbp+60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+118h]

  v32 = a4;
  v31 = (unsigned __int64)this;
  v35 = *((_QWORD *)a4 + 13);
  BYTE12(v43) = 0;
  if ( !a3 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))MicrosoftTelemetryAssertTriggeredNoArgs)(this, a2, 0LL);
  v6 = 0LL;
  v7 = 0LL;
  v44 = 0LL;
  v8 = 0LL;
  v45 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v9 = (__int128 *)v52;
  Statistics = NtDCompositionGetStatistics(&v35, &v50, 4LL, v52);
  if ( Statistics < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x274,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\g"
                    "estureservices.cpp",
      (const char *)(unsigned int)Statistics,
      (int)&v30);
    return;
  }
  v34 = v50;
  if ( (unsigned __int64)v50 <= a3 )
    MicrosoftTelemetryAssertTriggeredNoArgs(retaddr, v11, v12);
  v13 = 0LL;
  v14 = v30;
  if ( (unsigned int)v30 > 4 )
  {
    std::vector<tagCOMPOSITION_TARGET_ID>::_Resize_reallocate<std::_Value_init_tag>((__int64)&v44, (unsigned int)v30);
    v8 = v45;
    v9 = (__int128 *)v44;
    v13 = (void *)v44;
    if ( (int)NtDCompositionGetStatistics(&v35, &v50, (unsigned int)v30, v44) >= 0 )
    {
      v14 = v30;
    }
    else
    {
      v9 = (__int128 *)v52;
      v14 = 4;
      v30 = 4;
    }
  }
  DCompTargetIdForPoint = GestureServices::FindDCompTargetIdForPoint(v31, (__int64)&v44, *(_QWORD *)&a2, v14, v9);
  v42 = *(_OWORD *)(DCompTargetIdForPoint + 8);
  v43 = *(_OWORD *)(DCompTargetIdForPoint + 24);
  v16 = *(const WCHAR **)DCompTargetIdForPoint;
  if ( v13 )
    std::_Deallocate<16,0>(v13, 4 * ((v8 - (__int64)v13) >> 2));
  if ( !BYTE12(v43) )
    goto LABEL_32;
  memset_0(&v44, 0, 0x48uLL);
  v33 = 0LL;
  v17 = 1;
  if ( (int)DCompositionGetFrameId(2LL, &v33) < 0 )
  {
    if ( !BYTE12(v43) )
      std::_Throw_bad_optional_access();
    if ( (int)NtDCompositionGetTargetStatistics(&v35, &v42, &v44) < 0 )
      goto LABEL_32;
    v6 = v47;
    v7 = v49;
  }
  else
  {
    v18 = 0;
    v31 = v35;
    if ( v35 >= (unsigned __int64)v33 )
    {
LABEL_32:
      v17 = 0;
      goto LABEL_33;
    }
    while ( 1 )
    {
      if ( !BYTE12(v43) )
        std::_Throw_bad_optional_access();
      TargetStatistics = NtDCompositionGetTargetStatistics(&v31, &v42, &v44);
      if ( TargetStatistics < 0 )
        break;
      if ( !v18 && *((_QWORD *)&v44 + 1) )
      {
        v6 = v47;
        v18 = v46;
      }
      if ( v49 && v48 >= v18 )
      {
        v7 = v49;
        goto LABEL_30;
      }
      if ( ++v31 >= (unsigned __int64)v33 )
        goto LABEL_30;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2A8,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\g"
                    "estureservices.cpp",
      (const char *)(unsigned int)TargetStatistics,
      v29);
  }
LABEL_30:
  if ( v6 <= a3 || v7 <= a3 )
    goto LABEL_32;
LABEL_33:
  v20 = v34;
  if ( v34 > a3 )
  {
    v22 = InputETW::CalculateElapsedMicroseconds(a3, v34) / 0x3E8;
    if ( (unsigned int)dword_180266498 > 5
      && (qword_1802664A8 & 0x400000000000LL) != 0
      && (qword_1802664B0 & 0x400000000000LL) == qword_1802664B0 )
    {
      LODWORD(v33) = v17;
      LODWORD(v31) = v30;
      v34 = v22;
      v36 = v20;
      v37 = a3;
      v24 = v32;
      v32 = (struct GestureHandler *)*((_QWORD *)v32 + 32);
      v38 = *((unsigned int *)v24 + 34);
      v39 = (const WCHAR *)*((_QWORD *)v24 + 3);
      v40 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v21,
        (int)&unk_1802260AA,
        v22,
        v23,
        (__int64)&v40,
        &v39,
        (__int64)&v38,
        (__int64)&v32,
        (__int64)&v37,
        (__int64)&v36,
        (__int64)&v34,
        (__int64)&v31,
        (__int64)&v33);
    }
    else
    {
      v24 = v32;
    }
    if ( v17 )
    {
      v25 = InputETW::CalculateElapsedMicroseconds(a3, v6) / 0x3E8;
      v27 = InputETW::CalculateElapsedMicroseconds(a3, v7) / 0x3E8;
      if ( (unsigned int)dword_180266498 > 5
        && (qword_1802664A8 & 0x400000000000LL) != 0
        && (qword_1802664B0 & 0x400000000000LL) == qword_1802664B0 )
      {
        v40 = (__int64)v16;
        v39 = (const WCHAR *)v27;
        v38 = v25;
        v37 = v7;
        v36 = v6;
        v34 = a3;
        v32 = (struct GestureHandler *)*((_QWORD *)v24 + 32);
        v31 = *((unsigned int *)v24 + 34);
        v33 = (const WCHAR *)*((_QWORD *)v24 + 3);
        v41 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
          v26,
          (int)&unk_18022614E,
          v27,
          v28,
          (__int64)&v41,
          &v33,
          (__int64)&v31,
          (__int64)&v32,
          (__int64)&v34,
          (__int64)&v36,
          (__int64)&v37,
          (__int64)&v38,
          (__int64)&v39,
          (const WCHAR **)&v40);
      }
    }
  }
}
