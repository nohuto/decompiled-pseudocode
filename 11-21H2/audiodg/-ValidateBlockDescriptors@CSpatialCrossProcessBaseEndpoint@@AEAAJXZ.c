/*
 * XREFs of ?ValidateBlockDescriptors@CSpatialCrossProcessBaseEndpoint@@AEAAJXZ @ 0x1400930E0
 * Callers:
 *     ?GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x1400918E0 (-GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 *     ?GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x140091D28 (-GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ValidateDescriptorInSharedMemory@SpatialBlock@@QEAAJXZ @ 0x1400931E8 (-ValidateDescriptorInSharedMemory@SpatialBlock@@QEAAJXZ.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::ValidateBlockDescriptors(SpatialBlock **this)
{
  unsigned int v2; // ebx
  void (__fastcall **v3)(char *, __int64, int *); // r8
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = SpatialBlock::ValidateDescriptorInSharedMemory(this[163]);
  if ( v2 == -2005139387 )
  {
    v3 = (void (__fastcall **)(char *, __int64, int *))this[142];
    v5 = 1;
    (*v3)((char *)this + 1136, 1LL, &v5);
  }
  return v2;
}
