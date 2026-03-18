/*
 * XREFs of ?ReuseRealization@CDxHandleYUVBitmapRealization@@UEAAXAEAUCSM_REALIZATION_INFO@@@Z @ 0x180105040
 * Callers:
 *     ?ReuseRealization@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAXAEAUCSM_REALIZATION_INFO@@@Z @ 0x18010C890 (-ReuseRealization@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAXAEAUCSM_REALIZATION_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDxHandleYUVBitmapRealization::ReuseRealization(
        CDxHandleYUVBitmapRealization *this,
        struct CSM_REALIZATION_INFO *a2)
{
  *((_DWORD *)this - 67) = *((_DWORD *)a2 + 1);
}
