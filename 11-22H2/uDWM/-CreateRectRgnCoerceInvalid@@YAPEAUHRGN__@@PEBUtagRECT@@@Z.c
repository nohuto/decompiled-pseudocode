/*
 * XREFs of ?CreateRectRgnCoerceInvalid@@YAPEAUHRGN__@@PEBUtagRECT@@@Z @ 0x180012C84
 * Callers:
 *     ?ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z @ 0x18001B04C (-ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z.c)
 *     ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x1800C9B58 (-_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResourc.c)
 * Callees:
 *     <none>
 */

HRGN __fastcall CreateRectRgnCoerceInvalid(const struct tagRECT *a1)
{
  LONG bottom; // r9d
  int v3; // ecx
  LONG right; // r8d
  LONG top; // edx
  LONG left; // eax

  bottom = a1->bottom;
  v3 = 0x7FFFFFF;
  if ( bottom <= -134217728 )
  {
    bottom = -134217728;
  }
  else if ( bottom >= 0x7FFFFFF )
  {
    bottom = 0x7FFFFFF;
  }
  right = a1->right;
  if ( right <= -134217728 )
  {
    right = -134217728;
  }
  else if ( right >= 0x7FFFFFF )
  {
    right = 0x7FFFFFF;
  }
  top = a1->top;
  if ( top <= -134217728 )
  {
    top = -134217728;
  }
  else if ( top >= 0x7FFFFFF )
  {
    top = 0x7FFFFFF;
  }
  left = a1->left;
  if ( left <= -134217728 )
  {
    left = -134217728;
    goto LABEL_12;
  }
  if ( left < 0x7FFFFFF )
LABEL_12:
    v3 = left;
  return CreateRectRgn(v3, top, right, bottom);
}
