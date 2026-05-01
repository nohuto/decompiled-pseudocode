/*
 * XREFs of ?GetGameEntryFromAppId@CQueryKnownGameList@@UEAAJPEBGPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18002F390
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18002F720 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CQueryKnownGameList::GetGameEntryFromAppId(
        CQueryKnownGameList *this,
        const unsigned __int16 *a2,
        struct KnownGameList::IGameEntry **a3)
{
  int GameEntryByIdentifier; // ebx
  __int64 result; // rax
  __int64 v5; // rdx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    GameEntryByIdentifier = -2147467261;
    v5 = 329LL;
    goto LABEL_6;
  }
  *a3 = 0LL;
  GameEntryByIdentifier = CQueryKnownGameList::GetGameEntryByIdentifier(this, a2, 0, a3);
  result = 2147943568LL;
  if ( GameEntryByIdentifier != -2147023728 )
  {
    if ( GameEntryByIdentifier >= 0 )
      return 0LL;
    v5 = 336LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)GameEntryByIdentifier,
      v6);
    return (unsigned int)GameEntryByIdentifier;
  }
  return result;
}
