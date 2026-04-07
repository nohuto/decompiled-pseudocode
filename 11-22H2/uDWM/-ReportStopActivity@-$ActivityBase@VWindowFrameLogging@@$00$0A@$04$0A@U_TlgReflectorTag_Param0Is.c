/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800080BC
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x1800063E0 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z.c)
 *     ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x180006698 (--1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x180007EF0 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x18009A204 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800A9A60 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@.c)
 */

__int64 __fastcall wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        _QWORD *a1,
        int a2)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v13; // r8
  int v14; // r9d
  int v15; // [rsp+A0h] [rbp-19h] BYREF
  int v16; // [rsp+A4h] [rbp-15h] BYREF
  __int64 v17; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v18; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v19; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v20; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v21; // [rsp+C8h] [rbp+Fh] BYREF
  __int64 v22; // [rsp+D0h] [rbp+17h] BYREF
  __int64 v23; // [rsp+D8h] [rbp+1Fh] BYREF
  __int64 v24; // [rsp+E0h] [rbp+27h] BYREF
  _QWORD v25[5]; // [rsp+E8h] [rbp+2Fh] BYREF
  int v26; // [rsp+120h] [rbp+67h] BYREF
  DWORD v27; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v28; // [rsp+130h] [rbp+77h] BYREF
  __int64 v29; // [rsp+138h] [rbp+7Fh] BYREF

  if ( a2 < 0 )
  {
    v5 = a1[6];
    v6 = *(unsigned int *)(v5 + 76);
    if ( (int)v6 >= 0 || (_DWORD)v6 != *(_DWORD *)(v5 + 88) || (v7 = v5 + 80, v5 == -80) )
    {
      v10 = wil::details::static_lazy<WindowFrameLogging>::get(
              v6,
              (void (__cdecl *)())_lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v10 > 2u
        && (*(_QWORD *)(v10 + 16) & 0x200000000000LL) != 0
        && (*(_QWORD *)(v10 + 24) & 0x200000000000LL) == *(_QWORD *)(v10 + 24) )
      {
        v11 = a1[6];
        v28 = *(_QWORD *)(v11 + 56);
        v29 = *(_QWORD *)(v11 + 48);
        CurrentThreadId = GetCurrentThreadId();
        v13 = a1[6];
        v27 = CurrentThreadId;
        v26 = a2;
        v17 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v10,
          (unsigned int)&unk_1801275EB,
          v13 + 8,
          v14,
          (__int64)&v17,
          (__int64)&v26,
          (__int64)&v27,
          (__int64)&v29,
          (__int64)&v28);
      }
    }
    else
    {
      v8 = wil::details::static_lazy<WindowFrameLogging>::get(
             v6,
             (void (__cdecl *)())_lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v8 > 2u
        && (*(_QWORD *)(v8 + 16) & 0x200000000000LL) != 0
        && (*(_QWORD *)(v8 + 24) & 0x200000000000LL) == *(_QWORD *)(v8 + 24) )
      {
        v9 = a1[6];
        v18 = *(_QWORD *)(v7 + 120);
        v19 = *(_QWORD *)(v7 + 112);
        v27 = *(_DWORD *)(v7 + 104);
        v20 = *(_QWORD *)(v7 + 96);
        v21 = *(_QWORD *)(v7 + 88);
        v26 = *(_DWORD *)(v7 + 80);
        v22 = *(_QWORD *)(v7 + 72);
        LODWORD(v28) = *(_DWORD *)(v7 + 32);
        v23 = *(_QWORD *)(v7 + 24);
        LODWORD(v29) = *(_DWORD *)v7;
        v24 = *(_QWORD *)(v7 + 128);
        v15 = *(_DWORD *)(v7 + 64);
        v25[0] = *(_QWORD *)(v7 + 56);
        v16 = *(_DWORD *)(v7 + 8);
        v17 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v8,
          (unsigned int)&unk_180127666,
          v9 + 8,
          v8,
          (__int64)&v17,
          (__int64)&v16,
          (__int64)v25,
          (__int64)&v15,
          (__int64)&v24,
          (__int64)&v29,
          (__int64)&v23,
          (__int64)&v28,
          (__int64)&v22,
          (__int64)&v26,
          (__int64)&v21,
          (__int64)&v20,
          (__int64)&v27,
          (__int64)&v19,
          (__int64)&v18);
      }
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
}
