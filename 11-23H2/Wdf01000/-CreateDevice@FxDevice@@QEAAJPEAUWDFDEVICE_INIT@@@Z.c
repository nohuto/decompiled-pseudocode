/*
 * XREFs of ?CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C003DA50
 * Callers:
 *     ?ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C003C2CC (-ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C003C710 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C003CC64 (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?ShouldCreateSecure@WDFDEVICE_INIT@@QEAAEXZ @ 0x1C003BD10 (-ShouldCreateSecure@WDFDEVICE_INIT@@QEAAEXZ.c)
 *     ?Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0085608 (-Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C00B0508 (WdmlibIoCreateDeviceSecure.c)
 */

NTSTATUS __fastcall FxDevice::CreateDevice(FxDevice *this, WDFDEVICE_INIT *DeviceInit)
{
  FxPkgGeneral *m_PkgGeneral; // rcx
  NTSTATUS result; // eax
  __int64 DeviceType; // rbx
  unsigned int Exclusive; // edi
  unsigned int DefaultSDDLString; // edx
  FxString *Sddl; // r8
  const _UNICODE_STRING *DeviceClassGuid; // r8
  NTSTATUS v11; // eax
  NTSTATUS v12; // r14d
  _DEVICE_OBJECT *v13; // rbx
  _DEVICE_OBJECT *v14; // rdi
  __int64 m_ObjectSize; // rax
  char *v16; // rax
  _DEVICE_OBJECT *v17; // rax
  _WDF_DEVICE_IO_TYPE ReadWriteIoType; // ecx
  _DEVICE_OBJECT *pNewDeviceObject; // [rsp+70h] [rbp+8h] BYREF

  m_PkgGeneral = this->m_PkgGeneral;
  pNewDeviceObject = 0LL;
  result = FxPkgGeneral::Initialize(m_PkgGeneral, DeviceInit);
  if ( result >= 0 )
  {
    DeviceType = DeviceInit->DeviceType;
    if ( (unsigned int)DeviceType < 0x3C )
      this->m_DefaultPriorityBoost = FxDevice::m_PriorityBoosts[DeviceType];
    Exclusive = DeviceInit->Characteristics;
    if ( WDFDEVICE_INIT::ShouldCreateSecure(DeviceInit) )
    {
      Sddl = DeviceInit->Security.Sddl;
      if ( Sddl )
        DeviceClassGuid = &Sddl->m_UnicodeString;
      else
        DeviceClassGuid = &SDDL_DEVOBJ_SYS_ALL_ADM_ALL;
      LOBYTE(DefaultSDDLString) = this->m_Exclusive;
      v11 = WdmlibIoCreateDeviceSecure(
              this->m_Driver->m_DriverObject.m_DriverObject,
              DefaultSDDLString,
              (_UNICODE_STRING *)((__int64)&DeviceInit->DeviceName->m_UnicodeString & -(__int64)(DeviceInit->DeviceName != 0LL)),
              DeviceType,
              Exclusive,
              DefaultSDDLString,
              DeviceClassGuid,
              (const _GUID *)((unsigned __int64)&DeviceInit->Security.DeviceClass & -(__int64)(DeviceInit->Security.DeviceClassSet != 0)),
              &pNewDeviceObject);
    }
    else
    {
      v11 = IoCreateDevice(
              this->m_Driver->m_DriverObject.m_DriverObject,
              0x28u,
              0LL,
              DeviceType,
              Exclusive,
              this->m_Exclusive,
              &pNewDeviceObject);
    }
    v12 = v11;
    if ( v11 >= 0 )
    {
      v13 = pNewDeviceObject;
      v14 = pNewDeviceObject + 1;
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)&pNewDeviceObject[1], this->m_Globals->Tag, 0, 0, 0x20u);
      LODWORD(v14->CurrentIrp) = DeviceInit->RemoveLockOptionFlags | this->m_Globals->RemoveLockOptionFlags;
      m_ObjectSize = this->m_ObjectSize;
      v16 = (_WORD)m_ObjectSize ? (char *)this + m_ObjectSize : 0LL;
      v13->DeviceExtension = v16 + 48;
      v17 = pNewDeviceObject;
      this->m_DeviceObject.m_DeviceObject = pNewDeviceObject;
      if ( !this->m_Filter )
      {
        ReadWriteIoType = DeviceInit->ReadWriteIoType;
        if ( ReadWriteIoType == WdfDeviceIoBuffered )
        {
          v17->Flags |= 4u;
        }
        else if ( ReadWriteIoType == WdfDeviceIoDirect )
        {
          v17->Flags |= 0x10u;
        }
        this->m_ReadWriteIoType = DeviceInit->ReadWriteIoType;
        this->m_PowerPageableCapable = DeviceInit->PowerPageable;
      }
    }
    return v12;
  }
  return result;
}
