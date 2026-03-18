/*
 * XREFs of bDynamicProcessAllDriverRealizations @ 0x1C00617A0
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00760D4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     bDynamicModeChange @ 0x1C00C9250 (bDynamicModeChange.c)
 * Callees:
 *     vDynamicConvertNewSurfaceDCs @ 0x1C0061570 (vDynamicConvertNewSurfaceDCs.c)
 *     HmgSafeNextObjt @ 0x1C0061900 (HmgSafeNextObjt.c)
 *     pProcessDfbSurfaces2 @ 0x1C0061C30 (pProcessDfbSurfaces2.c)
 *     IsPDEVOBJ_bDisableHalftoneSupported @ 0x1C00C1998 (IsPDEVOBJ_bDisableHalftoneSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bDynamicProcessAllDriverRealizations(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  unsigned int v6; // r14d
  bool v7; // si
  __int64 v8; // rbp
  __int64 Objt; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  void (__fastcall *v12)(__int64); // rsi
  __int64 v13; // r8
  __int64 v14; // rax
  int v16; // ecx
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  v19 = a1;
  v4 = a2;
  v6 = 1;
  v7 = _bittest((const signed __int32 *)(a1 + 2096), 0x10u)
    && a2
    && _bittest((const signed __int32 *)(a2 + 2096), 0x10u);
  v8 = 0LL;
  while ( 1 )
  {
    LOBYTE(a2) = 5;
    Objt = HmgSafeNextObjt(v8, a2);
    if ( !Objt )
      break;
    v8 = *(_QWORD *)Objt;
    if ( *(_QWORD *)(Objt + 48) == a1
      && (*(_DWORD *)(Objt + 112) & 0x800000) != 0
      && !*(_QWORD *)(Objt + 560)
      && *(_QWORD *)(Objt + 40)
      && (a3 || (*(_DWORD *)(Objt + 116) & 1) == 0)
      && (!v7 || (*(_DWORD *)(Objt + 116) & 4) == 0)
      && !pProcessDfbSurfaces2(Objt, 0, 0, 1, v4) )
    {
      v6 = 0;
    }
  }
  vDynamicConvertNewSurfaceDCs(a1, 0LL, v10);
  if ( v6 )
  {
    v12 = *(void (__fastcall **)(__int64))(v19 + 3008);
    if ( v12 )
    {
      v16 = *(_DWORD *)(a1 + 40);
      if ( (v16 & 0x800000) != 0 )
        v17 = *(_QWORD *)(*(_QWORD *)(a1 + 3496) + 1520LL);
      else
        v17 = *(_QWORD *)(a1 + 1520);
      if ( v17 )
      {
        do
        {
          v12(v17);
          *(_QWORD *)(v17 + 48) = 0LL;
          v17 = *(_QWORD *)(v17 + 672);
        }
        while ( v17 );
        v16 = *(_DWORD *)(a1 + 40);
      }
      if ( (v16 & 0x800000) != 0 )
        v18 = *(_QWORD *)(*(_QWORD *)(a1 + 3496) + 1512LL);
      else
        v18 = *(_QWORD *)(a1 + 1512);
      while ( v18 )
      {
        v12(v18);
        *(_QWORD *)(v18 + 48) = 0LL;
        v18 = *(_QWORD *)(v18 + 672);
      }
    }
    v13 = 0LL;
    while ( 1 )
    {
      LOBYTE(v11) = 16;
      v14 = HmgSafeNextObjt(v13, v11);
      if ( !v14 )
        break;
      v13 = *(_QWORD *)v14;
      *(_DWORD *)(v14 + 112) = -1;
      *(_DWORD *)(v14 + 44) = _InterlockedIncrement((volatile signed __int32 *)&BRUSH::_ulGlobalBrushUnique);
    }
    if ( *(_QWORD *)(a1 + 1504) && (int)IsPDEVOBJ_bDisableHalftoneSupported(0LL) >= 0 && qword_1C029B458 )
      qword_1C029B458(&v19);
  }
  return v6;
}
