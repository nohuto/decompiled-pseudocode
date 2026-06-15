/*
 * XREFs of sub_14003DEE4 @ 0x14003DEE4
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_14003DEE4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        wil::details::in1diag3 *a9,
        char *a10)
{
  void (__fastcall ***v10)(_QWORD, __int64); // [rsp+20h] [rbp+20h]

  if ( (int)a10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      a9,
      (void *)0xB2D,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)(unsigned int)a10);
    (**v10)(v10, 1LL);
    JUMPOUT(0x14000A3D0LL);
  }
  JUMPOUT(0x14000A3C6LL);
}
