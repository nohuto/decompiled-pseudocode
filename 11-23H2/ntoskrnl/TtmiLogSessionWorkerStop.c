/*
 * XREFs of TtmiLogSessionWorkerStop @ 0x1409AA198
 * Callers:
 *     TtmpSessionWorker @ 0x1409A5B30 (TtmpSessionWorker.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

void TtmiLogSessionWorkerStop()
{
  int v0; // r9d
  int v1; // r10d
  int v2; // [rsp+30h] [rbp-68h] BYREF
  int v3; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+40h] [rbp-58h] BYREF
  int *v5; // [rsp+60h] [rbp-38h]
  int v6; // [rsp+68h] [rbp-30h]
  int v7; // [rsp+6Ch] [rbp-2Ch]
  int *v8; // [rsp+70h] [rbp-28h]
  int v9; // [rsp+78h] [rbp-20h]
  int v10; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_140D53918 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140D53918, 1LL) )
    {
      v7 = 0;
      v10 = 0;
      v5 = &v2;
      v6 = 4;
      v8 = &v3;
      v3 = v0;
      v9 = 4;
      v2 = v1;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140D53918,
        (unsigned __int8 *)&dword_140033F9C,
        0LL,
        0LL,
        4u,
        &v4);
    }
  }
}
