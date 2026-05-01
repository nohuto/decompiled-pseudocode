/*
 * XREFs of ?Release@?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@AEAAKXZ @ 0x18022BD24
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18022BC24 (--1-$com_ptr_t@V-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@Uerr_returnco.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18022BE18 (-ensure_data@-$tip_test@V-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18022BF60 (-reset@-$com_ptr_t@V-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@Uerr_retu.c)
 * Callees:
 *     ??1?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@QEAA@XZ @ 0x18022BC44 (--1-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 68);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>::~merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
