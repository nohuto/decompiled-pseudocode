/*
 * XREFs of ??$WindowTabHostThumbnailRequested@AEBIAEBI_J@WindowTabHostTelemetry@@SAXAEBI0$$QEA_J@Z @ 0x1801BA8D4
 * Callers:
 *     _lambda_bb8c74dc12fedcc2a4c0331452efef3b_::operator() @ 0x1801BB2E8 (_lambda_bb8c74dc12fedcc2a4c0331452efef3b_--operator().c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180322CB0 (-Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall WindowTabHostTelemetry::WindowTabHostThumbnailRequested<unsigned int const &,unsigned int const &,__int64>(
        int *a1,
        int *a2,
        int *a3)
{
  const struct _tlgProvider_t *v6; // rax
  int v7; // r8d
  int v8; // edx
  int v10; // [rsp+38h] [rbp-39h] BYREF
  int v11; // [rsp+3Ch] [rbp-35h] BYREF
  int v12; // [rsp+40h] [rbp-31h] BYREF
  __int64 v13; // [rsp+48h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+58h] [rbp-19h] BYREF
  int *v15; // [rsp+78h] [rbp+7h]
  __int64 v16; // [rsp+80h] [rbp+Fh]
  int *v17; // [rsp+88h] [rbp+17h]
  __int64 v18; // [rsp+90h] [rbp+1Fh]
  int *v19; // [rsp+98h] [rbp+27h]
  __int64 v20; // [rsp+A0h] [rbp+2Fh]
  __int64 *v21; // [rsp+A8h] [rbp+37h]
  __int64 v22; // [rsp+B0h] [rbp+3Fh]

  v6 = WindowManagementLogging::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    v7 = *a3;
    v8 = *a2;
    v12 = *a1;
    v21 = &v13;
    v19 = &v10;
    v17 = &v11;
    v15 = &v12;
    v10 = v7;
    v11 = v8;
    v13 = 0x1000000LL;
    v22 = 8LL;
    v20 = 4LL;
    v18 = 4LL;
    v16 = 4LL;
    LODWORD(v6) = tlgWriteTransfer_EventWriteTransfer(
                    (__int64)v6,
                    (unsigned __int8 *)dword_1806C852B,
                    0LL,
                    0LL,
                    6u,
                    &v14);
  }
  return (int)v6;
}
