/*
 * XREFs of RaidPreInitializePerfOpts @ 0x1C003B5C8
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C0038568 (RaidAdapterStartMiniport.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

__int64 __fastcall RaidPreInitializePerfOpts(__int64 a1)
{
  void *Data; // rbx
  unsigned int v2; // edi
  __int64 ActiveGroupCount; // rbp
  __int64 *v5; // rbx
  unsigned __int16 i; // r8
  unsigned int j; // r9d
  __int64 v8; // rdx
  ULONG Type; // [rsp+40h] [rbp-48h] BYREF
  ULONG RequiredSize; // [rsp+44h] [rbp-44h] BYREF
  DEVPROPKEY PropertyKey; // [rsp+48h] [rbp-40h] BYREF

  Data = (void *)(a1 + 4528);
  v2 = 0;
  PropertyKey = DEVPKEY_Device_Numa_Proximity_Domain;
  Type = 0;
  *(_DWORD *)(a1 + 4528) = 0;
  ActiveGroupCount = KeQueryActiveGroupCount();
  RequiredSize = 4;
  IoGetDevicePropertyData(*(PDEVICE_OBJECT *)(a1 + 32), &PropertyKey, 0, 0, 4u, Data, &RequiredSize, &Type);
  if ( *(_BYTE *)(a1 + 4241) == 1 )
  {
    v5 = (__int64 *)(a1 + 4552);
    if ( *(char *)(a1 + 110) < 0 && *v5
      || (*v5 = RaidAllocatePool(64LL, ActiveGroupCount << 6, 1917083986LL, *(_QWORD *)(a1 + 8)), *(_QWORD *)(a1 + 4552)) )
    {
      for ( i = 0; i < (unsigned __int16)ActiveGroupCount; ++i )
      {
        for ( j = 0; j < 0x40; ++j )
        {
          v8 = (i << 6) + j;
          *(_BYTE *)(v8 + *v5) = -1;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
