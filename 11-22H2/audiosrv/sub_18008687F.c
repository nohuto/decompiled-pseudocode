/*
 * XREFs of sub_18008687F @ 0x18008687F
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall sub_18008687F(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        wil::details::in1diag3 *a15)
{
  int v15; // [rsp+20h] [rbp+20h]

  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      a15,
      (void *)0x7A8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v15);
    JUMPOUT(0x18000AC37LL);
  }
  JUMPOUT(0x18000AC4DLL);
}
