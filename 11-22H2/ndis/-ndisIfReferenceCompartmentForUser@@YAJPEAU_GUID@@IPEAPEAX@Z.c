/*
 * XREFs of ?ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z @ 0x1C00B8D94
 * Callers:
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C00B811C (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 *     ?ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z @ 0x1C00BA954 (-ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z.c)
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0145008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x1C00217BC (WPP_RECORDER_SF_Lq.c)
 *     WPP_RECORDER_SF_l @ 0x1C00248A0 (WPP_RECORDER_SF_l.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C002F998 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x1C00B8CDC (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 */

__int64 __fastcall ndisIfReferenceCompartmentForUser(
        struct _GUID *a1,
        unsigned int a2,
        struct _NDIS_IF_COMPARTMENT_BLOCK **a3)
{
  int v6; // ebx
  KIRQL v7; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v8; // rcx
  KIRQL v9; // r11
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  int v11; // eax

  v6 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_l(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x1Bu,
      (struct _GUID *)&WPP_44cacc4423dd306c9dbb65f5b8fbc273_Traceguids,
      a2);
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v8 = *a3;
  v9 = v7;
  if ( *a3
    || (!a1
      ? (CompartmentBlock = ndisIfFindCompartmentBlock(a2))
      : (CompartmentBlock = ndisIfFindCompartmentBlockByGuid(a1)),
        (v8 = CompartmentBlock) != 0LL) )
  {
    if ( (*((_DWORD *)v8 + 10) & 1) != 0 || (v11 = *((_DWORD *)v8 + 12), v11 == 0x7FFFFFFF) )
    {
      v6 = -1073741811;
    }
    else
    {
      *((_DWORD *)v8 + 12) = v11 + 1;
      *a3 = v8;
    }
  }
  else
  {
    v6 = -1073741772;
  }
  KeReleaseSpinLock(&ndisIfListLock, v9);
  if ( v6 < 0 )
    *a3 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x1Cu,
      (struct _GUID *)&WPP_44cacc4423dd306c9dbb65f5b8fbc273_Traceguids,
      v6,
      a3);
  return (unsigned int)v6;
}
