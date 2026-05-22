/*
 * XREFs of ?UnregisterClient@ShellGesturesProcessor@@SAXPEAVShellGesturesClientProxy@@@Z @ 0x18016FCF8
 * Callers:
 *     ?OnDisconnected@ShellGesturesClientProxy@@MEAAJXZ @ 0x18016DB30 (-OnDisconnected@ShellGesturesClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ?erase@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@2@0@Z @ 0x18016FF64 (-erase@-$deque@PEAVShellGesturesClientProxy@@V-$allocator@PEAVShellGesturesClientProxy@@@std@@@s.c)
 */

void __fastcall ShellGesturesProcessor::UnregisterClient(unsigned __int64 a1)
{
  unsigned __int64 v1; // r8
  struct ShellGesturesClientProxy *v2; // rbx
  __int64 v3; // r10
  _QWORD v4[3]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v5[3]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v6[40]; // [rsp+50h] [rbp-28h] BYREF

  v1 = *((_QWORD *)&xmmword_180269160 + 1);
  v2 = (struct ShellGesturesClientProxy *)a1;
  if ( (_QWORD)ShellGesturesProcessor::s_clients )
    v3 = *(_QWORD *)ShellGesturesProcessor::s_clients;
  else
    v3 = 0LL;
  while ( v1 != *((_QWORD *)&xmmword_180269160 + 1) + qword_180269170 )
  {
    a1 = v1 & 1;
    if ( *(struct ShellGesturesClientProxy **)(*(_QWORD *)(*(_QWORD *)(v3 + 8)
                                                         + 8 * ((v1 >> 1) & (*(_QWORD *)(v3 + 16) - 1LL)))
                                             + 8 * a1) == v2 )
      break;
    ++v1;
  }
  v4[1] = 0LL;
  v5[1] = 0LL;
  v4[0] = ShellGesturesProcessor::s_clients;
  v5[0] = ShellGesturesProcessor::s_clients;
  v5[2] = v1;
  v4[2] = v1 + 1;
  ((void (__fastcall *)(unsigned __int64, _BYTE *, _QWORD *, _QWORD *))std::deque<ShellGesturesClientProxy *>::erase)(
    a1,
    v6,
    v5,
    v4);
}
