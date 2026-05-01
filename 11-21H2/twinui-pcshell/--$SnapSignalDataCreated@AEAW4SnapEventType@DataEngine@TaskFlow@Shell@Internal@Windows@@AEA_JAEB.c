/*
 * XREFs of ??$SnapSignalDataCreated@AEAW4SnapEventType@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEB_K@TaskFlowDataEngineTelemetry@@SAXAEAW4SnapEventType@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEB_K@Z @ 0x1803C8590
 * Callers:
 *     ?TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@23456@PEAUIApplicationView@@@Z @ 0x1803C9530 (-TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA-AV-$co.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemetry@@P6AXXZ@Z @ 0x1800A80C4 (-get@-$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemet.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

int __fastcall TaskFlowDataEngineTelemetry::SnapSignalDataCreated<enum Windows::Internal::Shell::TaskFlow::DataEngine::SnapEventType &,__int64 &,unsigned __int64 const &>(
        int *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v6; // rax
  _DWORD *v7; // rcx
  int v9; // [rsp+38h] [rbp-29h] BYREF
  __int64 v10; // [rsp+40h] [rbp-21h] BYREF
  __int64 v11; // [rsp+48h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+58h] [rbp-9h] BYREF
  int *v13; // [rsp+78h] [rbp+17h]
  __int64 v14; // [rsp+80h] [rbp+1Fh]
  __int64 *v15; // [rsp+88h] [rbp+27h]
  __int64 v16; // [rsp+90h] [rbp+2Fh]
  __int64 *v17; // [rsp+98h] [rbp+37h]
  __int64 v18; // [rsp+A0h] [rbp+3Fh]

  v6 = wil::details::static_lazy<TaskFlowDataEngineTelemetry>::get(
         (__int64)a1,
         _lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
  v7 = (_DWORD *)v6[1];
  if ( *v7 > 5u )
  {
    v10 = *a3;
    v11 = *a2;
    v9 = *a1;
    v17 = &v10;
    v15 = &v11;
    v13 = &v9;
    v18 = 8LL;
    v16 = 8LL;
    v14 = 4LL;
    LODWORD(v6) = tlgWriteTransfer_EventWriteTransfer(
                    (__int64)v7,
                    (unsigned __int8 *)dword_1806B009C,
                    0LL,
                    0LL,
                    5u,
                    &v12);
  }
  return (int)v6;
}
