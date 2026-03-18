/*
 * XREFs of ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C0055060
 * Callers:
 *     imp_WdfIoTargetOpen @ 0x1C0051670 (imp_WdfIoTargetOpen.c)
 *     ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x1C0056340 (-_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000AC00 (memset.c)
 *     memmove @ 0x1C000B140 (memmove.c)
 *     ?Set@FxIoTargetRemoteOpenParams@@QEAAXPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAU_UNICODE_STRING@@PEAXK@Z @ 0x1C000ECB2 (-Set@FxIoTargetRemoteOpenParams@@QEAAXPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAU_UNICODE_STRING@@PEAXK.c)
 *     ?RegisterForPnpNotification@FxIoTargetRemote@@QEAAJXZ @ 0x1C000ED0C (-RegisterForPnpNotification@FxIoTargetRemote@@QEAAJXZ.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C004F4B8 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?GetTargetIoType@FxIoTarget@@IEAAEXZ @ 0x1C0052EA4 (-GetTargetIoType@FxIoTarget@@IEAAEXZ.c)
 *     ?SubmitPendedRequests@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0053C50 (-SubmitPendedRequests@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Clear@FxIoTargetRemoteOpenParams@@QEAAXXZ @ 0x1C0054AAC (-Clear@FxIoTargetRemoteOpenParams@@QEAAXXZ.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0054BC8 (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z @ 0x1C0055FF0 (-GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z.c)
 *     ?OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoteOpenParams@@@Z @ 0x1C0056120 (-OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoteOpe.c)
 */

