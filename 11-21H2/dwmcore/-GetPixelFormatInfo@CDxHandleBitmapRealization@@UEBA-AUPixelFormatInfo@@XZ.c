/*
 * XREFs of ?GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800C9D80
 * Callers:
 *     ?GetPixelFormatInfo@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x18010B8B0 (-GetPixelFormatInfo@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EBA?AUPixelFormatInfo@@XZ @ 0x18010B8D0 (-GetPixelFormatInfo@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EBA?AUPixelFormatInfo@@XZ @ 0x18010BFD0 (-GetPixelFormatInfo@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CDxHandleBitmapRealization@@$4PPPPPPPM@GI@EBA?AUPixelFormatInfo@@XZ @ 0x18010C270 (-GetPixelFormatInfo@CDxHandleBitmapRealization@@$4PPPPPPPM@GI@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CDxHandleBitmapRealization::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  void (__fastcall ***v5)(_QWORD); // rcx
  int v7; // ecx

  v2 = *(_QWORD *)(a1 - 64);
  if ( v2 )
  {
    v5 = (void (__fastcall ***)(_QWORD))(*(int *)(*(_QWORD *)(v2 + 16) + 12LL) + v2 + 16);
    (**v5)(v5);
  }
  else
  {
    *a2 = 0;
    v7 = 3;
    if ( *(_DWORD *)(a1 - 344) )
      v7 = *(_DWORD *)(a1 - 344);
    a2[1] = v7;
    a2[2] = *(_DWORD *)(a1 - 296);
  }
  return a2;
}
