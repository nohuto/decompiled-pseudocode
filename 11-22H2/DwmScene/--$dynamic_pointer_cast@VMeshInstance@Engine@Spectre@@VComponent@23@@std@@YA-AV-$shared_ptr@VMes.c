/*
 * XREFs of ??$dynamic_pointer_cast@VMeshInstance@Engine@Spectre@@VComponent@23@@std@@YA?AV?$shared_ptr@VMeshInstance@Engine@Spectre@@@0@AEBV?$shared_ptr@VComponent@Engine@Spectre@@@0@@Z @ 0x18001402C
 * Callers:
 *     ??$GetComponent@VMeshInstance@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VMeshInstance@Engine@Spectre@@@std@@XZ @ 0x180013E78 (--$GetComponent@VMeshInstance@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VMe.c)
 *     ??$find_if@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@std@@V_lambda_46c47ee4cea26ed081544c70f7e204b7_@@@std@@YA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@0@V10@V10@V_lambda_46c47ee4cea26ed081544c70f7e204b7_@@@Z @ 0x180014094 (--$find_if@V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@_ea_180014094.c)
 *     ?CloneInternal@MeshInstance@Engine@Spectre@@EEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x18004B500 (-CloneInternal@MeshInstance@Engine@Spectre@@EEBAXV-$shared_ptr@VComponent@Engine@Spectre@@@std@@.c)
 * Callees:
 *     __RTDynamicCast_0 @ 0x1800E38E0 (__RTDynamicCast_0.c)
 */

__int64 *__fastcall std::dynamic_pointer_cast<Spectre::Engine::MeshInstance,Spectre::Engine::Component>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast_0(
         *a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::MeshInstance `RTTI Type Descriptor',
         0);
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v4 )
  {
    v5 = a2[1];
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    *a1 = v4;
    a1[1] = a2[1];
  }
  return a1;
}
