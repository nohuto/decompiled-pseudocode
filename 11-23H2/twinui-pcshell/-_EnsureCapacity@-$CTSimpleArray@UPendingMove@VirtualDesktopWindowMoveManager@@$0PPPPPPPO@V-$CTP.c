/*
 * XREFs of ?_EnsureCapacity@?$CTSimpleArray@UPendingMove@VirtualDesktopWindowMoveManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingMove@VirtualDesktopWindowMoveManager@@@@V?$CSimpleArrayStandardCompareHelper@UPendingMove@VirtualDesktopWindowMoveManager@@@@V?$CSimpleArrayStandardMergeHelper@UPendingMove@VirtualDesktopWindowMoveManager@@@@@@QEAAJ_K0@Z @ 0x1805952A4
 * Callers:
 *     ?ItemAdded@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@PEA_N@Z @ 0x1805946C0 (-ItemAdded@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@PEA_.c)
 *     ?ItemHidden@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@PEA_N@Z @ 0x180594840 (-ItemHidden@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@PEA.c)
 *     ?ItemShown@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@PEA_N@Z @ 0x180594C20 (-ItemShown@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@PEA_.c)
 *     ?MoveWindow@VirtualDesktopWindowMoveManager@@UEAAJPEAUHWND__@@U_GUID@@_K@Z @ 0x180615F30 (-MoveWindow@VirtualDesktopWindowMoveManager@@UEAAJPEAUHWND__@@U_GUID@@_K@Z.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x1800EE978 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 */

__int64 __fastcall CTSimpleArray<VirtualDesktopWindowMoveManager::PendingMove,4294967294,CTPolicyCoTaskMem<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardCompareHelper<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardMergeHelper<VirtualDesktopWindowMoveManager::PendingMove>>::_EnsureCapacity(
        __int64 a1,
        unsigned __int64 a2,
        void *a3)
{
  int v4; // r8d
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  void *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v4 = -2147024774;
  if ( a2 <= 0xFFFFFFFE )
  {
    v5 = *(_QWORD *)(a1 + 24);
    v4 = 0;
    if ( a2 > v5 )
    {
      v6 = 2 * v5;
      if ( !is_mul_ok(v5, 2uLL) )
        return (unsigned int)-2147024362;
      v7 = v5;
      v8 = v5 + 4096;
      if ( v7 <= 0x1000 )
        v8 = v6;
      if ( a2 > v8 )
      {
        v8 = a2;
      }
      else if ( v8 > 0xFFFFFFFE )
      {
        v8 = 4294967294LL;
      }
      v10 = 0LL;
      if ( is_mul_ok(v8, 0x20uLL) )
      {
        v4 = CTCoAllocPolicy::Realloc(
               (IMalloc *)&v10,
               (v8 * (unsigned __int128)0x20uLL) >> 64,
               *(void **)a1,
               32 * v8,
               &v10);
        if ( v4 >= 0 )
        {
          *(_QWORD *)a1 = v10;
          *(_QWORD *)(a1 + 24) = v8;
        }
      }
      else
      {
        return (unsigned int)-2147024362;
      }
    }
  }
  return (unsigned int)v4;
}
