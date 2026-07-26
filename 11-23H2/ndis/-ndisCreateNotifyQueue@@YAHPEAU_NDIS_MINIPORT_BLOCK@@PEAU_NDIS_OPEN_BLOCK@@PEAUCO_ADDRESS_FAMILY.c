/*
 * XREFs of ?ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY@@PEAPEAU_NDIS_AF_NOTIFY@@@Z @ 0x1C0156E30
 * Callers:
 *     NdisCmRegisterAddressFamilyEx @ 0x1C00BD3B0 (NdisCmRegisterAddressFamilyEx.c)
 *     ?ndisMFinishQueuedPendingOpen@@YAXPEAX@Z @ 0x1C01532B0 (-ndisMFinishQueuedPendingOpen@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C000D200 (WPP_RECORDER_SF_qqD.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001F6C4 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001F73C (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisDereferenceAfNotification@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00BC778 (-ndisDereferenceAfNotification@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisCreateNotifyQueue(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OPEN_BLOCK *a2,
        struct CO_ADDRESS_FAMILY *a3,
        struct _NDIS_AF_NOTIFY **a4)
{
  unsigned int v8; // edi
  _NDIS_AF_LIST *CallMgrAfList; // rbx
  __int64 Pool2; // r15
  _NDIS_OPEN_BLOCK *i; // rbx
  __int64 v12; // r15
  _QWORD *v13; // rax
  void *v15; // rcx
  struct _NDIS_OPEN_BLOCK *v16; // rbx

  v8 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0xCu,
      (struct _GUID *)&WPP_1ba601ee69d03855ff220f07563e78fc_Traceguids,
      (char)a1,
      a2);
  *a4 = 0LL;
  if ( a2 )
  {
    KeAcquireSpinLockAtDpcLevel(&a2->SpinLock);
    if ( (a2->OpenFlags & 0x18000) == 0 )
    {
      CallMgrAfList = a1->CallMgrAfList;
      while ( CallMgrAfList )
      {
        Pool2 = ExAllocatePool2(64LL, 72LL, 1868776526);
        if ( !Pool2 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0x13u,
              0xDu,
              (struct _GUID *)&WPP_1ba601ee69d03855ff220f07563e78fc_Traceguids);
          v8 = -1073741670;
          break;
        }
        _InterlockedIncrement(&a2->PendingAfNotifications);
        ndisMReferenceOpen((__int64)a2, 0xEu);
        *(_QWORD *)(Pool2 + 40) = a1;
        *(_QWORD *)(Pool2 + 48) = a2;
        *(_QWORD *)(Pool2 + 56) = *(_QWORD *)&CallMgrAfList->AddressFamily.AddressFamily;
        *(_DWORD *)(Pool2 + 64) = CallMgrAfList->AddressFamily.MinorVersion;
        *(_QWORD *)Pool2 = *a4;
        CallMgrAfList = CallMgrAfList->NextAf;
        *a4 = (struct _NDIS_AF_NOTIFY *)Pool2;
      }
    }
    KeReleaseSpinLockFromDpcLevel(&a2->SpinLock);
    if ( v8 )
    {
LABEL_30:
      v15 = *a4;
      if ( *a4 )
      {
        do
        {
          v16 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)v15 + 6);
          *a4 = *(struct _NDIS_AF_NOTIFY **)v15;
          ExFreePoolWithTag(v15, 0);
          ndisDereferenceAfNotification(v16);
          ndisMDereferenceOpenLocked((__int64)v16, 0xEu);
          v15 = *a4;
        }
        while ( *a4 );
        goto LABEL_24;
      }
    }
  }
  else
  {
    for ( i = a1->OpenQueue; i; i = i->MiniportNextOpen )
    {
      if ( i->ProtocolHandle->CoAfRegisterNotifyHandler )
      {
        KeAcquireSpinLockAtDpcLevel(&i->SpinLock);
        if ( (i->OpenFlags & 0x18000) != 0 )
        {
          KeReleaseSpinLockFromDpcLevel(&i->SpinLock);
        }
        else
        {
          v12 = ExAllocatePool2(64LL, 72LL, 1868776526);
          if ( !v12 )
          {
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                2u,
                0x13u,
                0xEu,
                (struct _GUID *)&WPP_1ba601ee69d03855ff220f07563e78fc_Traceguids);
            v8 = -1073741670;
            KeReleaseSpinLockFromDpcLevel(&i->SpinLock);
            goto LABEL_30;
          }
          _InterlockedIncrement(&i->PendingAfNotifications);
          ndisMReferenceOpen((__int64)i, 0xEu);
          KeReleaseSpinLockFromDpcLevel(&i->SpinLock);
          *(_QWORD *)(v12 + 40) = a1;
          *(_QWORD *)(v12 + 48) = i;
          *(_QWORD *)(v12 + 56) = *(_QWORD *)&a3->AddressFamily;
          *(_DWORD *)(v12 + 64) = a3->MinorVersion;
          *(_QWORD *)v12 = *a4;
          *a4 = (struct _NDIS_AF_NOTIFY *)v12;
        }
      }
    }
  }
  v13 = *a4;
  if ( *a4 )
  {
    v13[1] = 0LL;
    v13[3] = ndisNotifyAfRegistration;
    v13[4] = v13;
  }
LABEL_24:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0xFu,
      (struct _GUID *)&WPP_1ba601ee69d03855ff220f07563e78fc_Traceguids,
      (char)a1,
      (char)a2,
      v8);
  return v8;
}
