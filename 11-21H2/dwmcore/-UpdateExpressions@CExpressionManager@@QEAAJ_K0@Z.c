/*
 * XREFs of ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x1800506EC
 * Callers:
 *     ?UpdateExpressions@CComposition@@QEAAXXZ @ 0x180050684 (-UpdateExpressions@CComposition@@QEAAXXZ.c)
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18007D2F8 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180025194 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18004A0F8 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?NotifyInteractionTrackerExpressionProcessingComplete@CExpressionManager@@QEAAXXZ @ 0x180050824 (-NotifyInteractionTrackerExpressionProcessingComplete@CExpressionManager@@QEAAXXZ.c)
 *     ?FlushQueuedSuspendAnimations@CExpressionManager@@AEAAXXZ @ 0x180050860 (-FlushQueuedSuspendAnimations@CExpressionManager@@AEAAXXZ.c)
 *     ?FlushQueuedStateChanges@CExpressionManager@@AEAAXXZ @ 0x1800508CC (-FlushQueuedStateChanges@CExpressionManager@@AEAAXXZ.c)
 *     ?UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z @ 0x180050990 (-UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ?MustUpdateExpressions@CExpressionManager@@QEBA_NXZ @ 0x180081324 (-MustUpdateExpressions@CExpressionManager@@QEBA_NXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800DC2C8 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapperByVal@$00@@3333333@Z @ 0x1801FD550 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapperByVal@$00@@U1@.c)
 *     ?FlushPendingTriggeredAnimations@CExpressionManager@@AEAAX_N@Z @ 0x1801FDC0C (-FlushPendingTriggeredAnimations@CExpressionManager@@AEAAX_N@Z.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x1801FDC90 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x1801FDDFC (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?GetDurationAverage@CExpressionPerformanceCounter@@QEAANW4ExpressionPerformanceLabel@@@Z @ 0x180251FE0 (-GetDurationAverage@CExpressionPerformanceCounter@@QEAANW4ExpressionPerformanceLabel@@@Z.c)
 *     ?Reset@CExpressionPerformanceCounter@@QEAAXXZ @ 0x180252014 (-Reset@CExpressionPerformanceCounter@@QEAAXXZ.c)
 */

__int64 __fastcall CExpressionManager::UpdateExpressions(CExpressionManager *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  char v8; // dl
  bool v9; // si
  char v10; // dl
  char v11; // dl
  __int64 v13; // rcx
  int Elapsed; // eax
  double v15; // xmm2_8
  double v16; // xmm3_8
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  double DurationAverage; // xmm0_8
  __int64 v23; // rax
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  bool v27[8]; // [rsp+98h] [rbp-80h] BYREF
  __int64 i; // [rsp+A0h] [rbp-78h] BYREF
  int v29; // [rsp+A8h] [rbp-70h] BYREF
  int v30; // [rsp+ACh] [rbp-6Ch] BYREF
  int v31; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v32; // [rsp+B8h] [rbp-60h] BYREF
  double v33; // [rsp+C0h] [rbp-58h] BYREF
  double v34; // [rsp+C8h] [rbp-50h] BYREF
  double v35; // [rsp+D0h] [rbp-48h] BYREF
  double v36; // [rsp+D8h] [rbp-40h] BYREF
  double v37; // [rsp+E0h] [rbp-38h] BYREF
  double v38; // [rsp+E8h] [rbp-30h] BYREF
  double v39; // [rsp+F0h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+F8h] [rbp-20h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  for ( i = 0LL; (unsigned int)v4 < *((_DWORD *)this + 110); v4 = (unsigned int)(v4 + 1) )
    CBaseExpression::TryRegisterWithExpressionManager(*(CBaseExpression **)(*((_QWORD *)this + 52) + 8 * v4));
  *((_DWORD *)this + 110) = 0;
  DynArrayImpl<1>::ShrinkToSize((char *)this + 416, 8LL);
  v8 = *((_BYTE *)this + 448) & 0xF3 | (2 * (*((_BYTE *)this + 448) & 4));
  *((_BYTE *)this + 448) = v8;
  v9 = (v8 & 8) != 0;
  if ( CExpressionManager::MustUpdateExpressions(this) )
  {
    v11 = v10 & 0xFD;
    *((_BYTE *)this + 448) = v11;
    if ( *((_DWORD *)this + 40) || CCommonRegistryData::LogExpressionPerfStats )
    {
      CExpressionPerformanceCounter::Reset((CExpressionManager *)((char *)this + 88));
      QpcStopwatch::Start((QpcStopwatch *)&i);
      v11 = *((_BYTE *)this + 448);
      v3 = i;
    }
    *((_QWORD *)this + 2) = a2;
    *((_BYTE *)this + 448) = v11 | 1;
    *((_QWORD *)this + 3) = a3;
    CExpressionManager::UpdateExpressionsWorker(this, 0);
    if ( *((_DWORD *)this + 110) )
    {
      CExpressionManager::FlushPendingTriggeredAnimations(this, 1);
      *((_BYTE *)this + 448) = *((_BYTE *)this + 448) & 0xF3 | (2 * (*((_BYTE *)this + 448) & 4));
      if ( (unsigned int)dword_1803D0EF0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1803D0EF0, 4LL) )
        tlgWriteTransfer_EventWriteTransfer(v13, (unsigned __int8 *)dword_180370D9A, 0LL, 0LL, 2u, &v40);
      CExpressionManager::UpdateExpressionsWorker(this, 1);
    }
    *((_BYTE *)this + 448) &= ~1u;
    CExpressionManager::FlushQueuedStateChanges(this);
    CExpressionManager::FlushQueuedSuspendAnimations(this);
    if ( v3 )
    {
      Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&i);
      v15 = (double)(int)g_qpcFrequency.LowPart / 1000000.0;
      v16 = (double)Elapsed;
      if ( (unsigned int)dword_1803D0EF0 > 4 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1803D0EF0, 1LL) )
        {
          v32 = a3;
          v33 = CExpressionPerformanceCounter::GetDurationAverage((char *)this + 88, 5LL) / v15;
          v34 = CExpressionPerformanceCounter::GetDurationAverage(v17, 4LL) / v15;
          v35 = CExpressionPerformanceCounter::GetDurationAverage(v18, 3LL) / v15;
          v36 = CExpressionPerformanceCounter::GetDurationAverage(v19, 2LL) / v15;
          v37 = CExpressionPerformanceCounter::GetDurationAverage(v20, 1LL) / v15;
          DurationAverage = CExpressionPerformanceCounter::GetDurationAverage(v21, 0LL);
          v29 = *((_DWORD *)this + 80);
          v23 = *((unsigned int *)this + 41) + 6LL;
          v27[0] = v9;
          v38 = DurationAverage / v15;
          v30 = *((_DWORD *)this + 8 * v23);
          v31 = *((_DWORD *)this + 114);
          LODWORD(i) = *((_DWORD *)this + 113);
          v39 = v16 / v15;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v24,
            (unsigned int)&unk_180370C19,
            v25,
            v26,
            (__int64)&v39,
            (__int64)&i,
            (__int64)&v31,
            (__int64)&v30,
            (__int64)&v29,
            (__int64)v27,
            (__int64)&v38,
            (__int64)&v37,
            (__int64)&v36,
            (__int64)&v35,
            (__int64)&v34,
            (__int64)&v33,
            (__int64)&v32);
        }
      }
    }
  }
  CExpressionManager::NotifyInteractionTrackerExpressionProcessingComplete(this);
  return 0LL;
}
