/*
 * XREFs of ??$dynamic_pointer_cast@VCamera@Engine@Spectre@@VComponent@23@@std@@YA?AV?$shared_ptr@VCamera@Engine@Spectre@@@0@AEBV?$shared_ptr@VComponent@Engine@Spectre@@@0@@Z @ 0x1800250F8
 * Callers:
 *     ??$GetComponent@VCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VCamera@Engine@Spectre@@@std@@XZ @ 0x180024ADC (--$GetComponent@VCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VCamera@E.c)
 *     ??$find_if@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@std@@V_lambda_632fb79f88d3ed46eeafc2127b86a5c0_@@@std@@YA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@0@V10@V10@V_lambda_632fb79f88d3ed46eeafc2127b86a5c0_@@@Z @ 0x180025228 (--$find_if@V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@_ea_180025228.c)
 *     ?CloneInternal@Camera@Engine@Spectre@@MEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x18005AED0 (-CloneInternal@Camera@Engine@Spectre@@MEBAXV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z.c)
 * Callees:
 *     ??$?0VComponent@Engine@Spectre@@@?$shared_ptr@VCamera@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VComponent@Engine@Spectre@@@1@PEAVCamera@Engine@Spectre@@@Z @ 0x1800246A4 (--$-0VComponent@Engine@Spectre@@@-$shared_ptr@VCamera@Engine@Spectre@@@std@@QEAA@AEBV-$shared_pt.c)
 *     __RTDynamicCast_0 @ 0x1800E38E0 (__RTDynamicCast_0.c)
 */

_QWORD *__fastcall std::dynamic_pointer_cast<Spectre::Engine::Camera,Spectre::Engine::Component>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rax

  v4 = _RTDynamicCast_0(
         *a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::Camera `RTTI Type Descriptor',
         0);
  if ( v4 )
  {
    std::shared_ptr<Spectre::Engine::Camera>::shared_ptr<Spectre::Engine::Camera>(a1, (__int64)a2, v4);
  }
  else
  {
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return a1;
}
