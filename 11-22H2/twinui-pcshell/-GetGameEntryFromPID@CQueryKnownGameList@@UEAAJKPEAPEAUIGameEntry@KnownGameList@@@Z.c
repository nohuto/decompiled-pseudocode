/*
 * XREFs of ?GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18002F3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18002F464 (-GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18002F720 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1801C8FB0 (--_V@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CQueryKnownGameList::GetGameEntryFromPID(
        CQueryKnownGameList *this,
        unsigned int a2,
        struct KnownGameList::IGameEntry **a3)
{
  unsigned int ProcessNameByPID; // ebx
  void *v7; // rdi
  int GameEntryByIdentifier; // eax
  unsigned int v9; // esi
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *Block; // [rsp+50h] [rbp+18h] BYREF

  Block = 0LL;
  if ( !a3 )
  {
    ProcessNameByPID = -2147467261;
    v11 = 313LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)ProcessNameByPID,
      v12);
    return ProcessNameByPID;
  }
  *a3 = 0LL;
  ProcessNameByPID = CQueryKnownGameList::GetProcessNameByPID(this, a2, (const unsigned __int16 **)&Block);
  if ( (ProcessNameByPID & 0x80000000) != 0 )
  {
    v11 = 317LL;
    goto LABEL_9;
  }
  v7 = Block;
  GameEntryByIdentifier = CQueryKnownGameList::GetGameEntryByIdentifier(this, (const unsigned __int16 *)Block, a2, a3);
  v9 = GameEntryByIdentifier;
  ProcessNameByPID = -2147023728;
  if ( GameEntryByIdentifier != -2147023728 )
  {
    if ( GameEntryByIdentifier >= 0 )
    {
      ProcessNameByPID = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x142,
        (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)GameEntryByIdentifier,
        v12);
      ProcessNameByPID = v9;
    }
  }
  if ( v7 )
    operator delete[](v7);
  return ProcessNameByPID;
}
