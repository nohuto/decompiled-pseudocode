/*
 * XREFs of __anonymous_namespace_::GetEffects__lambda_efc75f2d1525ae07ca13eee5dee967eb____::_1_::dtor$0 @ 0x1800E84E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@QEAA@XZ @ 0x1800124EC (--1-$vector@V-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VLightPro.c)
 */

__int64 __fastcall _anonymous_namespace_::GetEffects__lambda_efc75f2d1525ae07ca13eee5dee967eb____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::~vector<std::shared_ptr<Spectre::Engine::LightProbe>>();
  }
  return result;
}
