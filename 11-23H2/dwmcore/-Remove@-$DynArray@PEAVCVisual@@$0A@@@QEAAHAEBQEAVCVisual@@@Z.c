/*
 * XREFs of ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x1800F3388
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18008375C (--1CVisual@@MEAA@XZ.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1800EF170 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPA.c)
 *     ?RemoveExcludedTargetVisual@CCompositionLight@@UEAAXPEAVCVisual@@@Z @ 0x180119C70 (-RemoveExcludedTargetVisual@CCompositionLight@@UEAAXPEAVCVisual@@@Z.c)
 *     ?RemoveTargetVisual@CCompositionLight@@UEAAXPEAVCVisual@@@Z @ 0x180119CA0 (-RemoveTargetVisual@CCompositionLight@@UEAAXPEAVCVisual@@@Z.c)
 *     ?RemoveExcludedTargetVisual@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z @ 0x180119CD0 (-RemoveExcludedTargetVisual@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z.c)
 *     ?RemoveTargetVisual@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z @ 0x180119D10 (-RemoveTargetVisual@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z.c)
 *     ?RemoveTarget@CCompositionLight@@UEAAXPEAVCVisual@@@Z @ 0x180219350 (-RemoveTarget@CCompositionLight@@UEAAXPEAVCVisual@@@Z.c)
 *     ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180225DC0 (-AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?RemoveTarget@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z @ 0x1802267A0 (-RemoveTarget@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<CVisual *,0>::Remove(__int64 *a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r9
  __int64 i; // r11
  __int64 result; // rax
  __int64 v6; // rdx

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0LL;
  for ( i = *a1; (unsigned int)v3 < v2; v3 = (unsigned int)(v3 + 1) )
  {
    if ( *a2 == *(_QWORD *)(i + 8 * v3) )
      break;
  }
  if ( (unsigned int)v3 >= v2 )
    return 0LL;
  for ( ; (unsigned int)v3 < v2 - 1; v2 = *((_DWORD *)a1 + 6) )
  {
    v6 = (unsigned int)v3;
    LODWORD(v3) = v3 + 1;
    *(_QWORD *)(i + 8 * v6) = *(_QWORD *)(i + 8LL * (unsigned int)v3);
  }
  result = 1LL;
  *((_DWORD *)a1 + 6) = v2 - 1;
  return result;
}
