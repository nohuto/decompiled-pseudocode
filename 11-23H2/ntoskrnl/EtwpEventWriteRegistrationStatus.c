/*
 * XREFs of EtwpEventWriteRegistrationStatus @ 0x1409E3BCC
 * Callers:
 *     EtwpSetProviderTraitsUm @ 0x1406BE3D0 (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsKm @ 0x1407D7448 (EtwpSetProviderTraitsKm.c)
 * Callees:
 *     EtwWrite @ 0x140257960 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpEventWriteRegistrationStatus(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]

  v6.Ptr = *(_QWORD *)(a4 + 32) + 40LL;
  v6.Reserved = 0;
  v6.Size = 16;
  v7 = &a5;
  v9 = 0;
  v8 = 4;
  return EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_SET_TRAITS_FAILED, 0LL, 2u, &v6);
}
