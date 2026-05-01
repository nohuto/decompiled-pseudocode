/*
 * XREFs of ?GetCommonHeader@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderCommon@KnownGameList@@@Z @ 0x18073F730
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CQueryKnownGameList::GetCommonHeader(
        CQueryKnownGameList *this,
        struct KnownGameList::CookedKGLHeaderCommon *a2)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    result = 0LL;
    *(_OWORD *)a2 = *((_OWORD *)this + 2);
    *((_QWORD *)a2 + 2) = *((_QWORD *)this + 6);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x219,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  return result;
}
