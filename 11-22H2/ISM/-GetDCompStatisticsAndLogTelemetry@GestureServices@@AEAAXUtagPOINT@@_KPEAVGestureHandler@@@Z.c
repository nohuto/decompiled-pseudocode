/*
 * XREFs of ?GetDCompStatisticsAndLogTelemetry@GestureServices@@AEAAXUtagPOINT@@_KPEAVGestureHandler@@@Z @ 0x180072EC4
 * Callers:
 *     _lambda_80df7c2b76f58973f9ddec3659020abd_::operator() @ 0x180072AA4 (_lambda_80df7c2b76f58973f9ddec3659020abd_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U1@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@33333334@Z @ 0x180001808 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@U1@U1@U1@U1@U1@U1@U2@@-$_tlgWriteTemplate@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@33333AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x18000196C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U3@@-.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CalculateElapsedMicroseconds@InputETW@@SA_K_K0@Z @ 0x180067FF0 (-CalculateElapsedMicroseconds@InputETW@@SA_K_K0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18006DB30 (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UtagCOMPOSITION_TARGET_ID@@V?$allocator@UtagCOMPOSITION_TARGET_ID@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18007276C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UtagCOMPOSITION_TARGET_ID@@V-$allocator@Ut.c)
 *     ?FindDCompTargetIdForPoint@GestureServices@@AEAA?AV?$tuple@V?$optional@UtagCOMPOSITION_TARGET_ID@@@std@@PEBG@std@@UtagPOINT@@IPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x180072D8C (-FindDCompTargetIdForPoint@GestureServices@@AEAA-AV-$tuple@V-$optional@UtagCOMPOSITION_TARGET_ID.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1800B0214 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GestureServices::GetDCompStatisticsAndLogTelemetry(
        GestureServices *this,
        struct tagPOINT a2,
        unsigned __int64 a3,
        struct GestureHandler *a4)
{
  void *v6; // r14
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r13
  __int64 v9; // rdi
  __int128 *v10; // r15
  int Statistics; // eax
  unsigned int v12; // eax
  __int64 DCompTargetIdForPoint; // rax
  const WCHAR *v14; // r15
  unsigned __int8 v15; // di
  unsigned int v16; // ebx
  int TargetStatistics; // eax
  unsigned __int64 v18; // rbx
  __int64 v19; // rcx
  unsigned __int64 v20; // r8
  __int64 v21; // r9
  struct GestureHandler *v22; // r14
  unsigned __int64 v23; // rbx
  __int64 v24; // rcx
  unsigned __int64 v25; // r8
  __int64 v26; // r9
  int v27; // [rsp+70h] [rbp-90h] BYREF
  const WCHAR *v28; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v29; // [rsp+80h] [rbp-80h] BYREF
  struct GestureHandler *v30; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v31; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v32; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v33; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v34; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v35; // [rsp+B0h] [rbp-50h] BYREF
  const WCHAR *v36; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v37; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v38; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v39; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v40; // [rsp+E0h] [rbp-20h]
  __int128 v41; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v42; // [rsp+100h] [rbp+0h]
  unsigned int v43; // [rsp+108h] [rbp+8h]
  unsigned __int64 v44; // [rsp+118h] [rbp+18h]
  unsigned int v45; // [rsp+120h] [rbp+20h]
  unsigned __int64 v46; // [rsp+130h] [rbp+30h]
  __int128 v47; // [rsp+140h] [rbp+40h] BYREF
  __int64 v48; // [rsp+150h] [rbp+50h]
  int v49[28]; // [rsp+160h] [rbp+60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+118h]

  v30 = a4;
  v29 = (unsigned __int64)this;
  v32 = *((_QWORD *)a4 + 13);
  v6 = 0LL;
  BYTE12(v40) = 0;
  if ( !a3 )
  {
    v27 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgs((__int64)this, 0x20000, 609);
  }
  v7 = 0LL;
  v8 = 0LL;
  v41 = 0LL;
  v9 = 0LL;
  v42 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v10 = (__int128 *)v49;
  Statistics = NtDCompositionGetStatistics(&v32, &v47, 4LL, v49, &v27);
  if ( Statistics < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x274,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\gestureservices.cpp",
      (const char *)(unsigned int)Statistics);
    return;
  }
  v31 = v47;
  if ( (unsigned __int64)v47 <= a3 )
  {
    LODWORD(v28) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgs((__int64)retaddr, 0x20000, 631);
  }
  v12 = v27;
  if ( (unsigned int)v27 > 4 )
  {
    std::vector<tagCOMPOSITION_TARGET_ID>::_Resize_reallocate<std::_Value_init_tag>((__int64)&v41, (unsigned int)v27);
    v9 = v42;
    v10 = (__int128 *)v41;
    v6 = (void *)v41;
    if ( (int)NtDCompositionGetStatistics(&v32, &v47, (unsigned int)v27, v41, 0LL) >= 0 )
    {
      v12 = v27;
    }
    else
    {
      v10 = (__int128 *)v49;
      v12 = 4;
      v27 = 4;
    }
  }
  DCompTargetIdForPoint = GestureServices::FindDCompTargetIdForPoint(v29, (__int64)&v41, *(_QWORD *)&a2, v12, v10);
  v39 = *(_OWORD *)(DCompTargetIdForPoint + 8);
  v40 = *(_OWORD *)(DCompTargetIdForPoint + 24);
  v14 = *(const WCHAR **)DCompTargetIdForPoint;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 4 * ((v9 - (__int64)v6) >> 2));
  if ( !BYTE12(v40) )
    goto LABEL_32;
  memset_0(&v41, 0, 0x48uLL);
  v28 = 0LL;
  v15 = 1;
  if ( (int)DCompositionGetFrameId(2LL, &v28) < 0 )
  {
    if ( !BYTE12(v40) )
      std::_Throw_bad_optional_access();
    if ( (int)NtDCompositionGetTargetStatistics(&v32, &v39, &v41) < 0 )
      goto LABEL_32;
    v7 = v44;
    v8 = v46;
  }
  else
  {
    v16 = 0;
    v29 = v32;
    if ( v32 >= (unsigned __int64)v28 )
    {
LABEL_32:
      v15 = 0;
      goto LABEL_33;
    }
    while ( 1 )
    {
      if ( !BYTE12(v40) )
        std::_Throw_bad_optional_access();
      TargetStatistics = NtDCompositionGetTargetStatistics(&v29, &v39, &v41);
      if ( TargetStatistics < 0 )
        break;
      if ( !v16 && *((_QWORD *)&v41 + 1) )
      {
        v7 = v44;
        v16 = v43;
      }
      if ( v46 && v45 >= v16 )
      {
        v8 = v46;
        goto LABEL_30;
      }
      if ( ++v29 >= (unsigned __int64)v28 )
        goto LABEL_30;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2A8,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\gestureservices.cpp",
      (const char *)(unsigned int)TargetStatistics);
  }
LABEL_30:
  if ( v7 <= a3 || v8 <= a3 )
    goto LABEL_32;
LABEL_33:
  v18 = v31;
  if ( v31 > a3 )
  {
    v20 = InputETW::CalculateElapsedMicroseconds(a3, v31) / 0x3E8;
    if ( (unsigned int)dword_180275498 > 5
      && (qword_1802754A8 & 0x400000000000LL) != 0
      && (qword_1802754B0 & 0x400000000000LL) == qword_1802754B0 )
    {
      LODWORD(v28) = v15;
      LODWORD(v29) = v27;
      v31 = v20;
      v33 = v18;
      v34 = a3;
      v22 = v30;
      v30 = (struct GestureHandler *)*((_QWORD *)v30 + 32);
      v35 = *((unsigned int *)v22 + 34);
      v36 = (const WCHAR *)*((_QWORD *)v22 + 3);
      v37 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v19,
        (int)&unk_180234FC5,
        v20,
        v21,
        (__int64)&v37,
        &v36,
        (__int64)&v35,
        (__int64)&v30,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v31,
        (__int64)&v29,
        (__int64)&v28);
    }
    else
    {
      v22 = v30;
    }
    if ( v15 )
    {
      v23 = InputETW::CalculateElapsedMicroseconds(a3, v7) / 0x3E8;
      v25 = InputETW::CalculateElapsedMicroseconds(a3, v8) / 0x3E8;
      if ( (unsigned int)dword_180275498 > 5
        && (qword_1802754A8 & 0x400000000000LL) != 0
        && (qword_1802754B0 & 0x400000000000LL) == qword_1802754B0 )
      {
        v37 = (__int64)v14;
        v36 = (const WCHAR *)v25;
        v35 = v23;
        v34 = v8;
        v33 = v7;
        v31 = a3;
        v30 = (struct GestureHandler *)*((_QWORD *)v22 + 32);
        v29 = *((unsigned int *)v22 + 34);
        v28 = (const WCHAR *)*((_QWORD *)v22 + 3);
        v38 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
          v24,
          (int)&unk_180235069,
          v25,
          v26,
          (__int64)&v38,
          &v28,
          (__int64)&v29,
          (__int64)&v30,
          (__int64)&v31,
          (__int64)&v33,
          (__int64)&v34,
          (__int64)&v35,
          (__int64)&v36,
          (const WCHAR **)&v37);
      }
    }
  }
}
