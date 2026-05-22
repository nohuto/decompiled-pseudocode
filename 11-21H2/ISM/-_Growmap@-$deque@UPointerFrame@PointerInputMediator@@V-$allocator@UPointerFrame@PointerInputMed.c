/*
 * XREFs of ?_Growmap@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEAAX_K@Z @ 0x1800E427C
 * Callers:
 *     ??$emplace_back@AEAPEBUtagMANIPULATION_INPUT_INFO@@@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAAAEAUPointerFrame@PointerInputMediator@@AEAPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1800E2F04 (--$emplace_back@AEAPEBUtagMANIPULATION_INPUT_INFO@@@-$deque@UPointerFrame@PointerInputMediator@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18003BDEC (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     memmove_0 @ 0x18004E99F (memmove_0.c)
 */

void std::deque<PointerInputMediator::PointerFrame>::_Growmap()
{
  unsigned __int64 v0; // rcx
  unsigned __int64 v1; // r15
  unsigned __int64 v2; // rsi
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
  if ( (_QWORD)xmmword_180242FA0 )
    v0 = xmmword_180242FA0;
  while ( v0 == (_QWORD)xmmword_180242FA0 || v0 < 8 )
  {
    if ( 0xEA0EA0EA0EA0EALL - v0 < v0 )
      std::_Xlength_error("deque<T> too long");
    v0 *= 2LL;
  }
  v1 = *((_QWORD *)&xmmword_180242FA0 + 1);
  v2 = v0 - xmmword_180242FA0;
  size_of = std::_Get_size_of_n<8>(v0);
  v4 = 8 * v1;
  v5 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v6 = (const void *)(8 * v1 + *((_QWORD *)&PointerInputMediator::s_frameQueue + 1));
  v7 = *((_QWORD *)&PointerInputMediator::s_frameQueue + 1) + 8 * xmmword_180242FA0 - (_QWORD)v6;
  memmove_0(&v5[8 * v1], v6, v7);
  v8 = &v5[8 * v1 + v7];
  if ( v1 > v2 )
  {
    memmove_0(v8, *((const void **)&PointerInputMediator::s_frameQueue + 1), 8 * v2);
    v11 = *((_QWORD *)&PointerInputMediator::s_frameQueue + 1)
        + v4
        - (8 * v2
         + *((_QWORD *)&PointerInputMediator::s_frameQueue + 1));
    memmove_0(v5, (const void *)(8 * v2 + *((_QWORD *)&PointerInputMediator::s_frameQueue + 1)), v11);
    v10 = &v5[v11];
    v9 = 8 * v2;
  }
  else
  {
    memmove_0(v8, *((const void **)&PointerInputMediator::s_frameQueue + 1), 8 * v1);
    memset_0(&v5[8 * v1 + v7 + v4], 0, 8 * (v2 - v1));
    v9 = 8 * v1;
    v10 = v5;
  }
  memset_0(v10, 0, v9);
  if ( *((_QWORD *)&PointerInputMediator::s_frameQueue + 1) )
    std::_Deallocate<16,0>(*((void **)&PointerInputMediator::s_frameQueue + 1), 8 * xmmword_180242FA0);
  *(_QWORD *)&xmmword_180242FA0 = v2 + xmmword_180242FA0;
  *((_QWORD *)&PointerInputMediator::s_frameQueue + 1) = v5;
}
