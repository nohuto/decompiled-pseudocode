/*
 * XREFs of sub_180099527 @ 0x180099527
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_180099527(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        LPCRITICAL_SECTION lpCriticalSection,
        void (__fastcall ***a10)(_QWORD, __int64),
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        wil::details::in1diag3 *a19,
        int a20,
        int a21,
        char *a22)
{
  if ( (int)a22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      a19,
      (void *)0x6A1,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)(unsigned int)a22);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    (**a10)(a10, 1LL);
    JUMPOUT(0x1800086BELL);
  }
  JUMPOUT(0x18000866DLL);
}
