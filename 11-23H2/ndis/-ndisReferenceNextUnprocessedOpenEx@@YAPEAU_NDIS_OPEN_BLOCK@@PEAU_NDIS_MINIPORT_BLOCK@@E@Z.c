/*
 * XREFs of ?ndisReferenceNextUnprocessedOpenEx@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0014B80
 * Callers:
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C01477A0 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00084A8 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 */

struct _NDIS_OPEN_BLOCK *__fastcall ndisReferenceNextUnprocessedOpenEx(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_OPEN_BLOCK *i; // rbx
  int v4; // [rsp+30h] [rbp-28h]
  KIRQL NewIrql; // [rsp+68h] [rbp+10h] BYREF

  NewIrql = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v4 = 1;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x14u,
      (struct _GUID *)&WPP_6b67e79cbf5736d8de5dcc27eb05ee5a_Traceguids,
      (char)a1,
      v4);
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  for ( i = a1->OpenQueue; i; i = i->MiniportNextOpen )
  {
    KeAcquireSpinLockAtDpcLevel(&i->SpinLock);
    if ( (i->OpenFlags & 0x80000) != 0 && (i->OpenFlags & 0x10) == 0 )
    {
      i->OpenFlags |= 0x10u;
    }
    else if ( (i->OpenFlags & 0x18010) == 0 )
    {
      i->OpenFlags |= 0x80010u;
      KeReleaseSpinLockFromDpcLevel(&i->SpinLock);
      break;
    }
    KeReleaseSpinLockFromDpcLevel(&i->SpinLock);
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, NewIrql);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x15u,
      (struct _GUID *)&WPP_6b67e79cbf5736d8de5dcc27eb05ee5a_Traceguids,
      (char)a1,
      i);
  return i;
}
