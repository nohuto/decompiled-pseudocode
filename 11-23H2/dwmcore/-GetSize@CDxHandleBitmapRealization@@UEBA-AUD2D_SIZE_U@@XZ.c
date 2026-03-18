/*
 * XREFs of ?GetSize@CDxHandleBitmapRealization@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1800D8CC8
 * Callers:
 *     ?GetSize@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EBA?AUD2D_SIZE_U@@XZ @ 0x1801220B0 (-GetSize@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EBA?AUD2D_SIZE_U@@XZ @ 0x1801220D0 (-GetSize@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EBA?AUD2D_SIZE_U@@XZ @ 0x1801227B0 (-GetSize@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CDxHandleBitmapRealization@@$4PPPPPPPM@GI@EBA?AUD2D_SIZE_U@@XZ @ 0x180122A30 (-GetSize@CDxHandleBitmapRealization@@$4PPPPPPPM@GI@EBA-AUD2D_SIZE_U@@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

struct D2D_SIZE_U __fastcall CDxHandleBitmapRealization::GetSize(CDxHandleBitmapRealization *this, _DWORD *a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this - 11);
  if ( v2 )
  {
    (**(void (__fastcall ***)(__int64))(v2 + 96))(v2 + 96);
  }
  else
  {
    *a2 = 0;
    a2[1] = 0;
  }
  return (struct D2D_SIZE_U)a2;
}
