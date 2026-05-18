/*
 * XREFs of ??8DefaultSceneNodeTraversal@Engine@Spectre@@UEBA_NAEBVISceneNodeTraversal@12@@Z @ 0x180070D20
 * Callers:
 *     <none>
 * Callees:
 *     ??9type_info@@QEBA_NAEBV0@@Z @ 0x180017E2C (--9type_info@@QEBA_NAEBV0@@Z.c)
 */

bool __fastcall Spectre::Engine::DefaultSceneNodeTraversal::operator==(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax

  if ( a1 == a2 )
    return 1;
  v3 = ((__int64 (*)(void))__RTtypeid)();
  v4 = __RTtypeid(a2);
  return !type_info::operator!=(v3, v4);
}
