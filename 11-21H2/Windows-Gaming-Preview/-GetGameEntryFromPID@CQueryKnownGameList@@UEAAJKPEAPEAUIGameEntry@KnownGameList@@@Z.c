/*
 * XREFs of ?GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x1800459A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x1800466B4 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x180046F74 (-GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004ACD4 (--_V@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CQueryKnownGameList::GetGameEntryFromPID(
        CQueryKnownGameList *this,
        unsigned int a2,
        struct KnownGameList::IGameEntry **a3)
{
  unsigned int ProcessNameByPID; // ebx
  __int64 v7; // rdx
  unsigned __int16 *v8; // rsi
  int GameEntryByIdentifier; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int16 *v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = 0LL;
  if ( !a3 )
  {
    ProcessNameByPID = -2147467261;
    v7 = 313LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)ProcessNameByPID);
    return ProcessNameByPID;
  }
  *a3 = 0LL;
  ProcessNameByPID = CQueryKnownGameList::GetProcessNameByPID(this, a2, (const unsigned __int16 **)&v13);
  if ( (ProcessNameByPID & 0x80000000) != 0 )
  {
    v7 = 317LL;
    goto LABEL_3;
  }
  v8 = v13;
  GameEntryByIdentifier = CQueryKnownGameList::GetGameEntryByIdentifier(this, v13, a2, a3);
  v10 = GameEntryByIdentifier;
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
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)GameEntryByIdentifier);
      ProcessNameByPID = v10;
    }
  }
  operator delete[](v8);
  return ProcessNameByPID;
}
