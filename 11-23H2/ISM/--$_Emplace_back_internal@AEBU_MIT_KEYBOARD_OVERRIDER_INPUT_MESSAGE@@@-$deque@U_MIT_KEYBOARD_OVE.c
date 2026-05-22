/*
 * XREFs of ??$_Emplace_back_internal@AEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800FE040
 * Callers:
 *     ?AddMessage@KeyboardOverriderDispatcher@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@AEAUKeyboardInputInfo@@@Z @ 0x1800FE1F4 (-AddMessage@KeyboardOverriderDispatcher@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@AEAUKey.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@AEAAX_K@Z @ 0x1800FF75C (-_Growmap@-$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V-$allocator@U_MIT_KEYBOARD_OVERRIDER_.c)
 */

__int64 __fastcall std::deque<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::_Emplace_back_internal<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE const &>(
        _QWORD *a1,
        _OWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rsi
  _OWORD *v6; // rcx
  __int64 result; // rax
  __int128 v8; // xmm1

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::_Growmap();
  v4 = a1[2] - 1LL;
  a1[3] &= v4;
  v5 = v4 & (a1[4] + a1[3]);
  if ( !*(_QWORD *)(a1[1] + 8 * v5) )
    *(_QWORD *)(a1[1] + 8 * v5) = operator new(0x170uLL);
  v6 = *(_OWORD **)(a1[1] + 8 * v5);
  result = 2LL;
  do
  {
    *v6 = *a2;
    v6[1] = a2[1];
    v6[2] = a2[2];
    v6[3] = a2[3];
    v6[4] = a2[4];
    v6[5] = a2[5];
    v6[6] = a2[6];
    v6 += 8;
    v8 = a2[7];
    a2 += 8;
    *(v6 - 1) = v8;
    --result;
  }
  while ( result );
  *v6 = *a2;
  v6[1] = a2[1];
  v6[2] = a2[2];
  v6[3] = a2[3];
  v6[4] = a2[4];
  v6[5] = a2[5];
  v6[6] = a2[6];
  ++a1[4];
  return result;
}
