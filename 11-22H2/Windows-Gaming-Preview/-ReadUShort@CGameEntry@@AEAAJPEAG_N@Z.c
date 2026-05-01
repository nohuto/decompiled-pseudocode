/*
 * XREFs of ?ReadUShort@CGameEntry@@AEAAJPEAG_N@Z @ 0x1800493AC
 * Callers:
 *     ?CompleteInitialization@CGameEntry@@AEAAJXZ @ 0x180048EB0 (-CompleteInitialization@CGameEntry@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MarkConsumed@CGameEntry@@AEAAJK_N@Z @ 0x1800492B8 (-MarkConsumed@CGameEntry@@AEAAJK_N@Z.c)
 *     ?VerifyAvailable@CGameEntry@@AEAAJK@Z @ 0x180049370 (-VerifyAvailable@CGameEntry@@AEAAJK@Z.c)
 */

__int64 __fastcall CGameEntry::ReadUShort(CGameEntry *this, unsigned __int16 *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CGameEntry::VerifyAvailable(this, 2u);
  if ( v4 < 0 )
  {
    v5 = 1446LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  *a2 = **((_WORD **)this + 2);
  v4 = CGameEntry::MarkConsumed(this, 2u, 0);
  if ( v4 < 0 )
  {
    v5 = 1450LL;
    goto LABEL_3;
  }
  return 0LL;
}
