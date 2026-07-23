/*
 * XREFs of EtwWriteEndScenario @ 0x14081CDA0
 * Callers:
 *     sub_1403D2178 @ 0x1403D2178 (sub_1403D2178.c)
 *     sub_1407FE344 @ 0x1407FE344 (sub_1407FE344.c)
 *     sub_140A6AEC0 @ 0x140A6AEC0 (sub_140A6AEC0.c)
 * Callees:
 *     sub_14025A19C @ 0x14025A19C (sub_14025A19C.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406E6A98 @ 0x1406E6A98 (sub_1406E6A98.c)
 */

NTSTATUS __fastcall EtwWriteEndScenario(
        PVOID *RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        LPCGUID ActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  NTSTATUS result; // eax
  __int128 v10; // [rsp+30h] [rbp-48h] BYREF

  v10 = 0LL;
  if ( !EventDescriptor || !ActivityId )
    return -1073741811;
  if ( !EtwEventEnabled((REGHANDLE)RegHandle, EventDescriptor) )
    return -1073741816;
  result = sub_14025A19C(RegHandle, 0, &v10);
  if ( result >= 0 )
  {
    sub_1406E6A98((__int64)&v10, (__int64)ActivityId, &EventDescriptor->Id, 11);
    return EtwWrite((REGHANDLE)RegHandle, EventDescriptor, ActivityId, UserDataCount, UserData);
  }
  return result;
}
