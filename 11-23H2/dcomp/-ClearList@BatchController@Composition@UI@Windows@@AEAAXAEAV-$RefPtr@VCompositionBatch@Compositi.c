/*
 * XREFs of ?ClearList@BatchController@Composition@UI@Windows@@AEAAXAEAV?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@@Z @ 0x18001C988
 * Callers:
 *     ?Shutdown@BatchController@Composition@UI@Windows@@QEAAXXZ @ 0x18001C940 (-Shutdown@BatchController@Composition@UI@Windows@@QEAAXXZ.c)
 * Callees:
 *     ??4?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionBatch@Composition@UI@Windows@@@Z @ 0x18001AFE8 (--4-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositi.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::BatchController::ClearList(
        Microsoft::WRL2::NestableRuntimeClass *a1,
        Microsoft::WRL2::NestableRuntimeClass **a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v3; // rbx
  __int64 result; // rax
  Microsoft::WRL2::NestableRuntimeClass *i; // [rsp+30h] [rbp+8h] BYREF

  for ( i = a1; ; result = Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(&i) )
  {
    v3 = *a2;
    if ( !*a2 )
      break;
    i = *a2;
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(i);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::operator=(
      a2,
      *((Microsoft::WRL2::NestableRuntimeClass **)*a2 + 24));
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock((char *)v3 + 184);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock((char *)v3 + 192);
  }
  return result;
}
