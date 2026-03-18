/*
 * XREFs of imp_WdfLookasideListCreate @ 0x1C0066A70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0005890 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C000FDA8 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C002D504 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qqqqd @ 0x1C00668D4 (WPP_IFR_SF_qqqqd.c)
 *     ??0FxPagedLookasideListFromPool@@QEAA@PEAU_FX_DRIVER_GLOBALS@@KPEAVFxDeviceBase@@1@Z @ 0x1C006A3E4 (--0FxPagedLookasideListFromPool@@QEAA@PEAU_FX_DRIVER_GLOBALS@@KPEAVFxDeviceBase@@1@Z.c)
 *     ??0FxLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GK@Z @ 0x1C006B15C (--0FxLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GK@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfLookasideListCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *LookasideAttributes,
        unsigned __int64 BufferSize,
        _POOL_TYPE PoolType,
        _WDF_OBJECT_ATTRIBUTES *MemoryAttributes,
        unsigned int PoolTag,
        WDFLOOKASIDE__ **PLookaside)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int64 v8; // r15
  int v11; // eax
  _WDF_OBJECT_ATTRIBUTES *v12; // r13
  _FX_DRIVER_GLOBALS *v13; // rcx
  void *ParentObject; // rdx
  WDFLOOKASIDE__ **v15; // r12
  __int64 result; // rax
  unsigned int Tag; // esi
  unsigned __int16 v18; // dx
  FxLookasideList *v19; // rdi
  FxLookasideList *v20; // rax
  void (__fastcall *const *v21)(); // rax
  FxDeviceBase *v22; // r15
  FxDeviceBase *v23; // rdi
  const void *ObjectHandleUnchecked; // rax
  const void *_a4; // rdx
  FxPagedLookasideListFromPool *v26; // rax
  int v27; // ebx
  FxPoolTypeOrPoolFlags v28; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+38h]
  FxObject *pParent; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int64 v31; // [rsp+B0h] [rbp+50h]

  v31 = BufferSize;
  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  v8 = BufferSize;
  pParent = 0LL;
  v11 = FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], LookasideAttributes, 0);
  v12 = MemoryAttributes;
  v13 = m_Globals;
  if ( v11 < 0 )
  {
    if ( (int)FxValidateObjectAttributesForParentHandle(m_Globals, MemoryAttributes, 0) < 0 )
      goto LABEL_6;
    ParentObject = v12->ParentObject;
    v13 = m_Globals;
  }
  else
  {
    ParentObject = LookasideAttributes->ParentObject;
  }
  FxObjectHandleGetPtr(v13, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
  m_Globals = pParent->m_Globals;
LABEL_6:
  v15 = PLookaside;
  if ( !PLookaside )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  PLookaside = 0LL;
  *v15 = 0LL;
  if ( !v8 )
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xAu, WPP_FxLookasideListAPI_cpp_Traceguids, -1073741811);
    return 3221225485LL;
  }
  result = FxValidateObjectAttributes(m_Globals, LookasideAttributes, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(m_Globals, v12, 0);
    if ( (int)result >= 0 )
    {
      Tag = PoolTag;
      if ( !PoolTag )
        Tag = m_Globals->Tag;
      if ( m_Globals->FxVerifierOn && FxLibraryGlobals.VfCheckNxPoolType )
        FxLibraryGlobals.VfCheckNxPoolType(PoolType, retaddr, Tag);
      if ( FxIsPagedPoolType(PoolType) )
      {
        result = FxVerifierCheckIrqlLevel(m_Globals, 0);
        if ( (int)result < 0 )
          return result;
        v22 = FxDeviceBase::_SearchForDevice(m_Globals, LookasideAttributes);
        v23 = FxDeviceBase::_SearchForDevice(m_Globals, v12);
        if ( v22 && v23 && v22 != v23 )
        {
          FxObject::GetObjectHandleUnchecked(v23);
          ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(v22);
          WPP_IFR_SF_qqqqd(
            m_Globals,
            (unsigned __int8)_a4,
            0x12u,
            0xBu,
            WPP_FxLookasideListAPI_cpp_Traceguids,
            ObjectHandleUnchecked,
            LookasideAttributes->ParentObject,
            _a4,
            v12->ParentObject,
            -1073741811);
          return 3221225485LL;
        }
        *(_QWORD *)&v28.UsePoolType = 0LL;
        v28.u.PoolFlags = 64LL;
        v26 = (FxPagedLookasideListFromPool *)FxObjectHandleAllocCommon(
                                                m_Globals,
                                                &v28,
                                                0x200uLL,
                                                0,
                                                LookasideAttributes,
                                                0,
                                                FxObjectTypeExternal);
        if ( !v26 )
          return 3221225626LL;
        FxPagedLookasideListFromPool::FxPagedLookasideListFromPool(v26, m_Globals, Tag, v22, v23);
        v8 = v31;
      }
      else
      {
        *(_QWORD *)&v28.UsePoolType = 0LL;
        v28.u.PoolFlags = 64LL;
        if ( v8 >= 0x1000 )
        {
          v19 = (FxLookasideList *)FxObjectHandleAllocCommon(
                                     m_Globals,
                                     &v28,
                                     0x1C0uLL,
                                     0,
                                     LookasideAttributes,
                                     v18,
                                     FxObjectTypeExternal);
          v20 = 0LL;
          if ( v19 )
          {
            FxLookasideList::FxLookasideList(v19, m_Globals, 0x1C0u, Tag);
            v21 = FxNPagedLookasideListFromPool::`vftable';
            goto LABEL_24;
          }
        }
        else
        {
          v19 = (FxLookasideList *)FxObjectHandleAllocCommon(
                                     m_Globals,
                                     &v28,
                                     0x140uLL,
                                     0,
                                     LookasideAttributes,
                                     v18,
                                     FxObjectTypeExternal);
          v20 = 0LL;
          if ( v19 )
          {
            FxLookasideList::FxLookasideList(v19, m_Globals, 0x140u, Tag);
            v21 = FxNPagedLookasideList::`vftable';
LABEL_24:
            v19->__vftable = (FxLookasideList_vtbl *)v21;
            goto LABEL_33;
          }
        }
      }
      v19 = v20;
      if ( v20 )
      {
LABEL_33:
        v27 = v19->Initialize(v19, v8, v12);
        if ( v27 < 0
          || (v27 = FxObject::Commit(v19, (_FX_DRIVER_GLOBALS *)LookasideAttributes, (void **)&PLookaside, 0LL, 1u),
              v27 < 0) )
        {
          FxObject::ClearEvtCallbacks(v19);
          v19->DeleteObject(v19);
        }
        else
        {
          *v15 = (WDFLOOKASIDE__ *)PLookaside;
        }
        return (unsigned int)v27;
      }
      return 3221225626LL;
    }
  }
  return result;
}
