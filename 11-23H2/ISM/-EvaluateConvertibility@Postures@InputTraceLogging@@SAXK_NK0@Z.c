/*
 * XREFs of ?EvaluateConvertibility@Postures@InputTraceLogging@@SAXK_NK0@Z @ 0x18005C614
 * Callers:
 *     ?IsDeviceConvertible@DevicePostureHelpers@@YA_NXZ @ 0x18005D010 (-IsDeviceConvertible@DevicePostureHelpers@@YA_NXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AC18 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800A2800 (-Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall InputTraceLogging::Postures::EvaluateConvertibility(int a1, char a2, int a3, char a4)
{
  const struct _tlgProvider_t *v8; // rax
  char v9; // [rsp+38h] [rbp-29h] BYREF
  char v10; // [rsp+39h] [rbp-28h] BYREF
  int v11; // [rsp+3Ch] [rbp-25h] BYREF
  int v12; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+48h] [rbp-19h] BYREF
  int *v14; // [rsp+68h] [rbp+7h]
  __int64 v15; // [rsp+70h] [rbp+Fh]
  char *v16; // [rsp+78h] [rbp+17h]
  __int64 v17; // [rsp+80h] [rbp+1Fh]
  int *v18; // [rsp+88h] [rbp+27h]
  __int64 v19; // [rsp+90h] [rbp+2Fh]
  char *v20; // [rsp+98h] [rbp+37h]
  __int64 v21; // [rsp+A0h] [rbp+3Fh]

  v8 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v8 > 4u && (*((_BYTE *)v8 + 16) & 2) != 0 && (*((_QWORD *)v8 + 3) & 2LL) == *((_QWORD *)v8 + 3) )
  {
    v19 = 4LL;
    v20 = &v9;
    v15 = 4LL;
    v18 = &v11;
    v9 = a4;
    v16 = &v10;
    v11 = a3;
    v14 = &v12;
    v10 = a2;
    v12 = a1;
    v21 = 1LL;
    v17 = 1LL;
    tlgWriteTransfer_EventWriteTransfer((__int64)v8, (unsigned __int8 *)dword_180225B04, 0LL, 0LL, 6u, &v13);
  }
}
