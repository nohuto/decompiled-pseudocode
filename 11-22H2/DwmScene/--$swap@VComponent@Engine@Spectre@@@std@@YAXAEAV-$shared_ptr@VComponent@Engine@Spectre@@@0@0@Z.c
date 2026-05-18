/*
 * XREFs of ??$swap@VComponent@Engine@Spectre@@@std@@YAXAEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@0@Z @ 0x18003AE8C
 * Callers:
 *     ??$iter_swap@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@PEAV12@@std@@YAXPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@0@Z @ 0x18003AD30 (--$iter_swap@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@PEAV12@@std@@YAXPEAV-$shared_ptr@VCa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::swap<Spectre::Engine::Component>(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // r8

  v2 = *a1;
  *a1 = *a2;
  *a2 = v2;
  result = a2[1];
  v4 = a1[1];
  a1[1] = result;
  a2[1] = v4;
  return result;
}
