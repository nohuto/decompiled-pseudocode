/*
 * XREFs of imp_WdfCommonBufferCreateWithConfig @ 0x1C0029EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z @ 0x1C002A060 (-AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z.c)
 *     ??0FxCommonBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDmaEnabler@@@Z @ 0x1C002A1B8 (--0FxCommonBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDmaEnabler@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_DDd @ 0x1C0052E4C (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfCommonBufferCreateWithConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        unsigned __int64 Length,
        _WDF_COMMON_BUFFER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFCOMMONBUFFER__ **CommonBufferHandle)
{
  unsigned __int8 v8; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  WDFCOMMONBUFFER__ **v10; // rsi
  _FX_DRIVER_GLOBALS *v11; // rcx
  __int64 result; // rax
  _WDF_OBJECT_ATTRIBUTES *v13; // r15
  FxCommonBuffer *v14; // rax
  FxObject *v15; // rax
  FxCommonBuffer *v16; // rdi
  int CommonBuffer; // ebx
  unsigned int v18; // edi
  unsigned __int16 v19; // r9
  FxPoolTypeOrPoolFlags v20; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+38h]
  FxDmaEnabler *pDmaEnabler; // [rsp+90h] [rbp+40h] BYREF
  void *handle; // [rsp+A8h] [rbp+58h] BYREF

  pDmaEnabler = 0LL;
  handle = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaEnabler,
    0x1400u,
    (void **)&pDmaEnabler);
  m_Globals = pDmaEnabler->m_Globals;
  if ( !Config )
    FxVerifierNullBugCheck(pDmaEnabler->m_Globals, retaddr);
  if ( Config->Size != 8 )
  {
    v18 = -1073741820;
    WPP_IFR_SF_DDd(m_Globals, v8, 0xFu, 0xCu, WPP_FxCommonBufferAPI_cpp_Traceguids, Config->Size, 8, -1073741820);
    return v18;
  }
  v10 = CommonBufferHandle;
  v11 = pDmaEnabler->m_Globals;
  if ( !CommonBufferHandle )
    FxVerifierNullBugCheck(v11, retaddr);
  *CommonBufferHandle = 0LL;
  result = FxVerifierCheckIrqlLevel(v11, 0);
  if ( (int)result >= 0 )
  {
    if ( Length )
    {
      v13 = Attributes;
      result = FxValidateObjectAttributes(m_Globals, Attributes, 1);
      if ( (int)result < 0 )
        return result;
      *(_QWORD *)&v20.UsePoolType = 0LL;
      v20.u.PoolFlags = 64LL;
      v14 = (FxCommonBuffer *)FxObjectHandleAllocCommon(m_Globals, &v20, 0xB8uLL, 0, v13, 0, FxObjectTypeExternal);
      if ( v14 )
      {
        FxCommonBuffer::FxCommonBuffer(v14, m_Globals, pDmaEnabler);
        v16 = (FxCommonBuffer *)v15;
        if ( v15 )
        {
          CommonBuffer = FxObject::Commit(v15, (_FX_DRIVER_GLOBALS *)v13, &handle, pDmaEnabler, 1u);
          if ( CommonBuffer < 0
            || (v16->m_Alignment = Config->AlignmentRequirement,
                CommonBuffer = FxCommonBuffer::AllocateCommonBuffer(v16, Length),
                CommonBuffer < 0) )
          {
            FxObject::ClearEvtCallbacks(v16);
            v16->DeleteObject(v16);
          }
          else
          {
            *v10 = (WDFCOMMONBUFFER__ *)handle;
          }
          return (unsigned int)CommonBuffer;
        }
      }
      v18 = -1073741670;
      v19 = 14;
    }
    else
    {
      v18 = -1073741811;
      v19 = 13;
    }
    WPP_IFR_SF_d(m_Globals, 2u, 0xFu, v19, WPP_FxCommonBufferAPI_cpp_Traceguids, v18);
    return v18;
  }
  return result;
}
