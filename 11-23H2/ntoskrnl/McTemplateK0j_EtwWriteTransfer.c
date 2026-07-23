/*
 * XREFs of McTemplateK0j_EtwWriteTransfer @ 0x1403C4448
 * Callers:
 *     CcInitializeVolumeCacheMap @ 0x14032F2C4 (CcInitializeVolumeCacheMap.c)
 *     PpCheckInDriverDatabase @ 0x140692C14 (PpCheckInDriverDatabase.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403C44A0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0j_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE v5[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  v8 = 0;
  v6 = a4;
  v7 = 16;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, 0LL, 2LL, v5);
}
