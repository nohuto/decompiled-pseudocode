/*
 * XREFs of McTemplateU0sqq_EventWriteTransfer @ 0x1805E4394
 * Callers:
 *     ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x1800B9288 (-Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18006B42C (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0sqq_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  __int64 v5; // rax
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-50h] BYREF
  const char *v8; // [rsp+40h] [rbp-40h]
  int v9; // [rsp+48h] [rbp-38h]
  int v10; // [rsp+4Ch] [rbp-34h]
  int *v11; // [rsp+50h] [rbp-30h]
  __int64 v12; // [rsp+58h] [rbp-28h]
  char *v13; // [rsp+60h] [rbp-20h]
  __int64 v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+A8h] [rbp+28h] BYREF

  v15 = a4;
  v5 = -1LL;
  do
    ++v5;
  while ( aSharedmessagep[v5] );
  v8 = "SharedMessagePortRefPtr::Initialize";
  v9 = v5 + 1;
  v10 = 0;
  v12 = 4LL;
  v11 = &v15;
  v14 = 4LL;
  v13 = &a5;
  return McGenEventWrite_EventWriteTransfer(MICROSOFT_WINDOWSPHONE_INPUT_Context, &EhmMessage, a3, 4u, &v7);
}
