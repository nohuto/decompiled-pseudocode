/*
 * XREFs of ?Add@?$Set@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z @ 0x1C0010E48
 * Callers:
 *     ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C01A95D4 (-AddMode@DMMVIDPNTARGETMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@QEAAEQEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0010EB8 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U-$DoubleLinkedListElementDelete.c)
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C0010F08 (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

char __fastcall Set<DMMVIDPNTARGETMODE>::Add(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx
  int v7; // edx
  int v8; // ecx
  int v9; // r8d

  if ( Set<DMMVIDPNTARGETMODE>::FindByValue() )
    return 0;
  if ( (unsigned __int8)DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::ContainsByReference(
                          a1 + 8,
                          a2) )
  {
    WdLogSingleEntry1(1LL, 108LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v8,
        v7,
        v9,
        0,
        2,
        -1,
        (__int64)L"bInsertTailStatus == TRUE",
        108LL,
        0LL,
        0LL,
        0LL,
        0LL);
  }
  else
  {
    v4 = *(_QWORD **)(a1 + 32);
    v5 = (_QWORD *)(a2 + 8);
    if ( *v4 != a1 + 24 )
      __fastfail(3u);
    *v5 = a1 + 24;
    *(_QWORD *)(a2 + 16) = v4;
    *v4 = v5;
    *(_QWORD *)(a1 + 32) = v5;
    ++*(_QWORD *)(a1 + 40);
  }
  return 1;
}
