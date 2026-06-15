/*
 * XREFs of McTemplateU0pqxxxxx_EventWriteTransfer @ 0x14008C6A8
 * Callers:
 *     ?AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x14008B940 (-AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRE.c)
 * Callees:
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x14006E568 (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0pqxxxxx_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9)
{
  int v10; // [rsp+30h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-61h] BYREF
  __int64 *v12; // [rsp+50h] [rbp-51h]
  __int64 v13; // [rsp+58h] [rbp-49h]
  int *v14; // [rsp+60h] [rbp-41h]
  __int64 v15; // [rsp+68h] [rbp-39h]
  char *v16; // [rsp+70h] [rbp-31h]
  __int64 v17; // [rsp+78h] [rbp-29h]
  char *v18; // [rsp+80h] [rbp-21h]
  __int64 v19; // [rsp+88h] [rbp-19h]
  char *v20; // [rsp+90h] [rbp-11h]
  __int64 v21; // [rsp+98h] [rbp-9h]
  char *v22; // [rsp+A0h] [rbp-1h]
  __int64 v23; // [rsp+A8h] [rbp+7h]
  char *v24; // [rsp+B0h] [rbp+Fh]
  __int64 v25; // [rsp+B8h] [rbp+17h]
  __int64 v26; // [rsp+F0h] [rbp+4Fh] BYREF

  v26 = a3;
  v10 = 2;
  v13 = 8LL;
  v12 = &v26;
  v15 = 4LL;
  v14 = &v10;
  v16 = &a5;
  v18 = &a6;
  v20 = &a7;
  v22 = &a8;
  v24 = &a9;
  v17 = 8LL;
  v19 = 8LL;
  v21 = 8LL;
  v23 = 8LL;
  v25 = 8LL;
  return McGenEventWrite_EventWriteTransfer(a1, &AudioCore_AETimestamp, a3, 8u, &v11);
}
