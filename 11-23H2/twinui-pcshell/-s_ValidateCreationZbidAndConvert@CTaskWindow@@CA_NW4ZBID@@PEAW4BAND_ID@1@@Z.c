/*
 * XREFs of ?s_ValidateCreationZbidAndConvert@CTaskWindow@@CA_NW4ZBID@@PEAW4BAND_ID@1@@Z @ 0x1800485E4
 * Callers:
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1800481CC (-RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x1803C81E8 (-RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CTaskWindow::s_ValidateCreationZbidAndConvert(unsigned int a1, int *a2)
{
  char v2; // r8
  int v3; // ecx
  int v5; // eax

  *a2 = -1;
  if ( a1 != 1 && a1 != 8 )
  {
    if ( a1 > 0x10 )
      return 0;
    v5 = 73732;
    if ( !_bittest(&v5, a1) )
      return 0;
  }
  v2 = 1;
  if ( a1 == 1 )
  {
    v3 = a1 - 1 + 5;
  }
  else if ( a1 == 13 )
  {
    v3 = 4;
  }
  else
  {
    v3 = a1 - 8;
  }
  *a2 = v3;
  return v2;
}
