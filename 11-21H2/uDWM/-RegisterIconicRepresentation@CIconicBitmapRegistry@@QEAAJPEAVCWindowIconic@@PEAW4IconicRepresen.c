/*
 * XREFs of ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x18004B7E8
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18004A8F4 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x1801013D8 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 * Callees:
 *     ?CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z @ 0x1800131E4 (-CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x18004B894 (-_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PE.c)
 *     ?OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ @ 0x1800BED30 (-OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ.c)
 */

__int64 __fastcall CIconicBitmapRegistry::RegisterIconicRepresentation(
        CIconicBitmapRegistry *this,
        struct CWindowIconic *a2,
        enum IconicRepresentationType *a3)
{
  __int64 v4; // rsi
  bool v6; // r14
  HWND v8; // r15
  char CanAcceptBitmap; // r9
  char v10; // dl
  char v11; // cl
  char v12; // dl
  char v13; // r8
  struct CWindowIconic *v15; // rax

  v4 = *((_QWORD *)a2 + 9);
  v6 = *((_DWORD *)a2 + 4) == 2;
  v8 = *(HWND *)(v4 + 40);
  if ( *((_BYTE *)a2 + 20) )
  {
    v15 = (struct CWindowIconic *)*((_QWORD *)this + 12);
    if ( !v15 || v15 != a2 && (CIconicBitmapRegistry::OnLivePreviewDismissed(this), !*((_QWORD *)this + 12)) )
    {
      *((_QWORD *)this + 12) = a2;
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    }
    v12 = *((_BYTE *)this + 90);
    v13 = *((_BYTE *)this + 88);
    v11 = *((_BYTE *)this + 89);
    CanAcceptBitmap = (*(_BYTE *)(v4 + 666) & 2) != 0;
    v4 = -(__int64)(*(_QWORD *)(v4 + 832) != 0LL) - 1;
  }
  else
  {
    CanAcceptBitmap = CIconicBitmapRegistry::CanAcceptBitmap(this, *((struct CWindowData **)a2 + 9));
    v10 = *(_BYTE *)(v4 + 666);
    v11 = (v10 & 8) != 0;
    v12 = (v10 & 0x10) != 0;
    v13 = *(_QWORD *)(v4 + 432) != 0LL;
  }
  return CIconicBitmapRegistry::_RegisterIconicRepresentation(
           this,
           (struct CWindowData *)v4,
           v8,
           CanAcceptBitmap,
           v12,
           v13,
           v11,
           v6,
           a3);
}
