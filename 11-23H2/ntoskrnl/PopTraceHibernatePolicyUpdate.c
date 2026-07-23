/*
 * XREFs of PopTraceHibernatePolicyUpdate @ 0x1408016E4
 * Callers:
 *     PoInitHiberServices @ 0x140801DB8 (PoInitHiberServices.c)
 *     PopWnfHibernatePolicyCallback @ 0x140989610 (PopWnfHibernatePolicyCallback.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

void PopTraceHibernatePolicyUpdate()
{
  char v0; // r9
  int v1; // r10d
  char v2; // [rsp+30h] [rbp-19h] BYREF
  int v3; // [rsp+34h] [rbp-15h] BYREF
  __int64 v4; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-9h] BYREF
  int *v6; // [rsp+60h] [rbp+17h]
  __int64 v7; // [rsp+68h] [rbp+1Fh]
  char *v8; // [rsp+70h] [rbp+27h]
  __int64 v9; // [rsp+78h] [rbp+2Fh]
  __int64 *v10; // [rsp+80h] [rbp+37h]
  __int64 v11; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_140C03950 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C03950, 0x400000000000LL) )
    {
      v2 = v0;
      v6 = &v3;
      v3 = v1;
      v8 = &v2;
      v7 = 4LL;
      v10 = &v4;
      v9 = 1LL;
      v4 = 0x1000000LL;
      v11 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03950, (unsigned __int8 *)byte_14002E191, 0LL, 0LL, 5u, &v5);
    }
  }
}
