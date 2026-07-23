/*
 * XREFs of SmKmEtwLogStoreStats @ 0x1409D8A84
 * Callers:
 *     SmKmStoreDelete @ 0x1407B75C8 (SmKmStoreDelete.c)
 *     SmEtwEnableCallback @ 0x140841A50 (SmEtwEnableCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x1402582A0 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ?SmStEtwFillStoreStatsEvent@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z @ 0x1405CD58C (-SmStEtwFillStoreStatsEvent@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z.c)
 */

NTSTATUS __fastcall SmKmEtwLogStoreStats(REGHANDLE *a1, __int64 a2)
{
  NTSTATUS result; // eax
  PEVENT_DATA_DESCRIPTOR UserData[2]; // [rsp+40h] [rbp-C0h] BYREF
  ULONG UserDataCount; // [rsp+50h] [rbp-B0h]
  int v7; // [rsp+54h] [rbp-ACh]
  int v8; // [rsp+58h] [rbp-A8h]
  int v9; // [rsp+5Ch] [rbp-A4h]
  _BYTE v10[1360]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v11[3]; // [rsp+5B0h] [rbp+4B0h] BYREF

  memset(v11, 0, sizeof(v11));
  memset(v10, 0, sizeof(v10));
  UserDataCount = 0;
  v8 = 0;
  UserData[0] = (PEVENT_DATA_DESCRIPTOR)v11;
  v7 = 3;
  UserData[1] = (PEVENT_DATA_DESCRIPTOR)v10;
  v9 = 1360;
  result = SMKM_STORE<SM_TRAITS>::SmStEtwFillStoreStatsEvent(a2, (__int64)UserData);
  if ( result )
    return EtwWriteEx(*a1, &SmEventStoreIoStats, 0LL, 0, 0LL, 0LL, UserDataCount, UserData[0]);
  return result;
}
