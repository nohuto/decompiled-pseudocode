/*
 * XREFs of ??$reverse@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@YAXQEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@0@Z @ 0x18003AD3C
 * Callers:
 *     ??$_Buffered_rotate_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@YAPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@QEAV10@00_J101@Z @ 0x18003A080 (--$_Buffered_rotate_unchecked@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@YAPEAV-$sh.c)
 * Callees:
 *     ??$iter_swap@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@PEAV12@@std@@YAXPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@0@Z @ 0x18003AD30 (--$iter_swap@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@PEAV12@@std@@YAXPEAV-$shared_ptr@VCa.c)
 */

__int64 __fastcall std::reverse<std::shared_ptr<Spectre::Engine::Camera> *>(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  while ( a1 != a2 && a1 != a2 - 16 )
  {
    result = std::iter_swap<std::shared_ptr<Spectre::Engine::Camera> *,std::shared_ptr<Spectre::Engine::Camera> *>();
    a1 = v3 + 16;
  }
  return result;
}
