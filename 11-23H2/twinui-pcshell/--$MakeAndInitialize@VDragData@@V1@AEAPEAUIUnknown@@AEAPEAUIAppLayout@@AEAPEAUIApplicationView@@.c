/*
 * XREFs of ??$MakeAndInitialize@VDragData@@V1@AEAPEAUIUnknown@@AEAPEAUIAppLayout@@AEAPEAUIApplicationView@@AEAW4DragDataFlags@WindowArrangementViewDragData@@@Details@WRL@Microsoft@@YAJPEAPEAVDragData@@AEAPEAUIUnknown@@AEAPEAUIAppLayout@@AEAPEAUIApplicationView@@AEAW4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x1805DB0A4
 * Callers:
 *     ?DragData_CreateInstance@@YAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags@WindowArrangementViewDragData@@AEBU_GUID@@PEAPEAX@Z @ 0x1805DB47C (-DragData_CreateInstance@@YAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??0DragData@@QEAA@XZ @ 0x1805DB198 (--0DragData@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ @ 0x1805DBDC4 (-InternalRelease@-$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@DragData@@QEAAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x1805DBEEC (-RuntimeClassInitialize@DragData@@QEAAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4Dra.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<DragData,DragData,IUnknown * &,IAppLayout * &,IApplicationView * &,enum WindowArrangementViewDragData::DragDataFlags &>(
        DragData **a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _DWORD *a5)
{
  DragData *v9; // rax
  int v10; // esi
  DragData *v11; // rdi
  volatile int *v12; // rdx
  DragData *v14; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (DragData *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v9;
  if ( v9 )
  {
    v11 = DragData::DragData(v9);
    v14 = v11;
    v10 = DragData::RuntimeClassInitialize(v11, *a2, *a3, *a4, *a5);
    if ( v10 >= 0 )
    {
      if ( v11 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((DragData *)((char *)v11 + 36), v12);
      *a1 = v11;
      v10 = 0;
    }
    Microsoft::WRL::ComPtr<AppResizeData>::InternalRelease(&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
