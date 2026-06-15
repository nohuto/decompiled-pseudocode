/*
 * XREFs of ?CreateBridgeStream@CSharedStreamGroupProxy@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroupProxy@@PEAUSystemAudioStream@@@Z @ 0x1800F8760
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800464AC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _lambda_1b3cab1c1883161d393bb2a497225922_::operator() @ 0x1800F7948 (_lambda_1b3cab1c1883161d393bb2a497225922_--operator().c)
 */

__int64 __fastcall CSharedStreamGroupProxy::CreateBridgeStream(
        unsigned __int64 this,
        struct BRIDGE_STREAM_DESCRIPTOR *a2,
        struct IStreamGroupProxy *a3,
        struct SystemAudioStream *a4)
{
  char *v4; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  _DWORD *v8; // r10
  unsigned int v10; // [rsp+38h] [rbp-59h] BYREF
  struct IStreamGroupProxy *v11; // [rsp+40h] [rbp-51h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-49h] BYREF
  _QWORD *v13[5]; // [rsp+50h] [rbp-41h] BYREF
  char v14[32]; // [rsp+78h] [rbp-19h] BYREF
  int *v15; // [rsp+98h] [rbp+7h]
  __int64 v16; // [rsp+A0h] [rbp+Fh]
  unsigned __int64 *v17; // [rsp+A8h] [rbp+17h]
  __int64 v18; // [rsp+B0h] [rbp+1Fh]
  struct IStreamGroupProxy **v19; // [rsp+B8h] [rbp+27h]
  __int64 v20; // [rsp+C0h] [rbp+2Fh]
  struct BRIDGE_STREAM_DESCRIPTOR *v21; // [rsp+100h] [rbp+6Fh] BYREF
  struct IStreamGroupProxy *v22; // [rsp+108h] [rbp+77h] BYREF
  struct SystemAudioStream *v23; // [rsp+110h] [rbp+7Fh] BYREF

  v23 = a4;
  v22 = a3;
  v21 = a2;
  v4 = (char *)(this - 8);
  v13[1] = (_QWORD *)(this - 8);
  v13[0] = &v22;
  v13[2] = &v21;
  v13[3] = &v23;
  v6 = lambda_1b3cab1c1883161d393bb2a497225922_::operator()(v13);
  v8 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                   v7,
                   _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v8 > 4u )
  {
    v19 = &v11;
    v11 = v22;
    v17 = &v12;
    v10 = v6;
    v15 = (int *)&v10;
    v20 = 8LL;
    v12 = this & -(__int64)(v4 != 0LL);
    v18 = 8LL;
    v16 = 4LL;
    tlgWriteTransfer_EtwEventWriteTransfer((__int64)v8, byte_180189D9C, 0LL, 0LL, 5, (__int64)v14);
  }
  return v6;
}
