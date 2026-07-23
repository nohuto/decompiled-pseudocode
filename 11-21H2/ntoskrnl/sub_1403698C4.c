/*
 * XREFs of sub_1403698C4 @ 0x1403698C4
 * Callers:
 *     PoRegisterSystemState @ 0x140201CD0 (PoRegisterSystemState.c)
 *     sub_1407EDD60 @ 0x1407EDD60 (sub_1407EDD60.c)
 * Callees:
 *     PoClearPowerRequest @ 0x140369EA0 (PoClearPowerRequest.c)
 *     PoSetPowerRequest @ 0x140369FB0 (PoSetPowerRequest.c)
 *     sub_14036A48C @ 0x14036A48C (sub_14036A48C.c)
 *     sub_14036AAC4 @ 0x14036AAC4 (sub_14036AAC4.c)
 *     sub_1405C6B2C @ 0x1405C6B2C (sub_1405C6B2C.c)
 *     sub_1405C6BA4 @ 0x1405C6BA4 (sub_1405C6BA4.c)
 */

int __fastcall sub_1403698C4(PVOID Object, char a2, char a3)
{
  int v3; // ebx
  int result; // eax
  int v8; // esi
  int v9; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (a3 & 1) != 0 )
  {
    if ( (a2 & 1) != 0 )
      PoSetPowerRequest(Object, PowerRequestSystemRequired);
    else
      PoClearPowerRequest(Object, PowerRequestSystemRequired);
  }
  else if ( (a2 & 1) != 0 )
  {
    v3 = 2;
  }
  result = a2 & 2;
  if ( (a3 & 2) != 0 )
  {
    if ( (a2 & 2) != 0 )
      result = PoSetPowerRequest(Object, PowerRequestDisplayRequired);
    else
      result = PoClearPowerRequest(Object, PowerRequestDisplayRequired);
  }
  else if ( (a2 & 2) != 0 )
  {
    v3 |= 1u;
  }
  v8 = a2 & 0x40;
  if ( (a3 & 0x40) != 0 )
  {
    if ( v8 )
      result = PoSetPowerRequest(Object, PowerRequestAwayModeRequired);
    else
      result = PoClearPowerRequest(Object, PowerRequestAwayModeRequired);
  }
  else if ( v8 )
  {
    v3 |= 4u;
  }
  if ( v3 )
  {
    sub_1405C6B2C(&LockHandle);
    v9 = *((_DWORD *)Object + 7);
    if ( (v9 & v3) != 0 )
    {
      *((_DWORD *)Object + 7) = v9 & ~v3;
      sub_14036A48C(Object);
      sub_14036AAC4(&unk_140C24440, 0LL);
    }
    return sub_1405C6BA4(&LockHandle);
  }
  return result;
}
