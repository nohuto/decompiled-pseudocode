/*
 * XREFs of ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x180018DCC
 * Callers:
 *     ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x18000C8F0 (-UpdateLayout@CVisual@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z @ 0x18000CC60 (-UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x1800177C4 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180018C60 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x180019650 (-UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CText@@UEAAJ_N@Z @ 0x180027ED0 (-UpdateLayout@CText@@UEAAJ_N@Z.c)
 *     ?StartAnimationShowOrHide@CAcrylicSheet@@QEAAJW4AcrylicSheetAnimationType@@@Z @ 0x18009AC60 (-StartAnimationShowOrHide@CAcrylicSheet@@QEAAJW4AcrylicSheetAnimationType@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VisualCollectionIterator::MoveNext(VisualCollectionIterator *this)
{
  char v1; // r8

  v1 = *((_BYTE *)this + 17);
  if ( *((_BYTE *)this + 16) )
  {
    if ( !v1 )
      ++*((_DWORD *)this + 3);
  }
  else
  {
    *((_DWORD *)this + 3) = 0;
    *((_BYTE *)this + 16) = 1;
  }
  if ( *((_DWORD *)this + 3) >= *(_DWORD *)(*(_QWORD *)this + 40LL) )
  {
    *((_BYTE *)this + 17) = 1;
    v1 = 1;
  }
  return v1 == 0;
}
