/*
 * XREFs of ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C001E558
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C009C32C (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C010FD30 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0112B80 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C0137B08 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0147C28 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000CC20 (WPP_RECORDER_SF_qqL.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C001C6B0 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     WPP_RECORDER_SF_L @ 0x1C0030BF4 (WPP_RECORDER_SF_L_ea_1C0030BF4.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C005E37C (McTemplateK0qqq_EtwWriteTransfer.c)
 */

void __fastcall ndisNotifyWmiBindUnbind(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PROTOCOL_BLOCK *a2,
        unsigned __int8 a3)
{
  int v6; // ebp
  __int128 *v7; // r9
  PVOID v8; // rsi
  char *v9; // rbx
  NTSTATUS v10; // eax
  int v11; // edx
  int v12; // ecx
  NTSTATUS v13; // ebx
  __int64 v14; // [rsp+38h] [rbp-30h]
  PVOID Argument1; // [rsp+70h] [rbp+8h] BYREF

  Argument1 = 0LL;
  v6 = a3;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x6Bu,
      (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  v7 = (__int128 *)&GUID_NDIS_NOTIFY_BIND;
  if ( !a3 )
    v7 = (__int128 *)&GUID_NDIS_NOTIFY_UNBIND;
  ndisSetupWmiNode(
    a1,
    a1->pAdapterInstanceName,
    a1->BindPaths->Paths[0].Length + a2->Name.Length + 4,
    v7,
    (struct tagWNODE_SINGLE_INSTANCE **)&Argument1);
  v8 = Argument1;
  if ( Argument1 )
  {
    v9 = (char *)Argument1 + *((unsigned int *)Argument1 + 14);
    memmove(v9, a2->Name.Buffer, a2->Name.Length);
    memmove(&v9[a2->Name.Length + 2], a1->BindPaths->Paths[0].Buffer, a1->BindPaths->Paths[0].Length);
    if ( ndisBindUnbindCallbackObject )
      ExNotifyCallback(ndisBindUnbindCallbackObject, v8, 0LL);
    v10 = IoWMIWriteEvent(v8);
    v13 = v10;
    if ( v10 < 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_L(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v11,
          13,
          108,
          (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
          v10);
      }
      if ( (byte_1C00F7641 & 0x10) != 0 )
        McTemplateK0qqq_EtwWriteTransfer(v12, (unsigned int)&IoWMIWriteEventFailed, (_DWORD)a1 + 4008, v13, 4, 0);
      ExFreePoolWithTag(v8, 0);
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v14) = v6;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x6Du,
      (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
      (char)a1,
      (char)a2,
      v14);
  }
}
