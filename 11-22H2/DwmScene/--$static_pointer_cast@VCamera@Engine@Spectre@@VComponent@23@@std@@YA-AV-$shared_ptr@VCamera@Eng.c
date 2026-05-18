/*
 * XREFs of ??$static_pointer_cast@VCamera@Engine@Spectre@@VComponent@23@@std@@YA?AV?$shared_ptr@VCamera@Engine@Spectre@@@0@AEBV?$shared_ptr@VComponent@Engine@Spectre@@@0@@Z @ 0x1800591FC
 * Callers:
 *     ?ThisCameraShared@Camera@Engine@Spectre@@AEAA?AV?$shared_ptr@VCamera@Engine@Spectre@@@std@@XZ @ 0x18005D5DC (-ThisCameraShared@Camera@Engine@Spectre@@AEAA-AV-$shared_ptr@VCamera@Engine@Spectre@@@std@@XZ.c)
 * Callees:
 *     ??$?0VComponent@Engine@Spectre@@@?$shared_ptr@VCamera@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VComponent@Engine@Spectre@@@1@PEAVCamera@Engine@Spectre@@@Z @ 0x1800246A4 (--$-0VComponent@Engine@Spectre@@@-$shared_ptr@VCamera@Engine@Spectre@@@std@@QEAA@AEBV-$shared_pt.c)
 */

__int64 __fastcall std::static_pointer_cast<Spectre::Engine::Camera,Spectre::Engine::Component>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rcx

  std::shared_ptr<Spectre::Engine::Camera>::shared_ptr<Spectre::Engine::Camera>(a1, (__int64)a2, *a2);
  return v2;
}
