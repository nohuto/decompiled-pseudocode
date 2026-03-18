/*
 * XREFs of ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C003EF34
 * Callers:
 *     imp_WdfDeviceCreate @ 0x1C0032640 (imp_WdfDeviceCreate.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ??_GWDFDEVICE_INIT@@QEAAPEAXI@Z @ 0x1C002E9A8 (--_GWDFDEVICE_INIT@@QEAAPEAXI@Z.c)
 *     ?ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C003C2CC (-ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C003C710 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C003CC64 (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ??0FxDevice@@QEAA@PEAVFxDriver@@@Z @ 0x1C003D444 (--0FxDevice@@QEAA@PEAVFxDriver@@@Z.c)
 *     ?DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z @ 0x1C003DC30 (-DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z.c)
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C003E20C (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C0041F88 (-_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?MoveContexts@FxObject@@QEAAJPEAV1@@Z @ 0x1C00463CC (-MoveContexts@FxObject@@QEAAJPEAV1@@Z.c)
 */

__int64 __fastcall FxDevice::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFDEVICE_INIT **DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *DeviceAttributes,
        FxDevice **Device)
{
  __int64 v4; // rdi
  FxPoolTypeOrPoolFlags v6; // xmm1
  FxDevice *v9; // rax
  FxDevice *v10; // rax
  FxDevice *v11; // rbx
  FxDevice *v12; // rbp
  int v13; // esi
  FxDevice *v14; // rcx
  int v15; // ecx
  int v16; // ecx
  int v17; // eax
  FxObject *v18; // rcx
  __int64 v19; // rax
  _LIST_ENTRY *v20; // rax
  _LIST_ENTRY *Blink; // rdx
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  _QWORD *i; // rcx
  _LIST_ENTRY *v24; // rax
  _LIST_ENTRY *v25; // r9
  FxPkgPnp *m_PkgPnp; // rcx
  FxPoolTypeOrPoolFlags v28; // [rsp+40h] [rbp-38h] BYREF
  void *object; // [rsp+88h] [rbp+10h] BYREF

  v4 = (__int64)*DeviceInit;
  *(_QWORD *)&v28.UsePoolType = 0LL;
  v28.u.PoolFlags = 64LL;
  v6 = v28;
  *Device = 0LL;
  v28 = v6;
  v9 = (FxDevice *)FxObjectHandleAllocCommon(
                     FxDriverGlobals,
                     &v28,
                     0x2C0uLL,
                     0,
                     DeviceAttributes,
                     0,
                     FxObjectTypeExternal);
  if ( !v9 )
  {
    v12 = 0LL;
    goto LABEL_37;
  }
  FxDevice::FxDevice(v9, *(FxDriver **)(v4 + 8));
  v11 = v10;
  v12 = v10;
  if ( !v10 )
  {
LABEL_37:
    v13 = -1073741670;
    goto LABEL_38;
  }
  v13 = FxDevice::Initialize(v10, (WDFDEVICE_INIT *)v4, DeviceAttributes);
  v14 = v11;
  if ( v13 < 0 )
    goto $Done_38;
  v15 = *(_DWORD *)(v4 + 36);
  if ( !v15 )
  {
    v17 = FxDevice::FdoInitialize(v11, (WDFDEVICE_INIT *)v4);
LABEL_10:
    v13 = v17;
    v14 = v11;
    if ( v17 >= 0 )
      goto LABEL_11;
$Done_38:
    FxDevice::DeleteDeviceFromFailedCreate(v14, v13, 0);
    v12 = 0LL;
    goto LABEL_38;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v17 = FxDevice::PdoInitialize(v11, (WDFDEVICE_INIT *)v4);
    goto LABEL_10;
  }
  if ( v16 == 1 )
  {
    v17 = FxDevice::ControlDeviceInitialize(v11, (WDFDEVICE_INIT *)v4);
    goto LABEL_10;
  }
LABEL_11:
  v13 = FxDisposeList::_Create(v11->m_Globals, v11->m_DeviceObject.m_DeviceObject, &v11->m_DisposeList);
  v14 = v11;
  if ( v13 < 0 )
    goto $Done_38;
  v13 = FxObject::Commit(v11, DeviceAttributes, &object, (_FX_DRIVER_GLOBALS *)v11->m_Driver, 1u);
  v14 = v11;
  if ( v13 < 0 )
    goto $Done_38;
  v18 = *(FxObject **)(v4 + 936);
  if ( v18 )
  {
    v13 = FxObject::MoveContexts(v18, v11);
    v14 = v11;
    if ( v13 < 0 )
      goto $Done_38;
  }
  v19 = *(_QWORD *)(v4 + 48);
  if ( v19 )
  {
    v11->m_DeviceName = *(_UNICODE_STRING *)(v19 + 104);
    *(_OWORD *)(v19 + 104) = 0LL;
  }
  v20 = *(_LIST_ENTRY **)(v4 + 264);
  if ( v20 )
  {
    Blink = v11->m_PreprocessInfoListHead.Blink;
    if ( Blink->Flink != &v11->m_PreprocessInfoListHead )
LABEL_34:
      __fastfail(3u);
    v20->Flink = &v11->m_PreprocessInfoListHead;
    v20->Blink = Blink;
    Blink->Flink = v20;
    v11->m_PreprocessInfoListHead.Blink = v20;
    *(_QWORD *)(v4 + 264) = 0LL;
    ++v11->m_DeviceObject.m_DeviceObject->StackSize;
  }
  m_DeviceObject = v11->m_DeviceObject.m_DeviceObject;
  if ( ((__int64)m_DeviceObject[1].CurrentIrp & 1) != 0 )
    ++m_DeviceObject->StackSize;
  if ( v11->m_SelfIoTargetNeeded )
    ++v11->m_DeviceObject.m_DeviceObject->StackSize;
  v12 = v11;
  for ( i = *(_QWORD **)(v4 + 920); i != (_QWORD *)(v4 + 920); i = (_QWORD *)*i )
  {
    v24 = (_LIST_ENTRY *)i[4];
    if ( v24 )
    {
      v25 = v11->m_PreprocessInfoListHead.Blink;
      if ( v25->Flink != &v11->m_PreprocessInfoListHead )
        goto LABEL_34;
      v24->Flink = &v11->m_PreprocessInfoListHead;
      v24->Blink = v25;
      v25->Flink = v24;
      v11->m_PreprocessInfoListHead.Blink = v24;
      i[4] = 0LL;
      ++v11->m_DeviceObject.m_DeviceObject->StackSize;
    }
  }
  m_PkgPnp = v11->m_PkgPnp;
  if ( m_PkgPnp )
    m_PkgPnp->FinishInitialize(m_PkgPnp, (WDFDEVICE_INIT *)v4);
  *(_QWORD *)(v4 + 16) = v11;
  *DeviceInit = 0LL;
  if ( !*(_BYTE *)(v4 + 24) )
    WDFDEVICE_INIT::`scalar deleting destructor'((WDFDEVICE_INIT *)v4);
LABEL_38:
  *Device = v12;
  return (unsigned int)v13;
}
