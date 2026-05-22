/*
 * XREFs of ?Shutdown@AnimationBindingManager@Composition@UI@Windows@@QEAAXXZ @ 0x180066D98
 * Callers:
 *     ?Destroy@CompositorCommon@Composition@UI@Windows@@MEAAXXZ @ 0x180064ED0 (-Destroy@CompositorCommon@Composition@UI@Windows@@MEAAXXZ.c)
 * Callees:
 *     ?UnregisterAllAnimationTargets@AnimationBindingManager@Composition@UI@Windows@@QEAAXI@Z @ 0x180029030 (-UnregisterAllAnimationTargets@AnimationBindingManager@Composition@UI@Windows@@QEAAXI@Z.c)
 *     ?RemovePropertyChangeCallback@AnimationBindingManager@Composition@UI@Windows@@AEAAXUObjectPropertyReference@234@PEAI@Z @ 0x180071C28 (-RemovePropertyChangeCallback@AnimationBindingManager@Composition@UI@Windows@@AEAAXUObjectProper.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::AnimationBindingManager::Shutdown(PRTL_GENERIC_TABLE Table)
{
  struct _RTL_GENERIC_TABLE *i; // rcx
  unsigned int *v3; // rax
  int *v4; // rax
  int v5; // ecx
  int v6; // eax
  char v7; // [rsp+40h] [rbp+20h] BYREF
  PVOID RestartKey; // [rsp+48h] [rbp+28h] BYREF
  int v9; // [rsp+50h] [rbp+30h] BYREF
  int v10; // [rsp+54h] [rbp+34h]

  if ( Table[4].TableRoot )
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  for ( i = Table + 1; ; i = Table + 1 )
  {
    RestartKey = 0LL;
    v3 = (unsigned int *)RtlEnumerateGenericTableWithoutSplaying(i, &RestartKey);
    if ( !v3 )
      break;
    Windows::UI::Composition::AnimationBindingManager::UnregisterAllAnimationTargets(Table, *v3);
  }
  while ( 1 )
  {
    RestartKey = 0LL;
    v4 = (int *)RtlEnumerateGenericTableWithoutSplaying(Table + 2, &RestartKey);
    if ( !v4 )
      break;
    v5 = *v4;
    v6 = v4[1];
    v9 = v5;
    v10 = v6;
    Windows::UI::Composition::AnimationBindingManager::RemovePropertyChangeCallback(Table, &v9, &v7);
  }
  LODWORD(Table[4].InsertOrderList.Flink) = 1;
}
