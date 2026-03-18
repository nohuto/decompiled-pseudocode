/*
 * XREFs of GetSharedResourceData @ 0x1C00590F8
 * Callers:
 *     ?OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceMarshaler@2@@Z @ 0x1C005841C (-OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceM.c)
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00585EC (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
 * Callees:
 *     <none>
 */

char __fastcall GetSharedResourceData(unsigned int a1, __int64 a2)
{
  char v2; // r8
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  __int64 (__fastcall *v7)(); // rax
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  __int64 (__fastcall *v12)(); // rax
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx

  *(_DWORD *)a2 = a1;
  v2 = 1;
  if ( a1 <= 0x7E )
  {
    if ( a1 == 126 )
    {
      *(_QWORD *)(a2 + 8) = CreateSharedReadPrimitiveColorMarshaler;
      v12 = CreateSharedWritePrimitiveColorMarshaler;
      goto LABEL_17;
    }
    if ( a1 > 0x4E )
    {
      v9 = a1 - 87;
      if ( !v9 )
      {
        *(_QWORD *)(a2 + 8) = CreateSharedReadInteractionMarshaler;
        v12 = CreateSharedInteractionMarshaler;
        goto LABEL_17;
      }
      v10 = v9 - 5;
      if ( !v10 )
      {
        *(_QWORD *)(a2 + 8) = CreateSharedReadLegacyAnimationTriggerMarshaler;
        v12 = CreateSharedWriteLegacyAnimationTriggerMarshaler;
        goto LABEL_17;
      }
      v11 = v10 - 12;
      if ( !v11 )
      {
        *(_QWORD *)(a2 + 8) = CreateSharedReadTransformMarshaler;
        v12 = CreateSharedManipulationTransformMarshaler;
LABEL_17:
        *(_QWORD *)(a2 + 16) = v12;
        return v2;
      }
      v13 = v11 - 3;
      if ( v13 )
      {
        if ( v13 != 1 )
          return 0;
        v12 = CreateSharedMatrixTransform3DMarshaler;
      }
      else
      {
        v12 = CreateSharedMatrixTransformMarshaler;
      }
LABEL_28:
      *(_QWORD *)(a2 + 8) = 0LL;
      goto LABEL_17;
    }
    switch ( a1 )
    {
      case 0x4Eu:
        *(_QWORD *)(a2 + 8) = CreateSharedReadHolographicInteropTextureMarshaler;
        v12 = CreateSharedHolographicInteropTextureMarshaler;
        goto LABEL_17;
      case 0x22u:
        v7 = CreateSharedReadCompositionLightMarshaler;
        break;
      case 0x20u:
        v12 = CreateSharedCompositionDistantLightMarshaler;
        goto LABEL_28;
      case 0x27u:
        v12 = CreateSharedCompositionSpotLightMarshaler;
        goto LABEL_28;
      case 0x1Eu:
        v12 = CreateSharedCompositionAmbientLightMarshaler;
        goto LABEL_28;
      case 0x24u:
        v12 = CreateSharedCompositionPointLightMarshaler;
        goto LABEL_28;
      case 0x2Du:
        v7 = CreateSharedReadContentMarshaler;
        break;
      default:
        return 0;
    }
LABEL_24:
    *(_QWORD *)(a2 + 16) = 0LL;
    goto LABEL_9;
  }
  if ( a1 <= 0xC3 )
  {
    if ( a1 == 195 )
    {
      v7 = CreateHostVisualMarshaler;
      goto LABEL_8;
    }
    v14 = a1 - 129;
    if ( !v14 )
    {
      *(_QWORD *)(a2 + 8) = CreateSharedClientProjectedShadowCasterMarshaler;
      v12 = CreateSharedHostProjectedShadowCasterMarshaler;
      goto LABEL_17;
    }
    v15 = v14 - 7;
    if ( !v15 )
    {
      v7 = CreateSharedReadCaptureControllerMarshaler;
      goto LABEL_53;
    }
    v16 = v15 - 6;
    if ( !v16 )
    {
      *(_QWORD *)(a2 + 8) = CreateSharedReadRemoteAppRenderTargetMarshaler;
      v12 = CreateSharedWriteRemoteAppRenderTargetMarshaler;
      goto LABEL_17;
    }
    v17 = v16 - 8;
    if ( !v17 )
    {
      *(_QWORD *)(a2 + 8) = CreateSharedReadScalarMarshaler;
      v12 = CreateSharedWriteScalarMarshaler;
      goto LABEL_17;
    }
    if ( v17 - 35 <= 1 )
    {
      v7 = CreateSharedReadTransformMarshaler;
      goto LABEL_24;
    }
    return 0;
  }
  v3 = a1 - 199;
  if ( !v3 )
  {
    v7 = CreateSharedReadVisualReferenceMarshaler;
    goto LABEL_24;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v12 = CreateSharedVisualReferenceControllerMarshaler;
    goto LABEL_28;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    *(_QWORD *)(a2 + 8) = CreateSharedReadSurfaceMarshaler;
    v12 = CreateSharedVisualSurfaceMarshaler;
    goto LABEL_17;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( v6 != 3 )
      return 0;
    v7 = CreateSharedWriteCaptureControllerMarshaler;
LABEL_53:
    *(_DWORD *)a2 = 17;
    goto LABEL_8;
  }
  *(_DWORD *)a2 = 195;
  v7 = CreateVisualTargetMarshaler;
LABEL_8:
  *(_QWORD *)(a2 + 16) = v7;
LABEL_9:
  *(_QWORD *)(a2 + 8) = v7;
  return v2;
}
