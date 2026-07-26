/*
 * XREFs of ?ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C006834C
 * Callers:
 *     ?ndisIMDeleteIfStackEntry@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006AA88 (-ndisIMDeleteIfStackEntry@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C00BCF10 (NdisCmCloseAddressFamilyComplete.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     NdisDereferenceWithTag @ 0x1C000CEA0 (NdisDereferenceWithTag.c)
 */

bool __fastcall ndisDereferenceMiniportRef(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2)
{
  _ULONG_REFERENCE *p_Ref; // rbx
  KIRQL v5; // al
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  KIRQL v7; // bp
  bool v8; // zf
  bool v9; // si
  unsigned int ReferenceCount; // [rsp+30h] [rbp-18h]

  p_Ref = &a1->Ref;
  v5 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
  RefCountTracker = a1->RefCountTracker;
  v7 = v5;
  if ( RefCountTracker )
    NdisDereferenceWithTag((ULONG_PTR)RefCountTracker, a2);
  v8 = p_Ref->ReferenceCount-- == 1;
  v9 = v8;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    ReferenceCount = a1->Ref.ReferenceCount;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0xEu,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)a1,
      ReferenceCount);
  }
  KeReleaseSpinLock(&p_Ref->SpinLock, v7);
  return v9;
}
