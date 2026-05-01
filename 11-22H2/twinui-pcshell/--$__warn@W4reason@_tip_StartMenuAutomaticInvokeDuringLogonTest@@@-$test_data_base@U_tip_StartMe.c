/*
 * XREFs of ??$__warn@W4reason@_tip_StartMenuAutomaticInvokeDuringLogonTest@@@?$test_data_base@U_tip_StartMenuAutomaticInvokeDuringLogonTest_id@@@tip2@@IEBAXW4reason@_tip_StartMenuAutomaticInvokeDuringLogonTest@@PEBD@Z @ 0x1801FB7C8
 * Callers:
 *     ?evaluate@_tip_StartMenuAutomaticInvokeDuringLogonTest@@QEAAXXZ @ 0x18050278C (-evaluate@_tip_StartMenuAutomaticInvokeDuringLogonTest@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip2::test_data_base<_tip_StartMenuAutomaticInvokeDuringLogonTest_id>::__warn<enum _tip_StartMenuAutomaticInvokeDuringLogonTest::reason>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(result + 152) )
  {
    *(_BYTE *)(result + 152) = 2;
    *(_WORD *)(result + 154) = 9;
    *(_QWORD *)(result + 160) = a3;
  }
  return result;
}
