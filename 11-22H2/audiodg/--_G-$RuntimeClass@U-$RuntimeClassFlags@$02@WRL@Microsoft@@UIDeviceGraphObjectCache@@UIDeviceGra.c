/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x140070C00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x140038870 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache.c)
 */

void *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::`scalar deleting destructor'(
        void *Block,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>(
    (__int64)Block,
    a2);
  if ( (v2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
