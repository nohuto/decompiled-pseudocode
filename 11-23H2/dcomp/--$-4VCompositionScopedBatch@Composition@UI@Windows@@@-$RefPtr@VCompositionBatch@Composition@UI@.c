/*
 * XREFs of ??$?4VCompositionScopedBatch@Composition@UI@Windows@@@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionScopedBatch@Composition@UI@Windows@@@Z @ 0x18015ADE8
 * Callers:
 *     ?CreateScopedBatch@BatchController@Composition@UI@Windows@@QEAAXPEAPEAVCompositionScopedBatch@234@@Z @ 0x180016554 (-CreateScopedBatch@BatchController@Composition@UI@Windows@@QEAAXPEAPEAVCompositionScopedBatch@23.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::operator=<Windows::UI::Composition::CompositionScopedBatch>(
        volatile signed __int32 **a1,
        Microsoft::WRL2::NestableRuntimeClass *a2)
{
  volatile signed __int32 *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a2);
  v5 = *a1;
  *a1 = (volatile signed __int32 *)a2;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(&v5, (__int64)a2);
  return a1;
}
