/*
 * XREFs of AlpcpLogUnwait @ 0x140967C2C
 * Callers:
 *     AlpcpWaitForSingleObject @ 0x1402F5DDC (AlpcpWaitForSingleObject.c)
 *     AlpcpSignalAndWait @ 0x1402F63D0 (AlpcpSignalAndWait.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x140967908 (AlpcpInvokeLogCallbacks.c)
 */

__int64 __fastcall AlpcpLogUnwait(int a1)
{
  __int128 v1; // xmm0
  __int128 v3; // [rsp+20h] [rbp-38h] BYREF
  int v4; // [rsp+30h] [rbp-28h]
  int v5; // [rsp+34h] [rbp-24h]
  int v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+3Ch] [rbp-1Ch]

  v5 = 0;
  v7 = 0;
  v1 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
  v6 = a1;
  v4 = 5;
  v3 = v1;
  return AlpcpInvokeLogCallbacks((__int64)&v3, 0x20u);
}
