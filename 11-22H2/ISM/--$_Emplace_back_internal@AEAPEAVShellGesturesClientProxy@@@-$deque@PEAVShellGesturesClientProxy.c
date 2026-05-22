/*
 * XREFs of ??$_Emplace_back_internal@AEAPEAVShellGesturesClientProxy@@@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@AEAAXAEAPEAVShellGesturesClientProxy@@@Z @ 0x180039334
 * Callers:
 *     ?OnConnected@ShellGesturesClientProxy@@MEAAJXZ @ 0x18004C980 (-OnConnected@ShellGesturesClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@AEAAX_K@Z @ 0x180039400 (-_Growmap@-$deque@PEAVShellGesturesClientProxy@@V-$allocator@PEAVShellGesturesClientProxy@@@std@.c)
 */

__int64 __fastcall std::deque<ShellGesturesClientProxy *>::_Emplace_back_internal<ShellGesturesClientProxy * &>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  char v6; // bl
  __int64 v7; // rdi
  __int64 result; // rax

  v2 = qword_180278540;
  v4 = *((_QWORD *)&xmmword_180278530 + 1);
  if ( ((BYTE8(xmmword_180278530) + (_BYTE)qword_180278540) & 1) == 0
    && (unsigned __int64)xmmword_180278530 <= (unsigned __int64)(qword_180278540 + 2) >> 1 )
  {
    std::deque<ShellGesturesClientProxy *>::_Growmap();
    v2 = qword_180278540;
    v4 = *((_QWORD *)&xmmword_180278530 + 1);
  }
  v5 = *((_QWORD *)&ShellGesturesProcessor::s_clients + 1);
  *((_QWORD *)&xmmword_180278530 + 1) = v4 & (2 * xmmword_180278530 - 1);
  v6 = BYTE8(xmmword_180278530) + v2;
  v7 = ((unsigned __int64)(*((_QWORD *)&xmmword_180278530 + 1) + v2) >> 1) & (xmmword_180278530 - 1);
  if ( !*(_QWORD *)(*((_QWORD *)&ShellGesturesProcessor::s_clients + 1) + 8 * v7) )
  {
    *(_QWORD *)(*((_QWORD *)&ShellGesturesProcessor::s_clients + 1) + 8 * v7) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    v5 = *((_QWORD *)&ShellGesturesProcessor::s_clients + 1);
  }
  result = *a2;
  *(_QWORD *)(*(_QWORD *)(v5 + 8 * v7) + 8LL * (v6 & 1)) = *a2;
  ++qword_180278540;
  return result;
}
