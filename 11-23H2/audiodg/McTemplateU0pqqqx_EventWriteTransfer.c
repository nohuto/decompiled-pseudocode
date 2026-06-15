/*
 * XREFs of McTemplateU0pqqqx_EventWriteTransfer @ 0x14003AF64
 * Callers:
 *     ?AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x14003A3D0 (-AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRE.c)
 * Callees:
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x14003977A (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0pqqqx_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-31h] BYREF
  __int64 *v9; // [rsp+40h] [rbp-21h]
  __int64 v10; // [rsp+48h] [rbp-19h]
  int *v11; // [rsp+50h] [rbp-11h]
  __int64 v12; // [rsp+58h] [rbp-9h]
  char *v13; // [rsp+60h] [rbp-1h]
  __int64 v14; // [rsp+68h] [rbp+7h]
  char *v15; // [rsp+70h] [rbp+Fh]
  __int64 v16; // [rsp+78h] [rbp+17h]
  char *v17; // [rsp+80h] [rbp+1Fh]
  __int64 v18; // [rsp+88h] [rbp+27h]
  __int64 v19; // [rsp+C0h] [rbp+5Fh] BYREF
  int v20; // [rsp+C8h] [rbp+67h] BYREF

  v20 = a4;
  v19 = a3;
  v10 = 8LL;
  v9 = &v19;
  v12 = 4LL;
  v11 = &v20;
  v14 = 4LL;
  v13 = &a5;
  v15 = &a6;
  v17 = &a7;
  v16 = 4LL;
  v18 = 8LL;
  return McGenEventWrite_EventWriteTransfer(a1, &AudioCore_CPCapture_Add_Packet, a3, 6u, &v8);
}
