/*
 * XREFs of ?SetZOrderBand@ApplicationViewOperation@@UEAAJK@Z @ 0x180026BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ApplicationViewOperation::SetZOrderBand(ApplicationViewOperation *this, int a2)
{
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    *((_DWORD *)this + 45) = a2;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x99,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\ApplicationViewOperationHelpers.h",
      (const char *)0x80070057LL,
      v3);
    return 2147942487LL;
  }
}
