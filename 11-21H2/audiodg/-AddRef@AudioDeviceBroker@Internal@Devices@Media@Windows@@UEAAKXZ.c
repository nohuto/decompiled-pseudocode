/*
 * XREFs of ?AddRef@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAKXZ @ 0x14002DB00
 * Callers:
 *     ?AddRef@AudioDeviceModulesManager@Devices@Media@Windows@@W7EAAKXZ @ 0x140034510 (-AddRef@AudioDeviceModulesManager@Devices@Media@Windows@@W7EAAKXZ.c)
 *     ?AddRef@AudioDeviceModulesManager@Devices@Media@Windows@@WBA@EAAKXZ @ 0x140034530 (-AddRef@AudioDeviceModulesManager@Devices@Media@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x140024740 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::AddRef(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 7);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return (unsigned int)Microsoft::WRL::Details::SafeUnknownIncrementReference(
                         (Microsoft::WRL::Details *)(2 * v1 + 16),
                         (volatile int *)((unsigned __int64)v1 >> 63));
}
