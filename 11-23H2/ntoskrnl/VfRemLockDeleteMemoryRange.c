/*
 * XREFs of VfRemLockDeleteMemoryRange @ 0x140AC01B2
 * Callers:
 *     VfDriverUnloadImage @ 0x140ABCEC4 (VfDriverUnloadImage.c)
 *     VfFreeMemoryNotification @ 0x140AC2108 (VfFreeMemoryNotification.c)
 *     VfPtFreePoolNotification @ 0x140ADE75C (VfPtFreePoolNotification.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x140209FDC (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x14020A34C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404668A8 (VfAvlInitializeLockContext.c)
 *     VfPoolIsInternalFree @ 0x1405D210C (VfPoolIsInternalFree.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140AD28EC (ViRemLockDeleteFirstTreeNode.c)
 */

void __fastcall VfRemLockDeleteMemoryRange(unsigned __int64 a1, __int64 a2)
{
  PVOID v4; // rbx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0LL;
  if ( ViRemLockInitialized )
  {
    if ( qword_140D719C0 )
    {
      if ( !(unsigned int)VfPoolIsInternalFree() )
      {
        VfAvlInitializeLockContext((__int64)&v5, 1);
        v4 = VfAvlLookupTreeNode(&ViRemLockAvl, (__int64)&v5, a1, a2);
        VfAvlCleanupLockContext((__int64)&v5);
        if ( v4 )
        {
          while ( (unsigned int)ViRemLockDeleteFirstTreeNode(a1, a2) )
            ;
        }
      }
    }
  }
}
