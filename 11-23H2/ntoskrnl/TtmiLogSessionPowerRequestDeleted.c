/*
 * XREFs of TtmiLogSessionPowerRequestDeleted @ 0x1409A9D1C
 * Callers:
 *     TtmNotifySessionPowerRequestDeleted @ 0x1409A4758 (TtmNotifySessionPowerRequestDeleted.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

void TtmiLogSessionPowerRequestDeleted()
{
  __int64 v0; // rdx
  char v1; // r9
  int v2; // r10d
  int v3; // r11d
  char v4; // [rsp+30h] [rbp-19h] BYREF
  int v5; // [rsp+34h] [rbp-15h] BYREF
  int v6; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-9h] BYREF
  int *v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  int *v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  char *v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_140D53918 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140D53918, 1LL) )
    {
      v4 = v1;
      v8 = &v5;
      v13 = v0;
      v10 = &v6;
      v5 = v3;
      v12 = &v4;
      v9 = 4LL;
      v6 = v2;
      v11 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140D53918, (unsigned __int8 *)byte_1400337FF, 0LL, 0LL, 5u, &v7);
    }
  }
}
