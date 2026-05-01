/*
 * XREFs of ?GetIdentifier@CGameEntry@@UEAAJPEAPEBGPEAK@Z @ 0x180039D40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGameEntry::GetIdentifier(CGameEntry *this, const unsigned __int16 **a2, unsigned int *a3)
{
  __int64 v4; // rdx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( *((_QWORD *)this + 5) )
    {
      if ( a3 )
      {
        *a3 = *((unsigned __int16 *)this + 24) >> 1;
        *a2 = (const unsigned __int16 *)*((_QWORD *)this + 5);
        return 0LL;
      }
      v4 = 1233LL;
    }
    else
    {
      v4 = 1232LL;
    }
  }
  else
  {
    v4 = 1231LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)0x80004003LL,
    v5);
  return 2147500035LL;
}
