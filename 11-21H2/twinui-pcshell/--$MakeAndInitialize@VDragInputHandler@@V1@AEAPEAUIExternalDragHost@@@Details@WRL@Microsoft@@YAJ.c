/*
 * XREFs of ??$MakeAndInitialize@VDragInputHandler@@V1@AEAPEAUIExternalDragHost@@@Details@WRL@Microsoft@@YAJPEAPEAVDragInputHandler@@AEAPEAUIExternalDragHost@@@Z @ 0x1804CFDDC
 * Callers:
 *     ?DragInputHandler_CreateInstance@@YAJPEAUIExternalDragHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1804D006C (-DragInputHandler_CreateInstance@@YAJPEAUIExternalDragHost@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??0DragInputHandler@@QEAA@XZ @ 0x1804CFEA0 (--0DragInputHandler@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VDragInputHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x1804D0170 (-InternalRelease@-$ComPtr@VDragInputHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@DragInputHandler@@QEAAJPEAUIExternalDragHost@@@Z @ 0x1804D0228 (-RuntimeClassInitialize@DragInputHandler@@QEAAJPEAUIExternalDragHost@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<DragInputHandler,DragInputHandler,IExternalDragHost * &>(
        DragInputHandler **a1,
        struct IExternalDragHost **a2)
{
  DragInputHandler *v4; // rax
  int v5; // esi
  DragInputHandler *v6; // rdi
  volatile int *v7; // rdx
  DragInputHandler *v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v4 = (DragInputHandler *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v4;
  if ( v4 )
  {
    v6 = DragInputHandler::DragInputHandler(v4);
    v9 = v6;
    v10 = 0LL;
    v5 = DragInputHandler::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((DragInputHandler *)((char *)v6 + 12), v7);
      *a1 = v6;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<DragInputHandler>::InternalRelease(&v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
