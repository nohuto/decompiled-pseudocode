/*
 * XREFs of ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C003F8AC
 * Callers:
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C003FB34 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00AE0D8 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00AF268 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0020254 (WPP_RECORDER_SF_qd_ea_1C0020254.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C003F962 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00902F4 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisWdfAcquirePowerReferenceHelper(struct _NDIS_MINIPORT_BLOCK *a1, char a2, char a3)
{
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax
  __int64 v7; // rcx
  unsigned __int8 v8; // dl
  int v9; // ebx

  CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport(a1);
  v9 = ((__int64 (__fastcall *)(_QWORD))CxBlockFromMiniport->Chars.EvtCxPowerReference)(*(_QWORD *)(v7 + 24));
  if ( v9 >= 0 )
  {
    if ( v9 == 259 )
      return;
  }
  else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xFu,
      0x20u,
      (struct _GUID *)&WPP_64b9953f987037c4a892513bd407e9c6_Traceguids,
      (char)a1,
      v9);
  }
  if ( a2 || a3 )
    ndisWdfSelectiveSuspendResumeOperations(a1, v8, v9 < 0);
}
