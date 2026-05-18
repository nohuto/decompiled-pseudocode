/*
 * XREFs of ??$GetComponent@VAimer@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VAimer@Engine@Spectre@@@std@@XZ @ 0x1800625C0
 * Callers:
 *     ??$AddComponent@VAimer@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VAimer@Engine@Spectre@@@std@@XZ @ 0x180061878 (--$AddComponent@VAimer@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VAimer@Eng.c)
 *     ??$FindClone@VAimer@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VAimer@Engine@Spectre@@@std@@V?$shared_ptr@VScene@Engine@Spectre@@@4@V?$shared_ptr@VComponent@Engine@Spectre@@@4@@Z @ 0x180061E70 (--$FindClone@VAimer@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VAimer@Engine@Spe.c)
 * Callees:
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     ??$dynamic_pointer_cast@VAimer@Engine@Spectre@@VComponent@23@@std@@YA?AV?$shared_ptr@VAimer@Engine@Spectre@@@0@AEBV?$shared_ptr@VComponent@Engine@Spectre@@@0@@Z @ 0x180063008 (--$dynamic_pointer_cast@VAimer@Engine@Spectre@@VComponent@23@@std@@YA-AV-$shared_ptr@VAimer@Engi.c)
 *     ??$find_if@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@std@@V_lambda_b1e570b179c232161bd0302fc291af13_@@@std@@YA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@0@V10@V10@V_lambda_b1e570b179c232161bd0302fc291af13_@@@Z @ 0x1800636E0 (--$find_if@V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@_ea_1800636E0.c)
 */

_QWORD *__fastcall Spectre::Engine::SceneNode::GetComponent<Spectre::Engine::Aimer>(
        Spectre::Engine::SceneNode *a1,
        _QWORD *a2)
{
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  Spectre::Engine::SceneNode::VerifyReadAccess(a1);
  std::find_if<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<Spectre::Engine::Component>>>>,_lambda_b1e570b179c232161bd0302fc291af13_>(
    &v5,
    *((_QWORD *)a1 + 47),
    *((_QWORD *)a1 + 48));
  if ( v5 == *((_QWORD *)a1 + 48) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    std::dynamic_pointer_cast<Spectre::Engine::Aimer,Spectre::Engine::Component>(a2);
  }
  return a2;
}
