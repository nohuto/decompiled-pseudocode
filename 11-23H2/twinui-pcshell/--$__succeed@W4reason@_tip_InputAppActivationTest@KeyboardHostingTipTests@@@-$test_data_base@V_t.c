/*
 * XREFs of ??$__succeed@W4reason@_tip_InputAppActivationTest@KeyboardHostingTipTests@@@?$test_data_base@V_tip_InputAppActivationTest_id@KeyboardHostingTipTests@@@tip@@IEBAXW4reason@_tip_InputAppActivationTest@KeyboardHostingTipTests@@PEBD@Z @ 0x18050AC8C
 * Callers:
 *     ?evaluate@_tip_InputAppActivationTest@KeyboardHostingTipTests@@QEAAXXZ @ 0x18051CDA4 (-evaluate@_tip_InputAppActivationTest@KeyboardHostingTipTests@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip::test_data_base<KeyboardHostingTipTests::_tip_InputAppActivationTest_id>::__succeed<enum KeyboardHostingTipTests::_tip_InputAppActivationTest::reason>(
        __int64 *a1,
        __int16 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = *a1;
  if ( !*(_BYTE *)(*a1 + 72) )
  {
    *(_BYTE *)(result + 72) = 1;
    *(_WORD *)(result + 74) = a2;
    *(_QWORD *)(result + 80) = a3;
  }
  return result;
}
