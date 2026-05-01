/*
 * XREFs of ?VerifyAvailable@CGameEntry@@AEAAJK@Z @ 0x180052AE4
 * Callers:
 *     ?CompleteInitialization@CGameEntry@@AEAAJXZ @ 0x180013E70 (-CompleteInitialization@CGameEntry@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGameEntry::VerifyAvailable(CGameEntry *this, unsigned int a2)
{
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 <= *((_DWORD *)this + 8) )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x59F,
    (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)0x8000000BLL,
    v3);
  return 2147483659LL;
}
