/*
 * XREFs of ?_Growmap@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@AEAAX_K@Z @ 0x18003D390
 * Callers:
 *     ??$_Emplace_back_internal@AEAPEAVShellGesturesClientProxy@@@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@AEAAXAEAPEAVShellGesturesClientProxy@@@Z @ 0x18003D2C4 (--$_Emplace_back_internal@AEAPEAVShellGesturesClientProxy@@@-$deque@PEAVShellGesturesClientProxy.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18003E448 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     memmove_0 @ 0x18006592C (memmove_0.c)
 */

void std::deque<ShellGesturesClientProxy *>::_Growmap()
{
  unsigned __int64 v0; // rcx
  unsigned __int64 v1; // rsi
  unsigned __int64 v2; // r15
  size_t size_of; // rax
  __int64 v4; // r14
  char *v5; // rbp
  const void *v6; // rdx
  size_t v7; // rbx
  char *v8; // rcx
  size_t v9; // r8
  char *v10; // rcx
  size_t v11; // r14

  v0 = 1LL;
  if ( (_QWORD)xmmword_180269160 )
    v0 = xmmword_180269160;
  while ( 1 )
  {
    v1 = v0 - xmmword_180269160;
    if ( v0 >= 8 )
    {
      if ( v1 )
        break;
    }
    if ( 0xFFFFFFFFFFFFFFFLL - v0 < v0 )
      std::_Xlength_error("deque<T> too long");
    v0 *= 2LL;
  }
  v2 = *((_QWORD *)&xmmword_180269160 + 1) >> 1;
  size_of = std::_Get_size_of_n<8>(v0);
  v4 = 8 * v2;
  v5 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v6 = (const void *)(8 * v2 + *((_QWORD *)&ShellGesturesProcessor::s_clients + 1));
  v7 = *((_QWORD *)&ShellGesturesProcessor::s_clients + 1) + 8 * xmmword_180269160 - (_QWORD)v6;
  memmove_0(&v5[8 * v2], v6, v7);
  v8 = &v5[8 * v2 + v7];
  if ( v2 > v1 )
  {
    memmove_0(v8, *((const void **)&ShellGesturesProcessor::s_clients + 1), 8 * v1);
    v11 = *((_QWORD *)&ShellGesturesProcessor::s_clients + 1)
        + v4
        - (8 * v1
         + *((_QWORD *)&ShellGesturesProcessor::s_clients + 1));
    memmove_0(v5, (const void *)(8 * v1 + *((_QWORD *)&ShellGesturesProcessor::s_clients + 1)), v11);
    v10 = &v5[v11];
    v9 = 8 * v1;
  }
  else
  {
    memmove_0(v8, *((const void **)&ShellGesturesProcessor::s_clients + 1), 8 * v2);
    memset_0(&v5[8 * v2 + v7 + v4], 0, 8 * (v1 - v2));
    v9 = 8 * v2;
    v10 = v5;
  }
  memset_0(v10, 0, v9);
  if ( *((_QWORD *)&ShellGesturesProcessor::s_clients + 1) )
    std::_Deallocate<16,0>(*((void **)&ShellGesturesProcessor::s_clients + 1), 8 * xmmword_180269160);
  *(_QWORD *)&xmmword_180269160 = v1 + xmmword_180269160;
  *((_QWORD *)&ShellGesturesProcessor::s_clients + 1) = v5;
}
