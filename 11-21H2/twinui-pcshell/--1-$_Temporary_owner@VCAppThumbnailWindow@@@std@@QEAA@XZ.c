/*
 * XREFs of ??1?$_Temporary_owner@VCAppThumbnailWindow@@@std@@QEAA@XZ @ 0x180495CB0
 * Callers:
 *     _std::shared_ptr_CAppThumbnailWindow_::shared_ptr_CAppThumbnailWindow__CAppThumbnailWindow_0__::_1_::dtor$0 @ 0x18049539B (_std--shared_ptr_CAppThumbnailWindow_--shared_ptr_CAppThumbnailWindow__CAppThumbnailWindow_0__--.c)
 * Callees:
 *     ??_GCAppThumbnailWindow@@QEAAPEAXI@Z @ 0x1804963F4 (--_GCAppThumbnailWindow@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::_Temporary_owner<CAppThumbnailWindow>::~_Temporary_owner<CAppThumbnailWindow>(
        CAppThumbnailWindow **a1,
        unsigned int a2)
{
  CAppThumbnailWindow *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return CAppThumbnailWindow::`scalar deleting destructor'(v2, a2);
  return result;
}
