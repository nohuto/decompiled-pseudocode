/*
 * XREFs of ??$?0VComponent@Engine@Spectre@@@?$shared_ptr@VCamera@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VComponent@Engine@Spectre@@@1@PEAVCamera@Engine@Spectre@@@Z @ 0x1800246A4
 * Callers:
 *     ??$dynamic_pointer_cast@VCamera@Engine@Spectre@@VComponent@23@@std@@YA?AV?$shared_ptr@VCamera@Engine@Spectre@@@0@AEBV?$shared_ptr@VComponent@Engine@Spectre@@@0@@Z @ 0x1800250F8 (--$dynamic_pointer_cast@VCamera@Engine@Spectre@@VComponent@23@@std@@YA-AV-$shared_ptr@VCamera@En.c)
 *     ??$static_pointer_cast@VCamera@Engine@Spectre@@VComponent@23@@std@@YA?AV?$shared_ptr@VCamera@Engine@Spectre@@@0@AEBV?$shared_ptr@VComponent@Engine@Spectre@@@0@@Z @ 0x1800591FC (--$static_pointer_cast@VCamera@Engine@Spectre@@VComponent@23@@std@@YA-AV-$shared_ptr@VCamera@Eng.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::shared_ptr<Spectre::Engine::Camera>::shared_ptr<Spectre::Engine::Camera>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  *a1 = a3;
  a1[1] = *(_QWORD *)(a2 + 8);
  return a1;
}
