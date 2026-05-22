/*
 * XREFs of ??$emplace_front@AEAPEAVShellGesturesClientProxy@@@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@QEAAAEAPEAVShellGesturesClientProxy@@AEAPEAV2@@Z @ 0x180150660
 * Callers:
 *     ?OnConnected@ShellGesturesClientProxy@@MEAAJXZ @ 0x18014F880 (-OnConnected@ShellGesturesClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@AEAAX_K@Z @ 0x1801511F4 (-_Growmap@-$deque@PEAVShellGesturesClientProxy@@V-$allocator@PEAVShellGesturesClientProxy@@@std@.c)
 */

__int64 __fastcall std::deque<ShellGesturesClientProxy *>::emplace_front<ShellGesturesClientProxy * &>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx

  v2 = *((_QWORD *)&xmmword_180243020 + 1);
  if ( (BYTE8(xmmword_180243020) & 1) == 0
    && (unsigned __int64)xmmword_180243020 <= (unsigned __int64)(qword_180243030 + 2) >> 1 )
  {
    std::deque<ShellGesturesClientProxy *>::_Growmap();
    v2 = *((_QWORD *)&xmmword_180243020 + 1);
  }
  v4 = (2 * xmmword_180243020 - 1) & v2;
  *((_QWORD *)&xmmword_180243020 + 1) = v4;
  if ( !v4 )
    v4 = 2 * xmmword_180243020;
  v5 = *((_QWORD *)&ShellGesturesProcessor::s_clients + 1);
  v6 = v4 - 1;
  v7 = (v6 >> 1) & (xmmword_180243020 - 1);
  if ( !*(_QWORD *)(*((_QWORD *)&ShellGesturesProcessor::s_clients + 1) + 8 * v7) )
  {
    *(_QWORD *)(*((_QWORD *)&ShellGesturesProcessor::s_clients + 1) + 8 * v7) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    v5 = *((_QWORD *)&ShellGesturesProcessor::s_clients + 1);
  }
  v8 = v6 & 1;
  *(_QWORD *)(*(_QWORD *)(v5 + 8 * v7) + 8 * v8) = *a2;
  ++qword_180243030;
  *((_QWORD *)&xmmword_180243020 + 1) = v6;
  return *(_QWORD *)(*((_QWORD *)&ShellGesturesProcessor::s_clients + 1) + 8 * ((v6 >> 1) & (xmmword_180243020 - 1)))
       + 8 * v8;
}
