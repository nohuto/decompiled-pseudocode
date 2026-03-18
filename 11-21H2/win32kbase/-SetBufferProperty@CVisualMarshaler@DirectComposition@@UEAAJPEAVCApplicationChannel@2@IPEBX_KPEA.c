/*
 * XREFs of ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0084A60
 * Callers:
 *     ?SetBufferProperty@CCursorVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C02260A0 (-SetBufferProperty@CCursorVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEB.c)
 *     ?SetBufferProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C02262B0 (-SetBufferProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChann.c)
 * Callees:
 *     ?SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0006DBC (-SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEB.c)
 *     ?SetSizeHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0084B34 (-SetSizeHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z.c)
 *     ?SetOffsetHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0084B98 (-SetOffsetHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@.c)
 *     ?SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0084C00 (-SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_.c)
 *     ?SetRelativeSizeHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0086A58 (-SetRelativeSizeHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_K.c)
 *     ?SetHeatMapColorHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C021B99C (-SetHeatMapColorHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_K.c)
 *     ?SetRelativeOffsetHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C021B9F4 (-SetRelativeOffsetHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetBufferProperty(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        unsigned int *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // r10d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  unsigned int v19; // eax

  v6 = 0;
  v7 = a3 - 11;
  if ( !v7 )
    return (unsigned int)DirectComposition::CVisualMarshaler::SetTransformMatrixHelper(this, a2, a4, a5, a6);
  v8 = v7 - 1;
  if ( !v8 )
    return (unsigned int)DirectComposition::CVisualMarshaler::SetClipRectangleHelper(this, a2, a4, a5, a6);
  v9 = v8 - 3;
  if ( !v9 )
    return (unsigned int)DirectComposition::CVisualMarshaler::SetHeatMapColorHelper(this, a2, a4, a5, a6);
  v10 = v9 - 13;
  if ( !v10 )
    return (unsigned int)DirectComposition::CVisualMarshaler::SetOffsetHelper(this, a2, a4, a5, a6);
  v11 = v10 - 1;
  if ( !v11 )
    return (unsigned int)DirectComposition::CVisualMarshaler::SetSizeHelper(this, a2, a4, a5, a6);
  v14 = v11 - 1;
  if ( !v14 )
    return (unsigned int)DirectComposition::CVisualMarshaler::SetRelativeOffsetHelper(this, a2, a4, a5, a6);
  v15 = v14 - 1;
  if ( !v15 )
    return (unsigned int)DirectComposition::CVisualMarshaler::SetRelativeSizeHelper(this, a2, a4, a5, a6);
  v16 = v15 - 15;
  if ( v16 )
  {
    if ( v16 == 5 && a5 == 16 )
    {
      v17 = *(_QWORD *)a4 - *((_QWORD *)this + 31);
      if ( *(_QWORD *)a4 == *((_QWORD *)this + 31) )
        v17 = *((_QWORD *)a4 + 1) - *((_QWORD *)this + 32);
      if ( v17 )
      {
        *(_OWORD *)((char *)this + 248) = *(_OWORD *)a4;
        *((_DWORD *)this + 94) |= 8u;
LABEL_28:
        *a6 = 1;
        return v6;
      }
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  if ( a5 != 12 )
    return (unsigned int)-1073741811;
  v18 = *(_QWORD *)a4 - *((_QWORD *)this + 16);
  if ( *(_QWORD *)a4 == *((_QWORD *)this + 16) )
    v18 = a4[2] - (unsigned __int64)*((unsigned int *)this + 34);
  if ( v18 )
  {
    *((_QWORD *)this + 16) = *(_QWORD *)a4;
    v19 = a4[2];
    *((_DWORD *)this + 4) |= 0x40000000u;
    *((_DWORD *)this + 34) = v19;
    goto LABEL_28;
  }
  return v6;
}
