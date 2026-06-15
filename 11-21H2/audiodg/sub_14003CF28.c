/*
 * XREFs of sub_14003CF28 @ 0x14003CF28
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall sub_14003CF28(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        char *a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        wil::details::in1diag3 *a21)
{
  if ( (int)a8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      a21,
      (void *)0x1E4,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)a8);
    JUMPOUT(0x140008CB3LL);
  }
  JUMPOUT(0x140008CB1LL);
}