__int64 __fastcall FxIoTargetRemote::Open(FxIoTargetRemote *this, _WDF_IO_TARGET_OPEN_PARAMS *OpenParams)
{
  unsigned __int8 v4; // r8
  _WDF_IO_TARGET_OPEN_TYPE Type; // r15d
  const void *_a1; // rax
  int TargetDeviceRelations; // edi
  char v8; // r13
  FX_POOL_TRACKER *v9; // rsi
  const void *ObjectHandleUnchecked; // rax
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // r14
  unsigned int EaBufferLength; // eax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int64 v16; // r9
  void *v17; // rax
  FX_POOL **v18; // rax
  const void *v19; // rax
  const void *v20; // rax
  unsigned __int16 v21; // r9
  int v22; // edx
  unsigned __int8 v23; // r8
  const void *v24; // rax
  _FX_DRIVER_GLOBALS *v25; // r10
  unsigned __int8 v26; // r8
  void *m_TargetNotifyHandle; // rcx
  __int32 v28; // r15d
  __int32 v29; // r15d
  FxIoTargetRemoteOpenParams *v30; // rcx
  _FILE_OBJECT *TargetFileObject; // rcx
  const void *v32; // rax
  _FX_DRIVER_GLOBALS *v33; // r10
  FxIoTargetRemote_vtbl *v34; // rax
  const void *v35; // rax
  _FX_DRIVER_GLOBALS *v36; // r10
  unsigned __int8 v37; // r8
  int _a2; // [rsp+30h] [rbp-79h]
  unsigned int EaLength; // [rsp+40h] [rbp-69h]
  FxIoTargetRemoteOpenParams *pParams; // [rsp+48h] [rbp-61h]
  _LIST_ENTRY pended; // [rsp+50h] [rbp-59h] BYREF
  _UNICODE_STRING name; // [rsp+60h] [rbp-49h] BYREF
  __m128i v43; // [rsp+70h] [rbp-39h] BYREF
  FxIoTargetRemoteOpenParams params; // [rsp+80h] [rbp-29h] BYREF
  void *retaddr; // [rsp+108h] [rbp+5Fh]
  unsigned __int8 close; // [rsp+118h] [rbp+6Fh] BYREF
  unsigned __int8 irql; // [rsp+120h] [rbp+77h] BYREF
  char v48; // [rsp+128h] [rbp+7Fh]

  memset(&params, 0, sizeof(params));
  Type = OpenParams->Type;
  irql = 0;
  v48 = 0;
  close = 0;
  pended = 0LL;
  name = 0LL;
  if ( Type == WdfIoTargetOpenReopen )
  {
    Type = this->m_OpenParams.OpenType;
    if ( Type != WdfIoTargetOpenByName )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      TargetDeviceRelations = -1073741808;
      WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0xEu, WPP_FxIoTargetRemote_cpp_Traceguids, _a1, -1073741808);
      return (unsigned int)TargetDeviceRelations;
    }
    EaLength = 0;
    pParams = &this->m_OpenParams;
    v8 = 1;
    v9 = 0LL;
  }
  else
  {
    EaLength = 0;
    pParams = &params;
    v8 = 0;
    v9 = 0LL;
    if ( Type == WdfIoTargetOpenByName )
    {
      TargetDeviceRelations = FxDuplicateUnicodeString(this->m_Globals, &OpenParams->TargetDeviceName, &name);
      if ( TargetDeviceRelations < 0 )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_q(this->m_Globals, 2u, 0xEu, 0xFu, WPP_FxIoTargetRemote_cpp_Traceguids, ObjectHandleUnchecked);
        v12 = v48;
        goto LABEL_8;
      }
      EaLength = 0;
      if ( OpenParams->EaBuffer )
      {
        EaBufferLength = OpenParams->EaBufferLength;
        EaLength = 0;
        if ( EaBufferLength )
        {
          m_Globals = this->m_Globals;
          v16 = EaBufferLength;
          v17 = retaddr;
          v43.m128i_i64[0] = 0LL;
          v43.m128i_i64[1] = 256LL;
          if ( !m_Globals->FxPoolTrackingOn )
            v17 = 0LL;
          v18 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v43, v16, m_Globals->Tag, v17);
          v9 = (FX_POOL_TRACKER *)v18;
          if ( !v18 )
          {
            v19 = (const void *)FxObject::GetObjectHandleUnchecked(this);
            WPP_IFR_SF_q(this->m_Globals, 2u, 0xEu, 0x10u, WPP_FxIoTargetRemote_cpp_Traceguids, v19);
            TargetDeviceRelations = -1073741670;
            goto LABEL_10;
          }
          EaLength = OpenParams->EaBufferLength;
          memmove(v18, OpenParams->EaBuffer, EaLength);
        }
      }
    }
  }
  FxNonPagedObject::Lock(this, &irql, v4);
  if ( this->m_State == WdfIoTargetDeleted )
  {
    v20 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v21 = 17;
    _a2 = 5;
LABEL_26:
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, v21, WPP_FxIoTargetRemote_cpp_Traceguids, v20, _a2);
    TargetDeviceRelations = -1073741436;
    goto LABEL_30;
  }
  if ( this->m_OpenState != 1 )
  {
    v20 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v21 = 18;
    _a2 = v22;
    goto LABEL_26;
  }
  if ( this->m_Globals->FxVerboseOn )
  {
    v24 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(v25, 5u, 0xEu, 0x13u, WPP_FxIoTargetRemote_cpp_Traceguids, v24);
  }
  KeClearEvent(&this->m_OpenedEvent.m_Event.m_Event);
  TargetDeviceRelations = 0;
  this->m_OpenState = 2;
