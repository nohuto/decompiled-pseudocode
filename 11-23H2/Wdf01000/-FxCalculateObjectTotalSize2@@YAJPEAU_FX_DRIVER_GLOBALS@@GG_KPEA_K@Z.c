/*
 * XREFs of ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00028FC
 * Callers:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C003E20C (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0042F1C (-InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z @ 0x1C0043310 (-FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0043354 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 * Callees:
 *     WPP_IFR_SF_DDid @ 0x1C004357C (WPP_IFR_SF_DDid.c)
 */

__int64 __fastcall FxCalculateObjectTotalSize2(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 RawObjectSize,
        unsigned __int16 ExtraSize,
        unsigned __int64 ContextSize,
        unsigned __int64 *Total)
{
  unsigned int globals; // ebp
  unsigned int level; // esi
  unsigned __int64 v8; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r9
  unsigned int id; // ebx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  const _GUID *v17; // [rsp+20h] [rbp-48h]

  globals = RawObjectSize;
  level = ExtraSize;
  v8 = -1LL;
  v10 = -1LL;
  v11 = ((globals + 15) & 0xFFF0LL) + ((level + 15) & 0xFFF0LL);
  if ( v11 + 48 >= v11 )
    v10 = v11 + 48;
  id = v11 + 48 < v11 ? 0xC0000095 : 0;
  *Total = v10;
  if ( v11 + 48 < v11 )
  {
LABEL_17:
    WPP_IFR_SF_DDid(FxDriverGlobals, v10, v8, v11, v17, globals, level, ContextSize, id);
    return id;
  }
  if ( !ContextSize )
  {
LABEL_5:
    if ( (id & 0x80000000) == 0 )
    {
      if ( !FxDriverGlobals->FxVerifierHandle )
        return id;
      if ( v10 + 48 >= v10 )
        v8 = v10 + 48;
      id = v10 + 48 < v10 ? 0xC0000095 : 0;
      *Total = v8;
      if ( v10 + 48 >= v10 )
        return id;
    }
    goto LABEL_17;
  }
  v14 = (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v14 >= ContextSize )
  {
    v15 = v10 + v14;
    v16 = -1LL;
    if ( v15 >= v10 )
      v16 = v15;
    id = v15 < v10 ? 0xC0000095 : 0;
    *Total = v16;
    v10 = v16;
    goto LABEL_5;
  }
  return 3221225621LL;
}
