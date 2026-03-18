/*
 * XREFs of imp_WdfRegistryOpenKey @ 0x1C00156A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0005890 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00152DC (-_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0015654 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ??0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0015BCC (--0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryOpenKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *ParentKey,
        _UNICODE_STRING *KeyName,
        ACCESS_MASK DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  _WDF_OBJECT_ATTRIBUTES *v6; // rsi
  _FX_DRIVER_GLOBALS *v7; // rbx
  _FX_DRIVER_GLOBALS *v10; // rcx
  void *m_Key; // r13
  WDFKEY__ **v12; // r14
  __int64 result; // rax
  FxRegKey *v14; // rax
  FxObject *v15; // rax
  FxObject *v16; // rdi
  int v17; // esi
  NTSTATUS _a1; // eax
  void *v19; // rax
  unsigned __int64 ParentObject; // rdx
  FxPoolTypeOrPoolFlags v21; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+38h]
  FxRegKey *pParent; // [rsp+C0h] [rbp+40h] BYREF
  void *PPObject; // [rsp+C8h] [rbp+48h] BYREF
  WDFKEY__ *keyHandle; // [rsp+D0h] [rbp+50h] BYREF

  v6 = KeyAttributes;
  v7 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  keyHandle = 0LL;
  v10 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( ParentKey )
  {
    pParent = 0LL;
    FxObjectHandleGetPtr(v10, (unsigned __int64)ParentKey, 0x1006u, (void **)&pParent);
    v19 = pParent;
    m_Key = pParent->m_Key;
  }
  else
  {
    m_Key = 0LL;
    if ( (int)FxValidateObjectAttributesForParentHandle(v10, KeyAttributes, 0) < 0 )
      goto LABEL_3;
    ParentObject = (unsigned __int64)v6->ParentObject;
    PPObject = 0LL;
    FxObjectHandleGetPtr(v7, ParentObject, 0x1000u, &PPObject);
    v19 = PPObject;
  }
  v7 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v19 + 2);
LABEL_3:
  if ( !KeyName )
    FxVerifierNullBugCheck(v7, retaddr);
  v12 = Key;
  if ( !Key )
    FxVerifierNullBugCheck(v7, retaddr);
  *Key = 0LL;
  result = FxVerifierCheckIrqlLevel(v7, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(v7, v6, 0);
    if ( (int)result >= 0 )
    {
      result = FxValidateUnicodeString(v7, KeyName);
      if ( (int)result >= 0 )
      {
        *(_QWORD *)&v21.UsePoolType = 0LL;
        v21.u.PoolFlags = 64LL;
        v14 = (FxRegKey *)FxObjectHandleAllocCommon(v7, &v21, 0x78uLL, 0, v6, 0, FxObjectTypeExternal);
        if ( !v14 || (FxRegKey::FxRegKey(v14, v7), (v16 = v15) == 0LL) )
        {
          WPP_IFR_SF_d(v7, 2u, 2u, 0xAu, WPP_FxRegistryAPI_cpp_Traceguids, -1073741670);
          return 3221225626LL;
        }
        v17 = FxObject::Commit(v15, (_FX_DRIVER_GLOBALS *)v6, (void **)&keyHandle, 0LL, 1u);
        if ( v17 >= 0 )
        {
          *(&ObjectAttributes.Length + 1) = 0;
          memset(&ObjectAttributes.Attributes + 1, 0, 20);
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = m_Key;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.ObjectName = KeyName;
          _a1 = ZwOpenKey((PHANDLE)&v16[1].m_Type, DesiredAccess, &ObjectAttributes);
          v17 = _a1;
          if ( _a1 >= 0 )
          {
            if ( (DesiredAccess & 0x50030006) != 0 )
              FxRegKey::_VerifyStateSeparationRegistryPolicy(v16->m_Globals, *(void **)&v16[1].m_Type);
            *v12 = keyHandle;
            return (unsigned int)v17;
          }
          WPP_IFR_SF_d(v7, 2u, 2u, 0xBu, WPP_FxRegistryAPI_cpp_Traceguids, _a1);
        }
        FxObject::ClearEvtCallbacks(v16);
        ((void (*)(void))v16->DeleteObject)();
        return (unsigned int)v17;
      }
    }
  }
  return result;
}
