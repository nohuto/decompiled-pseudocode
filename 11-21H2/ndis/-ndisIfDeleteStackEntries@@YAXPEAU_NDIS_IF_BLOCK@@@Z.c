/*
 * XREFs of ?ndisIfDeleteStackEntries@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C0017680
 * Callers:
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000B3C0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000E330 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00108B0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C0022020 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisIMDeleteIfStackEntry@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00657A8 (-ndisIMDeleteIfStackEntry@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisIfDeleteStackEntries(struct _NDIS_IF_BLOCK *a1)
{
  PVOID *v2; // rbx
  struct _NDIS_IF_BLOCK **v3; // rcx
  struct _NDIS_IF_BLOCK *v4; // rax
  struct _NDIS_IF_BLOCK *v5; // rdx
  struct _NDIS_IF_BLOCK ***v6; // rax

  KeAcquireSpinLockAtDpcLevel(&qword_1C00ECDB0);
  v2 = (PVOID *)P;
  while ( v2 != &P )
  {
    v3 = (struct _NDIS_IF_BLOCK **)v2;
    v2 = (PVOID *)*v2;
    v4 = v3[3];
    if ( v4 == a1 || v3[4] == a1 )
    {
      --v4->LowerLayerIfCount;
      --v3[4]->HigherLayerIfCount;
      v5 = *v3;
      if ( *(struct _NDIS_IF_BLOCK ***)&(*v3)->ifDescr.Length != v3
        || (v6 = (struct _NDIS_IF_BLOCK ***)v3[1], *v6 != v3) )
      {
        __fastfail(3u);
      }
      *v6 = (struct _NDIS_IF_BLOCK **)v5;
      *(_QWORD *)&v5->ifDescr.Length = v6;
      ExFreePoolWithTag(v3, 0);
    }
  }
  a1->LowerLayerIfCount = 0;
  a1->HigherLayerIfCount = 0;
  KeReleaseSpinLockFromDpcLevel(&qword_1C00ECDB0);
}
