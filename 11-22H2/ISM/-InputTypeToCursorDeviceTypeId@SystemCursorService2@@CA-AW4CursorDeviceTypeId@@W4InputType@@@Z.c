/*
 * XREFs of ?InputTypeToCursorDeviceTypeId@SystemCursorService2@@CA?AW4CursorDeviceTypeId@@W4InputType@@@Z @ 0x180114450
 * Callers:
 *     ?OnCursorCreated@SystemCursorService2@@UEAAJUCursorId@@UCursorCreateData@@@Z @ 0x1801144F0 (-OnCursorCreated@SystemCursorService2@@UEAAJUCursorId@@UCursorCreateData@@@Z.c)
 *     ?SetCursorOrientationForInputType@SystemCursorService2@@UEAA_NW4InputType@@M@Z @ 0x180114F70 (-SetCursorOrientationForInputType@SystemCursorService2@@UEAA_NW4InputType@@M@Z.c)
 *     ?SetCursorSuppressionStateForInputType@SystemCursorService2@@UEAA_NW4InputType@@_N@Z @ 0x180115180 (-SetCursorSuppressionStateForInputType@SystemCursorService2@@UEAA_NW4InputType@@_N@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SystemCursorService2::InputTypeToCursorDeviceTypeId(int a1)
{
  int v2; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1 == 2 )
    return 0LL;
  if ( a1 != 16 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1B7,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcu"
           "rsorservice2.cpp",
      (const char *)0x8000FFFFLL,
      v2);
  return 1LL;
}