LABEL_30:
  FxNonPagedObject::Unlock(this, irql, v23);
  if ( TargetDeviceRelations >= 0 )
  {
    m_TargetNotifyHandle = this->m_TargetNotifyHandle;
    if ( m_TargetNotifyHandle )
      IoUnregisterPlugPlayNotificationEx(m_TargetNotifyHandle);
    this->m_TargetNotifyHandle = 0LL;
    if ( !v8 )
      FxIoTargetRemoteOpenParams::Clear(&this->m_OpenParams);
    v28 = Type - 1;
    if ( v28 )
    {
      v29 = v28 - 1;
      if ( !v29 )
      {
        v30 = pParams;
        if ( !v8 )
          FxIoTargetRemoteOpenParams::Set(pParams, OpenParams, &name, v9, EaLength);
        TargetDeviceRelations = FxIoTargetRemote::OpenTargetHandle(this, OpenParams, v30);
        if ( TargetDeviceRelations < 0 )
        {
          v48 = 1;
          close = 1;
        }
        else if ( !v8 )
        {
          FxIoTargetRemoteOpenParams::Set(&this->m_OpenParams, OpenParams, &name, v9, EaLength);
          v9 = 0LL;
          name = 0LL;
        }
LABEL_48:
        pended.Blink = &pended;
        pended.Flink = &pended;
        if ( TargetDeviceRelations < 0 )
        {
          v12 = v48;
        }
        else
        {
          TargetDeviceRelations = FxIoTargetRemote::GetTargetDeviceRelations(this, &close);
          if ( TargetDeviceRelations >= 0 && this->m_TargetFileObject )
          {
            if ( !v8 )
            {
              this->m_EvtQueryRemove.m_Method = OpenParams->EvtIoTargetQueryRemove;
              this->m_EvtRemoveCanceled.m_Method = OpenParams->EvtIoTargetRemoveCanceled;
              this->m_EvtRemoveComplete.m_Method = OpenParams->EvtIoTargetRemoveComplete;
            }
            TargetDeviceRelations = FxIoTargetRemote::RegisterForPnpNotification(this);
            if ( TargetDeviceRelations < 0 )
            {
              if ( this->m_Globals->FxVerboseOn )
              {
                v32 = (const void *)FxObject::GetObjectHandleUnchecked(this);
                WPP_IFR_SF_qd(v33, 5u, 0xEu, 0x14u, WPP_FxIoTargetRemote_cpp_Traceguids, v32, TargetDeviceRelations);
              }
              this->m_EvtQueryRemove.m_Method = 0LL;
              this->m_EvtRemoveCanceled.m_Method = 0LL;
              this->m_EvtRemoveComplete.m_Method = 0LL;
              TargetDeviceRelations = 0;
            }
          }
          v12 = close;
        }
        FxNonPagedObject::Lock(this, &irql, v26);
        if ( TargetDeviceRelations < 0 )
        {
          this->m_OpenState = 1;
        }
        else
        {
          this->m_TargetStackSize = this->m_TargetDevice->StackSize;
          this->m_TargetIoType = FxIoTarget::GetTargetIoType(this);
          v34 = this->__vftable;
          this->m_OpenState = 3;
          TargetDeviceRelations = v34->GotoStartState(this, &pended, 0);
          if ( TargetDeviceRelations < 0 )
          {
            if ( this->m_Globals->FxVerboseOn )
            {
              v35 = (const void *)FxObject::GetObjectHandleUnchecked(this);
              WPP_IFR_SF_qd(v36, 5u, 0xEu, 0x15u, WPP_FxIoTargetRemote_cpp_Traceguids, v35, TargetDeviceRelations);
            }
            v12 = 1;
          }
        }
        KeSetEvent(&this->m_OpenedEvent.m_Event.m_Event, 0, 0);
        FxNonPagedObject::Unlock(this, irql, v37);
        if ( TargetDeviceRelations >= 0 )
        {
          FxIoTarget::SubmitPendedRequests(this, &pended);
          goto LABEL_10;
        }
LABEL_8:
        if ( v12 )
          FxIoTargetRemote::Close(this, 2, v11);
        goto LABEL_10;
      }
      if ( v29 != 2 )
        goto LABEL_48;
    }
    else
    {
      this->m_TargetDevice = OpenParams->TargetDeviceObject;
      TargetFileObject = OpenParams->TargetFileObject;
      this->m_TargetHandle = 0LL;
      this->m_TargetFileObject = TargetFileObject;
      if ( TargetFileObject )
        ObfReferenceObject(TargetFileObject);
    }
    TargetDeviceRelations = 0;
    goto LABEL_48;
  }
LABEL_10:
  if ( name.Buffer )
    FxPoolFree((FX_POOL_TRACKER *)name.Buffer);
  if ( v9 )
    FxPoolFree(v9);
  return (unsigned int)TargetDeviceRelations;
}
