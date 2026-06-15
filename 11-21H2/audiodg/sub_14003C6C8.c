/*
 * XREFs of sub_14003C6C8 @ 0x14003C6C8
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall sub_14003C6C8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        wil::details::in1diag3 *a7,
        int a8,
        int a9,
        char *a10)
{
  if ( (int)a10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      a7,
      (void *)0x28F,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)(unsigned int)a10);
    JUMPOUT(0x140006CCBLL);
  }
  JUMPOUT(0x140006CC9LL);
}
