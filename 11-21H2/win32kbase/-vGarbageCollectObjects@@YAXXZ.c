/*
 * XREFs of ?vGarbageCollectObjects@@YAXXZ @ 0x1C0017AB0
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0017B90 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgIsProcessCleanupRequired @ 0x1C001B4E4 (HmgIsProcessCleanupRequired.c)
 *     ?Feature_1827749177__private_IsEnabled@@YAHXZ @ 0x1C00D8C50 (-Feature_1827749177__private_IsEnabled@@YAHXZ.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DB8C8 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DB9B4 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DBAC4 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DBBCC (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 *     HmgNextGarbageCollectible @ 0x1C016C2DC (HmgNextGarbageCollectible.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0179210 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 */

void __fastcall vGarbageCollectObjects(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentProcessWin32Process; // rax
  unsigned int i; // ecx
  unsigned int GarbageCollectible; // ebx

  if ( gGarbageCollectionPendingCount )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3, a4);
    if ( (unsigned int)HmgIsProcessCleanupRequired(CurrentProcessWin32Process) )
    {
      for ( i = 0; ; i = GarbageCollectible )
      {
        GarbageCollectible = HmgNextGarbageCollectible(i);
        if ( !GarbageCollectible )
          break;
      }
    }
  }
}
