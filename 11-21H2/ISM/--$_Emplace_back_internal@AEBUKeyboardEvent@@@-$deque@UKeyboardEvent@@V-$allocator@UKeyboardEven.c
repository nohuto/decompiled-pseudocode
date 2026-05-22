/*
 * XREFs of ??$_Emplace_back_internal@AEBUKeyboardEvent@@@?$deque@UKeyboardEvent@@V?$allocator@UKeyboardEvent@@@std@@@std@@AEAAXAEBUKeyboardEvent@@@Z @ 0x1800E5140
 * Callers:
 *     ?SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKeyboardInputInfo@@@Z @ 0x1800E60F4 (-SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKe.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@UKeyboardEvent@@V?$allocator@UKeyboardEvent@@@std@@@std@@AEAAX_K@Z @ 0x1800E67D8 (-_Growmap@-$deque@UKeyboardEvent@@V-$allocator@UKeyboardEvent@@@std@@@std@@AEAAX_K@Z.c)
 */

__int64 __fastcall std::deque<KeyboardEvent>::_Emplace_back_internal<KeyboardEvent const &>(_QWORD *a1, _OWORD *a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  _OWORD *v9; // rcx
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int64 result; // rax

  v4 = a1[4];
  v5 = a1[2];
  if ( v5 <= v4 + 1 )
  {
    std::deque<KeyboardEvent>::_Growmap(a1);
    v5 = a1[2];
    v4 = a1[4];
  }
  a1[3] &= v5 - 1;
  v6 = v5 - 1;
  v7 = a1[1];
  v8 = v6 & (v4 + a1[3]);
  if ( !*(_QWORD *)(v7 + 8 * v8) )
  {
    *(_QWORD *)(a1[1] + 8 * v8) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x128uLL);
    v7 = a1[1];
  }
  v9 = *(_OWORD **)(v7 + 8 * v8);
  v10 = 2LL;
  do
  {
    *v9 = *a2;
    v9[1] = a2[1];
    v9[2] = a2[2];
    v9[3] = a2[3];
    v9[4] = a2[4];
    v9[5] = a2[5];
    v9[6] = a2[6];
    v9 += 8;
    v11 = a2[7];
    a2 += 8;
    *(v9 - 1) = v11;
    --v10;
  }
  while ( v10 );
  *v9 = *a2;
  v9[1] = a2[1];
  result = *((_QWORD *)a2 + 4);
  *((_QWORD *)v9 + 4) = result;
  ++a1[4];
  return result;
}
