/*
 * XREFs of ??4?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionBatch@Composition@UI@Windows@@@Z @ 0x18001AFE8
 * Callers:
 *     ?MigrateBatch@BatchController@Composition@UI@Windows@@AEAAXPEAVCompositionBatch@234@PEAV?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@W4BatchState@234@@Z @ 0x18000D204 (-MigrateBatch@BatchController@Composition@UI@Windows@@AEAAXPEAVCompositionBatch@234@PEAV-$RefPtr.c)
 *     ?NotifyObjectCompleted@BatchController@Composition@UI@Windows@@QEAAXPEAUBatchMember@234@@Z @ 0x18001AC30 (-NotifyObjectCompleted@BatchController@Composition@UI@Windows@@QEAAXPEAUBatchMember@234@@Z.c)
 *     ?ClearList@BatchController@Composition@UI@Windows@@AEAAXAEAV?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@@Z @ 0x18001C988 (-ClearList@BatchController@Composition@UI@Windows@@AEAAXAEAV-$RefPtr@VCompositionBatch@Compositi.c)
 *     ?End@CompositionBatch@Composition@UI@Windows@@QEAAJXZ @ 0x180078B18 (-End@CompositionBatch@Composition@UI@Windows@@QEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::operator=(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        Microsoft::WRL2::NestableRuntimeClass *a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx

  if ( *a1 != a2 )
  {
    if ( a2 )
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a2);
    v4 = *a1;
    *a1 = a2;
    if ( v4 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  }
  return a1;
}
