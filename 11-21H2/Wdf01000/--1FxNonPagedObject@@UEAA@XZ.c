/*
 * XREFs of ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0006180
 * Callers:
 *     ??_EFxFileObject@@UEAAPEAXI@Z @ 0x1C0003BD0 (--_EFxFileObject@@UEAAPEAXI@Z.c)
 *     ??1FxTimer@@UEAA@XZ @ 0x1C00186F8 (--1FxTimer@@UEAA@XZ.c)
 *     ??1FxSystemWorkItem@@UEAA@XZ @ 0x1C00188A0 (--1FxSystemWorkItem@@UEAA@XZ.c)
 *     ??1FxWorkItem@@UEAA@XZ @ 0x1C0018970 (--1FxWorkItem@@UEAA@XZ.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C0020990 (--1FxPkgPnp@@MEAA@XZ.c)
 *     ??1FxCollection@@UEAA@XZ @ 0x1C0021F48 (--1FxCollection@@UEAA@XZ.c)
 *     ??1FxDeviceBase@@MEAA@XZ @ 0x1C002BAE4 (--1FxDeviceBase@@MEAA@XZ.c)
 *     ??1FxPkgIo@@UEAA@XZ @ 0x1C00339E0 (--1FxPkgIo@@UEAA@XZ.c)
 *     ??1FxPkgGeneral@@UEAA@XZ @ 0x1C0033B50 (--1FxPkgGeneral@@UEAA@XZ.c)
 *     ??1FxWmiIrpHandler@@UEAA@XZ @ 0x1C0033E10 (--1FxWmiIrpHandler@@UEAA@XZ.c)
 *     ??_EFxDmaSystemTransaction@@UEAAPEAXI@Z @ 0x1C00346E0 (--_EFxDmaSystemTransaction@@UEAAPEAXI@Z.c)
 *     ??_GFxIoTargetRemote@@UEAAPEAXI@Z @ 0x1C0034720 (--_GFxIoTargetRemote@@UEAAPEAXI@Z.c)
 *     ??1FxDmaEnabler@@UEAA@XZ @ 0x1C0055098 (--1FxDmaEnabler@@UEAA@XZ.c)
 *     ??1FxDpc@@UEAA@XZ @ 0x1C005B860 (--1FxDpc@@UEAA@XZ.c)
 *     ??_EFxWmiProvider@@UEAAPEAXI@Z @ 0x1C005DFD0 (--_EFxWmiProvider@@UEAAPEAXI@Z.c)
 *     ??_EFxWmiInstanceExternal@@UEAAPEAXI@Z @ 0x1C005E3C0 (--_EFxWmiInstanceExternal@@UEAAPEAXI@Z.c)
 *     ??_GFxCompanionTarget@@UEAAPEAXI@Z @ 0x1C0060F80 (--_GFxCompanionTarget@@UEAAPEAXI@Z.c)
 *     ??1FxDriver@@UEAA@XZ @ 0x1C0069CE8 (--1FxDriver@@UEAA@XZ.c)
 *     ??_GFxDisposeList@@UEAAPEAXI@Z @ 0x1C006AA50 (--_GFxDisposeList@@UEAAPEAXI@Z.c)
 *     ??1FxUsbPipe@@MEAA@XZ @ 0x1C0079308 (--1FxUsbPipe@@MEAA@XZ.c)
 *     ??1FxUsbDevice@@MEAA@XZ @ 0x1C007BD80 (--1FxUsbDevice@@MEAA@XZ.c)
 *     ??1FxUsbInterface@@MEAA@XZ @ 0x1C007E2D8 (--1FxUsbInterface@@MEAA@XZ.c)
 *     ??1FxIoQueue@@UEAA@XZ @ 0x1C0081978 (--1FxIoQueue@@UEAA@XZ.c)
 *     ??1FxInterrupt@@UEAA@XZ @ 0x1C008CD58 (--1FxInterrupt@@UEAA@XZ.c)
 *     ??_GFxSystemThread@@UEAAPEAXI@Z @ 0x1C0091470 (--_GFxSystemThread@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C00083A0 (--1FxObject@@UEAA@XZ.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C00551B0 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 */

void __fastcall FxNonPagedObject::~FxNonPagedObject(FxNonPagedObject *this, unsigned int a2)
{
  _LIST_ENTRY *Blink; // rcx

  this->__vftable = (FxNonPagedObject_vtbl *)FxNonPagedObject::`vftable';
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    Blink = this[-1].m_ChildEntry.Blink;
    if ( Blink )
    {
      FxVerifierLock::`scalar deleting destructor'((FxVerifierLock *)Blink, a2);
      this[-1].m_ChildEntry.Blink = 0LL;
    }
  }
  this->m_NPLock.m_DbgFlagIsInitialized = 0;
  FxObject::~FxObject(this);
}
