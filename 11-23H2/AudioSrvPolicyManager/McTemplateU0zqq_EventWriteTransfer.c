/*
 * XREFs of McTemplateU0zqq_EventWriteTransfer @ 0x18003AF7C
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180005E20 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000CCE0 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     wil::details::lambda_call__lambda_74057df9902ed01acca6389457a5e2ac___::_lambda_call__lambda_74057df9902ed01acca6389457a5e2ac___ @ 0x1800152C8 (wil--details--lambda_call__lambda_74057df9902ed01acca6389457a5e2ac___--_lambda_call__lambda_7405.c)
 *     wil::details::lambda_call__lambda_fff9119fb840d357cf7d24802c9bd62a___::_lambda_call__lambda_fff9119fb840d357cf7d24802c9bd62a___ @ 0x18003ACAC (wil--details--lambda_call__lambda_fff9119fb840d357cf7d24802c9bd62a___--_lambda_call__lambda_fff9.c)
 * Callees:
 *     __security_check_cookie @ 0x1800165A0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18002B8D8 (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0zqq_EventWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const wchar_t *a3,
        int a4,
        char a5)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-50h] BYREF
  const wchar_t *v9; // [rsp+40h] [rbp-40h]
  int v10; // [rsp+48h] [rbp-38h]
  int v11; // [rsp+4Ch] [rbp-34h]
  int *v12; // [rsp+50h] [rbp-30h]
  __int64 v13; // [rsp+58h] [rbp-28h]
  char *v14; // [rsp+60h] [rbp-20h]
  __int64 v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+A8h] [rbp+28h] BYREF

  v16 = a4;
  if ( a3 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a3[v5] );
    v6 = (unsigned int)(2 * v5 + 2);
  }
  else
  {
    v6 = 10LL;
  }
  v10 = v6;
  v11 = 0;
  v13 = 4LL;
  if ( !a3 )
    a3 = L"NULL";
  v15 = 4LL;
  v9 = a3;
  v12 = &v16;
  v14 = &a5;
  return McGenEventWrite_EventWriteTransfer(v6, a2, (__int64)a3, 4u, &v8);
}
