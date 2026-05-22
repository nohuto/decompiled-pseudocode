/*
 * XREFs of ??1?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@XZ @ 0x18007B3F4
 * Callers:
 *     _Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl_::_1_::dtor$9 @ 0x180055962 (_Microsoft--BamoImpl--BaseBamoConnectionImpl--BaseBamoConnectionImpl_--_1_--dtor$9.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800484B8 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wistd::unique_ptr<void,wil::process_heap_deleter>::~unique_ptr<void,wil::process_heap_deleter>(
        wil::details **a1,
        void *a2)
{
  wil::details *v2; // rax

  v2 = *a1;
  *a1 = 0LL;
  if ( v2 )
    wil::details::FreeProcessHeap(v2, a2);
}
