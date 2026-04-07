/*
 * XREFs of ?CreateRoundRectRgnCoerceInvalid@@YAPEAUHRGN__@@HHHHHH@Z @ 0x1800C23C8
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180028C20 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x1800C5364 (-_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResourc.c)
 * Callees:
 *     <none>
 */

HRGN __fastcall CreateRoundRectRgnCoerceInvalid(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r9d
  int v9; // ecx
  int v10; // r8d
  int v11; // edx

  v6 = a4 + 1;
  v9 = 0x7FFFFFF;
  if ( v6 <= -134217728 )
  {
    v6 = -134217728;
  }
  else if ( v6 >= 0x7FFFFFF )
  {
    v6 = 0x7FFFFFF;
  }
  v10 = a3 + 1;
  if ( v10 <= -134217728 )
  {
    v10 = -134217728;
  }
  else if ( v10 >= 0x7FFFFFF )
  {
    v10 = 0x7FFFFFF;
  }
  v11 = 0x7FFFFFF;
  if ( a2 <= -134217728 )
    a2 = -134217728;
  if ( a2 < 0x7FFFFFF )
    v11 = a2;
  if ( a1 <= -134217728 )
    a1 = -134217728;
  if ( a1 < 0x7FFFFFF )
    v9 = a1;
  return CreateRoundRectRgn(v9, v11, v10, v6, a5, a6);
}
