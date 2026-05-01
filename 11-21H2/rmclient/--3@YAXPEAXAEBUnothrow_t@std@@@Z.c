/*
 * XREFs of ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BDC0
 * Callers:
 *     ??1ResourceManagerClientProxy@@MEAA@XZ @ 0x18001EA2C (--1ResourceManagerClientProxy@@MEAA@XZ.c)
 *     ?_EmplaceImpl@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@2@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@2@@2@PEAU?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@@Z @ 0x1800207D0 (-_EmplaceImpl@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equ.c)
 *     ?_Rehash@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAA_NE@Z @ 0x180020AA4 (-_Rehash@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equal_to.c)
 *     ?erase@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@2@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@2@@2@0@Z @ 0x180020BC8 (-erase@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equal_to@_.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  ??3@YAXPEAX@Z(Block);
}
