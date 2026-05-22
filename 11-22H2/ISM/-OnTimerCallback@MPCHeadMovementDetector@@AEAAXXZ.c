/*
 * XREFs of ?OnTimerCallback@MPCHeadMovementDetector@@AEAAXXZ @ 0x1800E0698
 * Callers:
 *     _lambda_aa0eaa0d8a3377c6799a200e781869ec_::_lambda_invoker_cdecl_ @ 0x1800DFB00 (_lambda_aa0eaa0d8a3377c6799a200e781869ec_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800C53D4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ @ 0x1800DFFA8 (-AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ.c)
 *     ?IdleTelemetry@MPCHeadMovementDetector@@AEAAXXZ @ 0x1800E0500 (-IdleTelemetry@MPCHeadMovementDetector@@AEAAXXZ.c)
 *     ?QueueIdleTimerKick@MPCHeadMovementDetector@@AEAAXXZ @ 0x1800E088C (-QueueIdleTimerKick@MPCHeadMovementDetector@@AEAAXXZ.c)
 *     ?WasThereSufficientYawMovement@MPCHeadMovementDetector@@AEAA_NXZ @ 0x1800E0918 (-WasThereSufficientYawMovement@MPCHeadMovementDetector@@AEAA_NXZ.c)
 */

void __fastcall MPCHeadMovementDetector::OnTimerCallback(MPCHeadMovementDetector *this)
{
  ULONGLONG TickCount64; // rax
  bool v3; // zf
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rdi
  int v16; // [rsp+40h] [rbp+10h] BYREF
  __int64 v17; // [rsp+48h] [rbp+18h] BYREF

  TickCount64 = GetTickCount64();
  v3 = *((_BYTE *)this + 64) == 0;
  *((_QWORD *)this + 5) = TickCount64;
  if ( !v3 )
  {
    if ( !MPCHeadMovementDetector::AccumulateYawVelocity((__int64 **)this) )
      goto LABEL_22;
    if ( MPCHeadMovementDetector::WasThereSufficientYawMovement(this) )
    {
      MPCHeadMovementDetector::QueueIdleTimerKick(this);
      RtlPublishWnfStateData(WNF_HOLO_RESET_IDLE_TIMER, 0LL, 0LL, 0LL);
      v6 = wil::details::static_lazy<ISMTracing>::get(
             v5,
             _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v6 > 4u
        && (*(_QWORD *)(v6 + 16) & 0x400000000001LL) != 0
        && (*(_QWORD *)(v6 + 24) & 0x400000000001LL) == *(_QWORD *)(v6 + 24) )
      {
        v16 = 0;
        v17 = 0x2000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v6,
          byte_180231EA7,
          v7,
          v8,
          (__int64)&v17,
          (__int64)&v16);
      }
      v9 = *((_QWORD *)this + 5);
      v10 = v9 + *((unsigned int *)this + 35);
      *((_QWORD *)this + 6) = v9;
      goto LABEL_21;
    }
    v11 = *((_QWORD *)this + 5);
    if ( *((_QWORD *)this + 16) > v11 )
    {
LABEL_22:
      MPCHeadMovementDetector::IdleTelemetry(this);
      goto LABEL_23;
    }
    if ( *((_QWORD *)this + 6) )
    {
      v15 = (v11 - *((_QWORD *)this + 6)) / 0x3E8;
      v12 = wil::details::static_lazy<ISMTracing>::get(
              v4,
              _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v12 <= 4u
        || (*(_QWORD *)(v12 + 16) & 0x400000000001LL) == 0
        || (*(_QWORD *)(v12 + 24) & 0x400000000001LL) != *(_QWORD *)(v12 + 24) )
      {
        goto LABEL_20;
      }
      v16 = v15;
    }
    else
    {
      v12 = wil::details::static_lazy<ISMTracing>::get(
              v4,
              _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v12 <= 4u
        || (*(_QWORD *)(v12 + 16) & 0x400000000001LL) == 0
        || (*(_QWORD *)(v12 + 24) & 0x400000000001LL) != *(_QWORD *)(v12 + 24) )
      {
        goto LABEL_20;
      }
      v16 = -1;
    }
    v17 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v12,
      byte_180231EA7,
      v13,
      v14,
      (__int64)&v17,
      (__int64)&v16);
LABEL_20:
    v10 = *((_QWORD *)this + 5) + *((unsigned int *)this + 35);
LABEL_21:
    *((_QWORD *)this + 16) = v10;
    goto LABEL_22;
  }
LABEL_23:
  MPCHeadMovementDetector::ScheduleNextTimerCallback(this);
}
