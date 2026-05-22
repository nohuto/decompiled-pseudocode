/*
 * XREFs of ??$_Move_unchecked@PEAUManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@PEAU123456@@std@@YAPEAUManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@PEAU123456@00@Z @ 0x180135A80
 * Callers:
 *     ?erase@?$vector@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@V?$allocator@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@std@@@std@@@2@@Z @ 0x18013C748 (-erase@-$vector@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@V.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall std::_Move_unchecked<Windows::UI::Composition::Interactions::InteractionTracker::ManipulationListEntry *,Windows::UI::Composition::Interactions::InteractionTracker::ManipulationListEntry *>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        Microsoft::WRL2::NestableRuntimeClass **a2,
        Microsoft::WRL2::NestableRuntimeClass **a3)
{
  Microsoft::WRL2::NestableRuntimeClass **i; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v6; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v7; // rax
  Microsoft::WRL2::NestableRuntimeClass *v8; // rcx
  Microsoft::WRL2::NestableRuntimeClass **v9; // rax
  Microsoft::WRL2::NestableRuntimeClass *v10; // rax
  Microsoft::WRL2::NestableRuntimeClass *v12; // [rsp+30h] [rbp+8h] BYREF

  for ( i = a1; i != a2; i += 2 )
  {
    v6 = 0LL;
    if ( &v12 != i )
    {
      v6 = *i;
      *i = 0LL;
    }
    v7 = *a3;
    *a3 = v6;
    v12 = v7;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v12);
    v8 = 0LL;
    v9 = i + 1;
    if ( &v12 != i + 1 )
    {
      v8 = *v9;
      *v9 = 0LL;
    }
    v10 = a3[1];
    a3[1] = v8;
    v12 = v10;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v12);
    a3 += 2;
  }
  return a3;
}
