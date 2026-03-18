/*
 * XREFs of HmgIsProcessCleanupRequiredByW32Pid @ 0x1C001B494
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C001783C (-vCleanupDCs@@YAXK@Z.c)
 *     HmgNextOwned @ 0x1C001B0D0 (HmgNextOwned.c)
 * Callees:
 *     HmgIsProcessCleanupRequired @ 0x1C001B4E4 (HmgIsProcessCleanupRequired.c)
 *     ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1C001ED50 (-GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall HmgIsProcessCleanupRequiredByW32Pid(unsigned int a1)
{
  unsigned int IsProcessCleanupRequired; // ebx
  struct _W32PROCESS *W32ProcessFromId; // rax
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  IsProcessCleanupRequired = 1;
  if ( a1 )
  {
    if ( a1 != -2147483630 )
    {
      Object = 0LL;
      W32ProcessFromId = GetW32ProcessFromId(a1, (struct _EPROCESS **)&Object);
      IsProcessCleanupRequired = HmgIsProcessCleanupRequired(W32ProcessFromId);
      if ( Object )
        ObfDereferenceObject(Object);
    }
  }
  return IsProcessCleanupRequired;
}
