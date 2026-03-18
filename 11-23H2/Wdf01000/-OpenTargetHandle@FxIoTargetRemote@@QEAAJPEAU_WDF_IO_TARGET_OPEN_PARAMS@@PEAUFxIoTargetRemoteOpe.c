/*
 * XREFs of ?OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoteOpenParams@@@Z @ 0x1C0056120
 * Callers:
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C0055060 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qdd @ 0x1C0026A80 (WPP_IFR_SF_qdd.c)
 */

__int64 __fastcall FxIoTargetRemote::OpenTargetHandle(
        FxIoTargetRemote *this,
        _WDF_IO_TARGET_OPEN_PARAMS *OpenParams,
        FxIoTargetRemoteOpenParams *pParams)
{
  void **p_m_TargetHandle; // r12
  ACCESS_MASK DesiredAccess; // edx
  NTSTATUS v8; // esi
  const void *v9; // rax
  unsigned int v10; // edx
  _FILE_OBJECT **p_m_TargetFileObject; // r14
  _DEVICE_OBJECT *RelatedDeviceObject; // rax
  const void *v13; // rax
  const void *v14; // rax
  const void *ObjectHandleUnchecked; // rax
  unsigned int v16; // edx
  _IO_STATUS_BLOCK ioStatus; // [rsp+60h] [rbp-58h] BYREF
  _OBJECT_ATTRIBUTES oa; // [rsp+70h] [rbp-48h] BYREF

  *(&oa.Length + 1) = 0;
  p_m_TargetHandle = &this->m_TargetHandle;
  memset(&oa.Attributes + 1, 0, 20);
  oa.RootDirectory = 0LL;
  oa.ObjectName = &pParams->TargetDeviceName;
  ioStatus = 0LL;
  oa.Length = 48;
  DesiredAccess = pParams->DesiredAccess;
  oa.Attributes = 512;
  v8 = ZwCreateFile(
         &this->m_TargetHandle,
         DesiredAccess,
         &oa,
         &ioStatus,
         pParams->AllocationSizePointer,
         pParams->FileAttributes,
         pParams->ShareAccess,
         pParams->CreateDisposition,
         pParams->CreateOptions,
         pParams->EaBuffer,
         pParams->EaBufferLength);
  OpenParams->FileInformation = ioStatus.Information;
  if ( v8 < 0 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qdd(
      this->m_Globals,
      2u,
      0xEu,
      0x13u,
      WPP_FxIoTargetRemotekm_cpp_Traceguids,
      ObjectHandleUnchecked,
      v8,
      v16);
  }
  else
  {
    v9 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qdd(this->m_Globals, 3u, 0xEu, 0x10u, WPP_FxIoTargetRemotekm_cpp_Traceguids, v9, v8, v10);
    p_m_TargetFileObject = &this->m_TargetFileObject;
    v8 = ObReferenceObjectByHandle(
           *p_m_TargetHandle,
           pParams->DesiredAccess,
           (POBJECT_TYPE)IoFileObjectType,
           0,
           (PVOID *)&this->m_TargetFileObject,
           0LL);
    if ( v8 < 0 )
    {
      v14 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qid(
        this->m_Globals,
        2u,
        0xEu,
        0x12u,
        WPP_FxIoTargetRemotekm_cpp_Traceguids,
        v14,
        (__int64)*p_m_TargetHandle,
        v8);
    }
    else
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject(*p_m_TargetFileObject);
      this->m_TargetDevice = RelatedDeviceObject;
      if ( !RelatedDeviceObject )
      {
        v13 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_qq(
          this->m_Globals,
          2u,
          0xEu,
          0x11u,
          WPP_FxIoTargetRemotekm_cpp_Traceguids,
          v13,
          *p_m_TargetFileObject);
        return (unsigned int)-1073741810;
      }
    }
  }
  return (unsigned int)v8;
}
