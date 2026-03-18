/*
 * XREFs of ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C0029294
 * Callers:
 *     imp_WdfWmiInstanceCreate @ 0x1C0027A20 (imp_WdfWmiInstanceCreate.c)
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00020FC (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qDd @ 0x1C0018F98 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     ??0FxWmiInstanceExternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAVFxWmiProvider@@@Z @ 0x1C0028A68 (--0FxWmiInstanceExternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAVFxWmiPr.c)
 *     WPP_IFR_SF_iid @ 0x1C00295EC (WPP_IFR_SF_iid.c)
 *     WPP_IFR_SF_iqdd @ 0x1C00296D8 (WPP_IFR_SF_iqdd.c)
 *     WPP_IFR_SF_qdqqqqd @ 0x1C0029900 (WPP_IFR_SF_qdqqqqd.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxWmiInstanceExternal::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxWmiProvider *Provider,
        _WDF_WMI_INSTANCE_CONFIG *WmiInstanceConfig,
        _WDF_OBJECT_ATTRIBUTES *InstanceAttributes,
        WDFWMIINSTANCE__ **WmiInstance,
        FxWmiInstanceExternal **Instance)
{
  FxWmiInstanceExternal **v6; // r12
  WDFWMIINSTANCE__ **v8; // r13
  unsigned int m_Flags; // eax
  char *_a2; // rdi
  __int64 result; // rax
  unsigned __int8 v15; // dl
  unsigned __int16 v16; // r9
  int v17; // ebp
  int (__fastcall *EvtWmiInstanceSetInstance)(WDFWMIINSTANCE__ *, unsigned int, void *); // rcx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rdi
  unsigned __int64 flags; // rax
  unsigned int v21; // ebx
  const void *v22; // rax
  int v23; // edx
  unsigned int v24; // r8d
  unsigned __int16 v25; // r9
  FxWmiInstanceExternal *v26; // rax
  __int64 v27; // rax
  FxObject *v28; // rbx
  const void *ObjectHandleUnchecked; // rax
  int v30; // edx
  const void **v31; // r8
  unsigned __int16 v32; // r9
  const _GUID *_a1; // [rsp+20h] [rbp-78h]
  int level; // [rsp+40h] [rbp-58h]
  int v35; // [rsp+58h] [rbp-40h]
  FxPoolTypeOrPoolFlags v36; // [rsp+60h] [rbp-38h] BYREF
  WDFWMIINSTANCE__ *hInstance; // [rsp+A8h] [rbp+10h] BYREF

  v6 = Instance;
  v8 = WmiInstance;
  hInstance = 0LL;
  m_Flags = Provider->m_Flags;
  *Instance = 0LL;
  *v8 = 0LL;
  _a2 = 0LL;
  if ( (m_Flags & 1) != 0
    && (WmiInstanceConfig->UseContextForQuery
     || WmiInstanceConfig->EvtWmiInstanceQueryInstance
     || WmiInstanceConfig->EvtWmiInstanceSetInstance
     || WmiInstanceConfig->EvtWmiInstanceSetItem
     || WmiInstanceConfig->EvtWmiInstanceExecuteMethod) )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(Provider);
    WPP_IFR_SF_qdqqqqd(
      FxDriverGlobals,
      v30,
      (unsigned int)v31,
      v32,
      _a1,
      ObjectHandleUnchecked,
      v30,
      v31[4],
      v31[5],
      v31[6],
      v31[7],
      v35);
    return 3221225485LL;
  }
  result = FxValidateObjectAttributes(FxDriverGlobals, InstanceAttributes, 1);
  v17 = result;
  if ( (int)result < 0 )
    return result;
  if ( WmiInstanceConfig->UseContextForQuery )
  {
    EvtWmiInstanceSetInstance = WmiInstanceConfig->EvtWmiInstanceSetInstance;
    if ( EvtWmiInstanceSetInstance || WmiInstanceConfig->EvtWmiInstanceSetItem )
    {
      WPP_IFR_SF_qid(
        FxDriverGlobals,
        2u,
        0x12u,
        0xCu,
        WPP_FxWmiInstance_cpp_Traceguids,
        EvtWmiInstanceSetInstance,
        (__int64)WmiInstanceConfig->EvtWmiInstanceSetItem,
        -1073741811);
    }
    else
    {
      if ( InstanceAttributes )
      {
        ContextTypeInfo = InstanceAttributes->ContextTypeInfo;
        if ( ContextTypeInfo )
        {
          flags = InstanceAttributes->ContextSizeOverride;
          _a2 = (char *)ContextTypeInfo->ContextSize;
          if ( flags )
          {
            if ( &_a2[flags] < _a2 )
            {
              v21 = -1073741675;
              WPP_IFR_SF_iid(FxDriverGlobals, v15, 0, v16, _a1, -1LL, flags, -1073741675);
              return v21;
            }
            _a2 += flags;
            v17 = 0;
          }
          if ( (unsigned __int64)_a2 > 0xFFFFFFFF )
          {
            v21 = -1073741675;
            WPP_IFR_SF_qDd(
              FxDriverGlobals,
              v15,
              0x12u,
              0xFu,
              WPP_FxWmiInstance_cpp_Traceguids,
              _a2,
              0xFFFFFFFF,
              0xC0000095);
            return v21;
          }
          if ( (unsigned __int64)_a2 < Provider->m_MinInstanceBufferSize )
          {
            v22 = (const void *)FxObject::GetObjectHandleUnchecked(Provider);
            WPP_IFR_SF_iqdd(FxDriverGlobals, v23, v24, v25, _a1, (__int64)_a2, v22, v23, level);
            return 3221225507LL;
          }
          goto LABEL_24;
        }
      }
      WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x12u, 0xDu, WPP_FxWmiInstance_cpp_Traceguids, InstanceAttributes, -1073741811);
    }
    return 3221225485LL;
  }
LABEL_24:
  *(_QWORD *)&v36.UsePoolType = 0LL;
  v36.u.PoolFlags = 64LL;
  v26 = (FxWmiInstanceExternal *)FxObjectHandleAllocCommon(
                                   FxDriverGlobals,
                                   &v36,
                                   0xB8uLL,
                                   0,
                                   InstanceAttributes,
                                   0,
                                   FxObjectTypeExternal);
  if ( !v26
    || (FxWmiInstanceExternal::FxWmiInstanceExternal(v26, FxDriverGlobals, WmiInstanceConfig, Provider),
        (v28 = (FxObject *)v27) == 0LL) )
  {
    v21 = -1073741670;
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0x12u, 0x11u, WPP_FxWmiInstance_cpp_Traceguids, 0xC000009A);
    return v21;
  }
  if ( _a2 )
    *(_DWORD *)(v27 + 176) = (_DWORD)_a2;
  if ( v17 < 0
    || (v17 = FxObject::Commit(
                (FxObject *)v27,
                InstanceAttributes,
                (void **)&hInstance,
                (_FX_DRIVER_GLOBALS *)Provider,
                1u),
        v17 < 0) )
  {
    FxObject::ClearEvtCallbacks(v28);
    v28->DeleteObject(v28);
  }
  else
  {
    *v8 = hInstance;
    *v6 = (FxWmiInstanceExternal *)v28;
  }
  return (unsigned int)v17;
}
