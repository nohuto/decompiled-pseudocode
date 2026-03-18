/*
 * XREFs of VfRemLockDeleteMemoryRange @ 0x140AC01C2
 * Callers:
 *     VfDriverUnloadImage @ 0x140ABCED4 (VfDriverUnloadImage.c)
 *     VfFreeMemoryNotification @ 0x140AC2118 (VfFreeMemoryNotification.c)
 *     VfPtFreePoolNotification @ 0x140ADE76C (VfPtFreePoolNotification.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x140209FDC (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x14020A34C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404664A8 (VfAvlInitializeLockContext.c)
 *     VfPoolIsInternalFree @ 0x1405D1B9C (VfPoolIsInternalFree.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140AD28FC (ViRemLockDeleteFirstTreeNode.c)
 */

void __fastcall VfRemLockDeleteMemoryRange(unsigned __int64 a1, __int64 a2)
{
  PVOID v4; // rbx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0LL;
  if ( ViRemLockInitialized )
  {
    if ( qword_140D719E8 )
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
