/*
 * XREFs of ?ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAIPEAU_NDIS_QUERY_DEVICE_RESET@@@Z @ 0x1C00614C4
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0145008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C000F3A0 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0011130 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0011218 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C0022DF8 (-ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00902D4 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisQueryDeviceReset(
        struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        struct _NDIS_QUERY_DEVICE_RESET *a5)
{
  unsigned int v6; // ebx
  KIRQL v7; // bl
  _LIST_ENTRY *InterfaceByNetLuid; // rax
  struct _NDIS_IF_BLOCK *v9; // rsi
  struct _NDIS_MINIPORT_BLOCK *v10; // rax
  struct _NDIS_MINIPORT_BLOCK *v11; // rdi
  struct _NDIS_MINIPORT_BLOCK *v12; // rdx
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax

  *a4 = 0;
  if ( *(_BYTE *)a1 )
  {
    if ( a2 < 0x14 || a3 < 0x14 )
    {
      return (unsigned int)-1073741789;
    }
    else
    {
      v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(*(union _NET_LUID_LH *)((char *)a5 + 8));
      v9 = (struct _NDIS_IF_BLOCK *)InterfaceByNetLuid;
      if ( InterfaceByNetLuid
        && (v10 = ndisIfReferenceMiniport((struct _NDIS_IF_BLOCK *)InterfaceByNetLuid, 0x19u), (v11 = v10) != 0LL) )
      {
        if ( ndisReferenceMiniport(v10, 0x6Cu) )
        {
          ndisIfDereferenceMiniport(v9, v12, 0x19u);
          KeReleaseSpinLock(&ndisIfListLock, v7);
          if ( (v11->Flags & 0x180) == 0x80 )
          {
            CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport(v11);
            v6 = CxBlockFromMiniport->Chars.EvtCxMiniportQueryDeviceResetSupport(
                   v11->MiniportAdapterContext,
                   (unsigned int *)a5 + 4);
            *a4 = 20;
          }
          else
          {
            v6 = -1073741637;
          }
          ndisDereferenceMiniport(v11, 0x6Cu);
        }
        else
        {
          ndisIfDereferenceMiniport(v9, v12, 0x19u);
          KeReleaseSpinLock(&ndisIfListLock, v7);
          return (unsigned int)-1073676282;
        }
      }
      else
      {
        KeReleaseSpinLock(&ndisIfListLock, v7);
        return (unsigned int)-1071448058;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v6;
}
