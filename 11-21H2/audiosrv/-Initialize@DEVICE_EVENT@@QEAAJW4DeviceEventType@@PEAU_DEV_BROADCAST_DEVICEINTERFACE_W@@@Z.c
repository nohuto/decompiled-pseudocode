/*
 * XREFs of ?Initialize@DEVICE_EVENT@@QEAAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x180150B8C
 * Callers:
 *     ?PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x18015100C (-PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005F02C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 */

__int64 __fastcall DEVICE_EVENT::Initialize(__int64 a1, int a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  void *v6; // rax
  void *v7; // rcx

  v3 = 0;
  *(_DWORD *)(a1 + 8) = a2;
  if ( a3 )
  {
    v6 = operator new[](*a3, (const struct std::nothrow_t *)&std::nothrow);
    v7 = *(void **)(a1 + 16);
    *(_QWORD *)(a1 + 16) = v6;
    if ( v7 )
    {
      operator delete(v7);
      v6 = *(void **)(a1 + 16);
    }
    if ( v6 )
      memcpy_0(v6, a3, *a3);
    else
      return (unsigned int)-2147024882;
  }
  return v3;
}
