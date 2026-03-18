/*
 * XREFs of ?MapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@HH@Z @ 0x1C00ABB30
 * Callers:
 *     <none>
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0002224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     McTemplateK0ppxt_EtwWriteTransfer @ 0x1C0032900 (McTemplateK0ppxt_EtwWriteTransfer.c)
 *     ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1C00ABBFC (-MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::MapApertureRange(
        VIDMM_APERTURE_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        struct _MDL *MemoryDescriptorList,
        int a7,
        int a8)
{
  unsigned int v11; // eax
  __int64 v12; // rdx
  unsigned __int64 v13; // r9
  VIDMM_GLOBAL *v14; // r11
  unsigned int v15; // [rsp+38h] [rbp-20h]

  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 436LL) & 4) == 0 )
  {
    v11 = VIDMM_SEGMENT::DriverId(this);
    VIDMM_GLOBAL::MapVideoApertureSegmentInternal(
      v14,
      *(_DWORD *)(v12 + 68) & 0x3F,
      a2,
      v11,
      a3,
      v13,
      MemoryDescriptorList,
      v15,
      a8,
      a7);
  }
  if ( bTracingEnabled && (byte_1C006E941 & 8) != 0 )
    McTemplateK0ppxt_EtwWriteTransfer((__int64)this, &EventApertureMapping, a3, a4, (char)a2, 0, a7);
  *(_QWORD *)(*((_QWORD *)this + 1) + 7568LL) += a3 << 12;
  *(_QWORD *)(*((_QWORD *)this + 1) + 40200LL) += a3;
}
