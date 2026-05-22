/*
 * XREFs of ??$_Emplace_back_internal@AEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800E5234
 * Callers:
 *     ?AddMessage@KeyboardOverriderDispatcher@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@AEAUKeyboardInputInfo@@@Z @ 0x1800E5404 (-AddMessage@KeyboardOverriderDispatcher@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@AEAUKey.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@AEAAX_K@Z @ 0x1800E693C (-_Growmap@-$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V-$allocator@U_MIT_KEYBOARD_OVERRIDER_.c)
 */

_OWORD *__fastcall std::deque<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::_Emplace_back_internal<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE const &>(
        _QWORD *a1,
        _OWORD *a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rax
  _OWORD *result; // rax
  __int64 v9; // rcx
  __int128 v10; // xmm1

  v4 = a1[4];
  v5 = a1[2];
  if ( v5 <= v4 + 1 )
  {
    std::deque<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::_Growmap(a1);
    v5 = a1[2];
    v4 = a1[4];
  }
  a1[3] &= v5 - 1;
  v6 = (v5 - 1) & (v4 + a1[3]);
  v7 = a1[1];
  if ( !*(_QWORD *)(v7 + 8 * v6) )
  {
    *(_QWORD *)(a1[1] + 8 * v6) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x170uLL);
    v7 = a1[1];
  }
  result = *(_OWORD **)(v7 + 8 * v6);
  v9 = 2LL;
  do
  {
    *result = *a2;
    result[1] = a2[1];
    result[2] = a2[2];
    result[3] = a2[3];
    result[4] = a2[4];
    result[5] = a2[5];
    result[6] = a2[6];
    result += 8;
    v10 = a2[7];
    a2 += 8;
    *(result - 1) = v10;
    --v9;
  }
  while ( v9 );
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  result[4] = a2[4];
  result[5] = a2[5];
  result[6] = a2[6];
  ++a1[4];
  return result;
}
