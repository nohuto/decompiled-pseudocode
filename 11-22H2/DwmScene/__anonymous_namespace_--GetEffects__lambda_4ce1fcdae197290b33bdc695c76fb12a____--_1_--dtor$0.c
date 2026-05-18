/*
 * XREFs of __anonymous_namespace_::GetEffects__lambda_4ce1fcdae197290b33bdc695c76fb12a____::_1_::dtor$0 @ 0x1800E84B3
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@QEAA@XZ @ 0x1800124EC (--1-$vector@V-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VLightPro.c)
 */

__int64 __fastcall _anonymous_namespace_::GetEffects__lambda_4ce1fcdae197290b33bdc695c76fb12a____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::~vector<std::shared_ptr<Spectre::Engine::LightProbe>>();
  }
  return result;
}
