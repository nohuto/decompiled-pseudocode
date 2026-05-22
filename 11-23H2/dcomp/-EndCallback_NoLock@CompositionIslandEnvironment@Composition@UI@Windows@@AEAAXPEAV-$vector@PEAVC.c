/*
 * XREFs of ?EndCallback_NoLock@CompositionIslandEnvironment@Composition@UI@Windows@@AEAAXPEAV?$vector@PEAVCompositionIsland@Composition@UI@Windows@@V?$allocator@PEAVCompositionIsland@Composition@UI@Windows@@@std@@@std@@@Z @ 0x180113F6C
 * Callers:
 *     ?ChangeValues_NoLock@CompositionIslandEnvironment@Composition@UI@Windows@@QEAAXUfloat3@Numerics@Foundation@4@MM@Z @ 0x180088E74 (-ChangeValues_NoLock@CompositionIslandEnvironment@Composition@UI@Windows@@QEAAXUfloat3@Numerics@.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall Windows::UI::Composition::CompositionIslandEnvironment::EndCallback_NoLock(
        __int64 a1,
        Microsoft::WRL2::NestableRuntimeClass ***a2)
{
  Microsoft::WRL2::NestableRuntimeClass **i; // rbx
  Microsoft::WRL2::NestableRuntimeClass **result; // rax

  for ( i = *a2; i != a2[1]; ++i )
  {
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(*i);
    *i = 0LL;
  }
  result = *a2;
  a2[1] = *a2;
  return result;
}
