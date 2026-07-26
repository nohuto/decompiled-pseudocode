/*
 * XREFs of ?ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z @ 0x1C0057E48
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0145008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C003CE7A (-ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     WPP_RECORDER_SF_DDLc @ 0x1C005B6F4 (WPP_RECORDER_SF_DDLc.c)
 *     WPP_RECORDER_SF_DDLcD @ 0x1C005B7F8 (WPP_RECORDER_SF_DDLcD.c)
 */

__int64 __fastcall ndisAoAcEnableRemoteWake(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PM_NIC_ACTIVE *a2,
        char a3,
        int a4)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // r14
  unsigned int v6; // ebx
  _QWORD *v7; // rsi
  unsigned __int16 *v8; // rbp
  KIRQL v9; // dl
  KSPIN_LOCK *v10; // rcx
  int v11; // r9d

  AoAc = a1->AoAc;
  v6 = 0;
  v7 = (_QWORD *)((char *)a2 + 8);
  v8 = (unsigned __int16 *)((char *)a2 + 14);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDLc(*((_QWORD *)WPP_GLOBAL_Control + 8), (*v7 >> 24) & 0xFFFFFF, a3, a4);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  if ( ndisAoAcIsD0Required(AoAc) )
    *((_BYTE *)AoAc + 386) = a3;
  else
    v6 = -1073741823;
  KeReleaseSpinLock(v10, v9);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDLcD(*((_QWORD *)WPP_GLOBAL_Control + 8), *v8, (*v7 >> 24) & 0xFFFFFF, v11);
  return v6;
}
