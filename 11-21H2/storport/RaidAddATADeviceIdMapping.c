/*
 * XREFs of RaidAddATADeviceIdMapping @ 0x1C003EE74
 * Callers:
 *     RaidLoadATADeviceIdMappings @ 0x1C003F1EC (RaidLoadATADeviceIdMappings.c)
 *     ATAShimGetMsftId @ 0x1C0064EF0 (ATAShimGetMsftId.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     RtlStringCbCopyA @ 0x1C003F91C (RtlStringCbCopyA.c)
 */

__int64 __fastcall RaidAddATADeviceIdMapping(NTSTRSAFE_PCSTR pszSrc, int a2, struct _STRING *a3)
{
  unsigned int v3; // edi
  struct _STRING *Pool; // rbx
  __int64 v8; // rdx
  size_t v9; // rsi
  char *v10; // rax
  char *Buffer; // rcx
  PCSZ v12; // r10
  char *Lock; // rax

  v3 = 0;
  Pool = (struct _STRING *)RaidAllocatePool(64LL, 48LL, 1213423954LL, 0LL);
  if ( !Pool )
    return (unsigned int)-1073741670;
  v8 = (unsigned int)(a2 + 1);
  v9 = v8;
  v10 = (char *)RaidAllocatePool(64LL, v8, 1213423954LL, 0LL);
  if ( !v10 )
  {
    Buffer = Pool[1].Buffer;
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0x48536152u);
    ExFreePoolWithTag(Pool, 0x48536152u);
    return (unsigned int)-1073741670;
  }
  RtlStringCbCopyA(v10, v9, pszSrc);
  Pool->Buffer = (char *)Pool;
  *(_QWORD *)&Pool->Length = Pool;
  RtlInitAnsiString(Pool + 1, v12);
  Pool[2] = *a3;
  Lock = (char *)WPP_MAIN_CB.DeviceQueue.Lock;
  if ( *(struct _DEVICE_OBJECT **)WPP_MAIN_CB.DeviceQueue.Lock != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink )
    __fastfail(3u);
  *(_QWORD *)&Pool->Length = &WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
  Pool->Buffer = Lock;
  *(_QWORD *)Lock = Pool;
  WPP_MAIN_CB.DeviceQueue.Lock = (unsigned __int64)Pool;
  return v3;
}
