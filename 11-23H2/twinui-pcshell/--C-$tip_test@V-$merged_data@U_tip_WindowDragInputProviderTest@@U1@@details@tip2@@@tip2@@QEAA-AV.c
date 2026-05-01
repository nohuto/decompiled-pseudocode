/*
 * XREFs of ??C?$tip_test@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@1@XZ @ 0x18022BCE8
 * Callers:
 *     ?OnWindowArrangementMessage@WindowDragInputProvider@@AEAA_JI_K_J@Z @ 0x18068BB10 (-OnWindowArrangementMessage@WindowDragInputProvider@@AEAA_JI_K_J@Z.c)
 * Callees:
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x180086D28 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18022BE18 (-ensure_data@-$tip_test@V-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip.c)
 */

__int64 *__fastcall tip2::tip_test<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>::operator->(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx

  v3 = (__int64 *)tip2::tip_test<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>::ensure_data();
  v4 = *v3;
  *a2 = *v3;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 272));
  tip2::details::shared_data<0,0,1>::begin_update(*a2 + 8);
  return a2;
}
