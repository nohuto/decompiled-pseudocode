/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x140038830
 * Callers:
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@WRL@Microsoft@@UEAA@XZ @ 0x14007097C (--1-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIDeviceGraphObjectCache@@UIDeviceGrap.c)
 *     ??1CDeviceGraphObjectCache@@MEAA@XZ @ 0x1400709A8 (--1CDeviceGraphObjectCache@@MEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x140070BB0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIDeviceGraphObjectCache@@UIDeviceGra.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001F280 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>(
        __int64 a1,
        volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 40);
  result = (unsigned __int64)v2 >> 63;
  if ( v2 < 0 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
             2 * v2,
             a2);
  return result;
}
