/*
 * XREFs of McTemplateU0qd_EventWriteTransfer @ 0x18075FB0C
 * Callers:
 *     ?UpdateForRemovedItemsAsNecessary@CPinnedList@@UEAAJXZ @ 0x18075CBA0 (-UpdateForRemovedItemsAsNecessary@CPinnedList@@UEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180176D28 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0qd_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-40h] BYREF
  int *v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+54h] [rbp-24h]
  int *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]
  int v12; // [rsp+90h] [rbp+18h] BYREF

  v12 = a3;
  v4 = 2;
  v6 = &v12;
  v8 = 0;
  v7 = 4;
  v9 = &v4;
  v11 = 0;
  v10 = 4;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Shell_Core_Provider_Context,
           (const EVENT_DESCRIPTOR *)"T&",
           a3,
           3u,
           &v5);
}
