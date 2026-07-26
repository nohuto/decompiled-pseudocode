/*
 * XREFs of ndisIfQueryObject @ 0x1C01032B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DqLL @ 0x1C0010010 (WPP_RECORDER_SF_DqLL.c)
 *     WPP_RECORDER_SF_DqL @ 0x1C00100D0 (WPP_RECORDER_SF_DqL.c)
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0010230 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0011D50 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     ndisIfQueryMiniportObjectNotPresent @ 0x1C0102B00 (ndisIfQueryMiniportObjectNotPresent.c)
 *     ndisIfQueryFilterObject @ 0x1C0103020 (ndisIfQueryFilterObject.c)
 *     ndisIfQueryMiniportObject @ 0x1C0104D28 (ndisIfQueryMiniportObject.c)
 */

__int64 __fastcall ndisIfQueryObject(struct _NDIS_IF_BLOCK *a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v6; // ebp
  __int64 v8; // rdx
  unsigned int FilterObject; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  struct _NDIS_MINIPORT_BLOCK *v13; // rax
  struct _NDIS_MINIPORT_BLOCK *v14; // rdx
  int v15; // [rsp+20h] [rbp-48h]

  v6 = a2;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqL(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, (__int64)a3, 0x13u, v15);
  if ( !a1 )
    return 3221225485LL;
  if ( a1->IsNdisFilter )
  {
    FilterObject = ndisIfQueryFilterObject(a1->Filter, v6, a3, (__int64)a4);
  }
  else
  {
    v13 = ndisIfReferenceMiniport(a1, 2u);
    if ( v13 )
    {
      FilterObject = ndisIfQueryMiniportObject(v13, v6);
      ndisIfDereferenceMiniport(a1, v14, 2u);
    }
    else
    {
      FilterObject = ndisIfQueryMiniportObjectNotPresent((__int64)a1, v6, a3, a4);
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqLL(*((_QWORD *)WPP_GLOBAL_Control + 8), v8, v10, v11, v15);
  return FilterObject;
}
