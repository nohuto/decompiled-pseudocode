/*
 * XREFs of ?SetSuppressionState@SystemCursor2@@QEAAJ_N@Z @ 0x1800EDF78
 * Callers:
 *     ?OnCursorSuppressionStateChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorSuppressionStateData@@@Z @ 0x1800ED190 (-OnCursorSuppressionStateChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorSuppressionStateDa.c)
 *     ?SetCursorSuppressionStateForInputType@SystemCursorService2@@UEAA_NW4InputType@@_N@Z @ 0x1800ED9A0 (-SetCursorSuppressionStateForInputType@SystemCursorService2@@UEAA_NW4InputType@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CursorSuppressed@AEA_N@TestCursorTraceLogging@@SAXAEA_N@Z @ 0x1800EA920 (--$CursorSuppressed@AEA_N@TestCursorTraceLogging@@SAXAEA_N@Z.c)
 *     ?GetEffectiveVisibiltyState@SystemCursor2@@AEBA_NXZ @ 0x1800ECBD0 (-GetEffectiveVisibiltyState@SystemCursor2@@AEBA_NXZ.c)
 *     ?SetEffectiveVisibility@SystemCursor2@@AEAAJ_N@Z @ 0x1800EDAD0 (-SetEffectiveVisibility@SystemCursor2@@AEAAJ_N@Z.c)
 */

__int64 __fastcall SystemCursor2::SetSuppressionState(SystemCursor2 *this, char a2)
{
  char v2; // dl
  SystemCursor2 *v3; // rcx
  char EffectiveVisibiltyState; // al
  SystemCursor2 *v5; // rcx
  char v6; // r8
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  SystemCursor2::GetEffectiveVisibiltyState(this);
  *((_BYTE *)v3 + 178) = v2;
  EffectiveVisibiltyState = SystemCursor2::GetEffectiveVisibiltyState(v3);
  if ( v6 != EffectiveVisibiltyState )
  {
    v7 = SystemCursor2::SetEffectiveVisibility(v5, EffectiveVisibiltyState);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22E,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorservice2.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
    TestCursorTraceLogging::CursorSuppressed<bool &>(&v11);
  }
  return 0LL;
}
