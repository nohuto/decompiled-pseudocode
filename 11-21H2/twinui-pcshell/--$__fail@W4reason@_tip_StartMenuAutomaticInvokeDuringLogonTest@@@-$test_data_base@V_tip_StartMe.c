/*
 * XREFs of ??$__fail@W4reason@_tip_StartMenuAutomaticInvokeDuringLogonTest@@@?$test_data_base@V_tip_StartMenuAutomaticInvokeDuringLogonTest_id@@@tip@@IEBAXW4reason@_tip_StartMenuAutomaticInvokeDuringLogonTest@@PEBD@Z @ 0x180449D18
 * Callers:
 *     ?evaluate@_tip_StartMenuAutomaticInvokeDuringLogonTest@@QEAAXXZ @ 0x18044C564 (-evaluate@_tip_StartMenuAutomaticInvokeDuringLogonTest@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip::test_data_base<_tip_StartMenuAutomaticInvokeDuringLogonTest_id>::__fail<enum _tip_StartMenuAutomaticInvokeDuringLogonTest::reason>(
        __int64 *a1,
        __int16 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = *a1;
  if ( !*(_BYTE *)(*a1 + 72) )
  {
    *(_BYTE *)(result + 72) = 3;
    *(_WORD *)(result + 74) = a2;
    *(_QWORD *)(result + 80) = a3;
  }
  return result;
}
