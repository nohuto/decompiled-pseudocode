/*
 * XREFs of ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00112C0
 * Callers:
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x1C0015CE0 (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C001C104 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0022EA8 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 *     ?ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0061390 (-ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@.c)
 *     ?ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAIPEAU_NDIS_QUERY_DEVICE_RESET@@@Z @ 0x1C00614E4 (-ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAIPEAU_NDIS_QUERY_DEVICE_RES.c)
 *     ?ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C00B93F0 (-ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisNsiEnumerateAllIfRcvAddressesInOneInterface @ 0x1C00BA2BC (ndisNsiEnumerateAllIfRcvAddressesInOneInterface.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C00BA3D0 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00BA6C0 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisNsiGetInterfaceRosInformation @ 0x1C010D650 (ndisNsiGetInterfaceRosInformation.c)
 *     ndisIfQueryObject @ 0x1C010DFB0 (ndisIfQueryObject.c)
 *     ndisNsiGetInterfaceRosEnumObject @ 0x1C010EAE0 (ndisNsiGetInterfaceRosEnumObject.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1C013E4F8 (ndisIfUpdateIfBlockFromPersistedState.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCCC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C48F0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C49FC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisIfDereferenceMiniport(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        unsigned __int8 a3)
{
  ULONG_PTR v4; // rbx
  KIRQL v5; // al
  NDIS_REFCOUNT_HANDLE__ *MpRefCountTracker; // r8
  KIRQL v7; // si
  __int64 v8; // r10
  unsigned __int8 v9; // r9
  unsigned __int8 v10; // al
  _BYTE *v11; // rdx
  char v13; // cl
  ULONG_PTR v14; // r9
  NDIS_REFCOUNT_HANDLE__ *v15; // rbx
  unsigned int v16; // edx
  int v17; // ecx
  _NDIS_MINIPORT_BLOCK *Miniport; // rax
  struct _KEVENT *IfBlockPointerRefZeroEvent; // rcx

  v4 = a3;
  v5 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  MpRefCountTracker = a1->MpRefCountTracker;
  v7 = v5;
  if ( (unsigned __int64)MpRefCountTracker - 2 > 1 )
  {
    if ( (unsigned __int64)MpRefCountTracker < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, (ULONG_PTR)MpRefCountTracker, 0LL);
    if ( (_BYTE)v4 == 0xFF )
    {
      if ( (*(_BYTE *)MpRefCountTracker & 2) == 0 )
        ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)MpRefCountTracker, 0xFFuLL);
      *(_BYTE *)MpRefCountTracker &= ~2u;
    }
    else
    {
      if ( (unsigned __int8)v4 >= *((_BYTE *)MpRefCountTracker + 2) )
        ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)MpRefCountTracker, v4);
      if ( *((_BYTE *)MpRefCountTracker + 1) )
      {
        if ( *((_BYTE *)MpRefCountTracker + 1) == 1 )
        {
          v14 = v4;
          v15 = MpRefCountTracker + 16 * v4;
          v16 = *((_DWORD *)v15 + 16);
          v17 = (unsigned __int16)v16 >> 1;
          if ( v16 >> 17 < 0x3FFE && v17 == (v16 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v15 + 2));
            *((_DWORD *)v15 + 16) &= 0x10001u;
          }
          else
          {
            if ( v17 == 0 && (v16 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)MpRefCountTracker, v14);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v15 + 2), 0);
          }
        }
      }
      else
      {
        v8 = *((_QWORD *)MpRefCountTracker + 1);
        if ( v8 && (v9 = *((_BYTE *)MpRefCountTracker + 3), v10 = 0, v9) )
        {
          while ( 1 )
          {
            v11 = (_BYTE *)(v8 + 2LL * v10);
            if ( *v11 == (_BYTE)v4 )
            {
              v13 = v11[1];
              if ( v13 )
                break;
            }
            if ( ++v10 >= v9 )
              goto LABEL_10;
          }
          v11[1] = v13 - 1;
        }
        else
        {
LABEL_10:
          if ( !_bittestandreset((signed __int32 *)MpRefCountTracker + 4, v4) )
            ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)MpRefCountTracker, v4);
        }
      }
    }
  }
  if ( a1->MiniportLinkReference-- == 1 )
  {
    Miniport = a1->Miniport;
    if ( Miniport )
    {
      IfBlockPointerRefZeroEvent = Miniport->IfBlockPointerRefZeroEvent;
      if ( IfBlockPointerRefZeroEvent )
        KeSetEvent(IfBlockPointerRefZeroEvent, 0, 0);
    }
  }
  KeReleaseSpinLock(&SpinLock, v7);
}
