/*
 * XREFs of ndisNsiQueuedIfBlockRodChangeNotification @ 0x1C0024F20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C001C3A4 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C0111B04 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

void __fastcall ndisNsiQueuedIfBlockRodChangeNotification(__int64 a1, __int64 a2)
{
  struct _NDIS_IF_BLOCK *v2; // rsi
  __int64 v4; // rax
  KIRQL v5; // bl
  _DWORD v6[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+44h] [rbp-14h]

  v2 = *(struct _NDIS_IF_BLOCK **)(a2 + 80);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x22u,
      (struct _GUID *)&WPP_b26d01b0bab2332eb15f1eb1befd6893_Traceguids,
      *(_QWORD *)(a2 + 80));
  v4 = *(_QWORD *)(a2 + 88);
  v6[1] = 0;
  v7 = v4;
  v8 = *(_DWORD *)(a2 + 96);
  v9 = *(_DWORD *)(a2 + 100);
  v6[0] = 1;
  ndisNsiNotifyClientInterfaceChange(v2, 0LL, v6);
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF(v2, 0xAu);
  KeReleaseSpinLock(&ndisIfListLock, v5);
  ExFreePoolWithTag((PVOID)a2, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x23u,
      (struct _GUID *)&WPP_b26d01b0bab2332eb15f1eb1befd6893_Traceguids);
}
