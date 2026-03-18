/*
 * XREFs of ?ClearAllBackdropVisualImages@CVisual@@AEAAXXZ @ 0x180024460
 * Callers:
 *     ?UpdateBackdropVisualImageForWindowBackgroundTreatment@CVisual@@AEAAXXZ @ 0x1800248FC (-UpdateBackdropVisualImageForWindowBackgroundTreatment@CVisual@@AEAAXXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004A410 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UpdateHasBackdropInputFlag@CVisual@@IEAAXPEBVCBackdropBrush@@@Z @ 0x180080E28 (-UpdateHasBackdropInputFlag@CVisual@@IEAAXPEBVCBackdropBrush@@@Z.c)
 * Callees:
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180043C4C (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800E7A7C (-clear_region@-$vector_facade@V-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@w.c)
 */

void __fastcall CVisual::ClearAllBackdropVisualImages(CVisual *this)
{
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v3; // rdi
  struct _LIST_ENTRY *i; // rbx

  TreeDataListHead = CVisual::GetTreeDataListHead(this);
  v3 = TreeDataListHead;
  if ( TreeDataListHead )
  {
    for ( i = TreeDataListHead->Flink; i != v3; i = i->Flink )
    {
      if ( ((char *)i[-12].Blink - (char *)i[-12].Flink) >> 3 )
        detail::vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>::clear_region(
          &i[-12],
          0LL);
    }
  }
  if ( (__int64)(*((_QWORD *)this + 64) - *((_QWORD *)this + 63)) >> 3 )
    detail::vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 504,
      0LL);
}
