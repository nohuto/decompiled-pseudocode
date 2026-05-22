/*
 * XREFs of ?Update2DCursor@MPCCursorManager@@AEAAX_N@Z @ 0x1800BD3F0
 * Callers:
 *     ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x1800BD464 (-UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MPCCursorManager_Update2DCursor@AEA_N@ISMTracing@@SAXAEA_N@Z @ 0x1800BCB00 (--$MPCCursorManager_Update2DCursor@AEA_N@ISMTracing@@SAXAEA_N@Z.c)
 */

void __fastcall MPCCursorManager::Update2DCursor(MPCCursorManager *this, bool a2)
{
  unsigned int (__fastcall *v2)(bool); // rax
  signed int LastError; // eax
  bool v4; // sf
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v2 = (unsigned int (__fastcall *)(bool))*((_QWORD *)this + 6);
  if ( v2 )
  {
    if ( !v2(a2) )
    {
      LastError = GetLastError();
      v4 = LastError < 0;
      if ( LastError > 0 )
      {
        LastError = (unsigned __int16)LastError | 0x80070000;
        v4 = LastError < 0;
      }
      if ( v4 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x105,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          (const char *)(unsigned int)LastError,
          v5);
    }
    ISMTracing::MPCCursorManager_Update2DCursor<bool &>(&v7);
  }
}
