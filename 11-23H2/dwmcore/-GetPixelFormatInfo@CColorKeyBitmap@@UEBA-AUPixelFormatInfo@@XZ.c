/*
 * XREFs of ?GetPixelFormatInfo@CColorKeyBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x1802B67FC
 * Callers:
 *     ?GetPixelFormatInfo@CColorKeyBitmap@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x180123BB0 (-GetPixelFormatInfo@CColorKeyBitmap@@$4PPPPPPPM@A@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CColorKeyBitmap::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  void (__fastcall ***v3)(_QWORD); // rcx

  v3 = (void (__fastcall ***)(_QWORD))(*(_QWORD *)(a1 - 144)
                                     + 8LL
                                     + *(int *)(*(_QWORD *)(*(_QWORD *)(a1 - 144) + 8LL) + 8LL));
  (**v3)(v3);
  if ( *a2 == 88 )
    *a2 = 87;
  a2[1] = 1;
  return a2;
}
