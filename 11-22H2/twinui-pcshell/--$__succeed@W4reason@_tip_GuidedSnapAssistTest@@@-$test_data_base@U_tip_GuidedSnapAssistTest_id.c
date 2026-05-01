/*
 * XREFs of ??$__succeed@W4reason@_tip_GuidedSnapAssistTest@@@?$test_data_base@U_tip_GuidedSnapAssistTest_id@@@tip2@@IEBAXW4reason@_tip_GuidedSnapAssistTest@@PEBD@Z @ 0x180223658
 * Callers:
 *     ?evaluate@_tip_GuidedSnapAssistTest@@QEAAXXZ @ 0x18066E4BC (-evaluate@_tip_GuidedSnapAssistTest@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip2::test_data_base<_tip_GuidedSnapAssistTest_id>::__succeed<enum _tip_GuidedSnapAssistTest::reason>(
        __int64 a1,
        __int16 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(result + 152) )
  {
    *(_BYTE *)(result + 152) = 1;
    *(_WORD *)(result + 154) = a2;
    *(_QWORD *)(result + 160) = a3;
  }
  return result;
}
