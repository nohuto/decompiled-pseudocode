/*
 * XREFs of ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C012BC6C
 * Callers:
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0106AA4 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000D340 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C001D194 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C001E260 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x1C001E30C (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_ZZL @ 0x1C001F9B8 (WPP_RECORDER_SF_ZZL.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0020738 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C00962E0 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C01010E0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0106340 (-WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0106378 (-RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x1C0109C6C (-ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 */

__int64 __fastcall ndisBindLegacyProtocol(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PROTOCOL_BLOCK *a2,
        struct NDIS_BIND_PROTOCOL_LINK *a3)
{
  _NDIS_PNP_DEVICE_STATE PnPDeviceState; // ecx
  _NDIS_BIND_PATHS *BindPaths; // r14
  _UNICODE_STRING *Paths; // r14
  _DEVICE_OBJECT *PhysicalDeviceObject; // r12
  __m128i v10; // xmm0
  __int16 v11; // ax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  void *m_AdditionalContext; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned int Blink; // eax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r9
  int v24; // [rsp+28h] [rbp-E0h]
  void *v25; // [rsp+40h] [rbp-C8h]
  _LIST_ENTRY Destination_8; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING Source_8; // [rsp+78h] [rbp-90h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  struct _KEVENT v29[6]; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v30; // [rsp+170h] [rbp+68h] BYREF

  memset(v29, 0, sizeof(v29));
  v30 = -1073741823;
  Destination_8 = 0LL;
  Source_8 = 0LL;
  DestinationString = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0xAu,
      (struct _GUID *)&WPP_00be6b421a7931e0b0f96a5f66efcc23_Traceguids,
      (char)a1,
      a2);
  WAIT_FOR_PROTO_MUTEX(a2);
  if ( !ndisIsMiniportStarted(a1)
    || (PnPDeviceState = a1->PnPDeviceState, ((PnPDeviceState - 1) & 0xFFFFFFFC) != 0)
    || PnPDeviceState == NdisPnPDeviceStopped )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        6u,
        0xBu,
        (struct _GUID *)&WPP_00be6b421a7931e0b0f96a5f66efcc23_Traceguids,
        (char)a1,
        a2);
  }
  else if ( a1->EthDB )
  {
    BindPaths = a1->BindPaths;
    a2->BindDeviceName = &a1->MiniportName;
    Paths = BindPaths->Paths;
    a2->RootDeviceName = Paths;
    PhysicalDeviceObject = a1->PhysicalDeviceObject;
    if ( ndisReferenceProtocol(a2, 7u) )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Parameters\\Adapters\\");
      Source_8 = *Paths;
      v10 = (__m128i)Source_8;
      Source_8.MaximumLength -= ndisDeviceStr.Length;
      Source_8.Length = _mm_cvtsi128_si32(v10) - ndisDeviceStr.Length;
      Source_8.Buffer += (unsigned __int64)ndisDeviceStr.Length >> 1;
      v11 = Paths->Length - ndisDeviceStr.Length;
      LOWORD(Destination_8.Flink) = 0;
      WORD1(Destination_8.Flink) = a2->Name.Length + DestinationString.Length + v11 + 2;
      Destination_8.Blink = (_LIST_ENTRY *)ExAllocatePool2(64LL, WORD1(Destination_8.Flink), 538985550);
      if ( Destination_8.Blink )
      {
        RtlCopyUnicodeString((PUNICODE_STRING)&Destination_8, &a2->Name);
        RtlAppendUnicodeStringToString((PUNICODE_STRING)&Destination_8, &DestinationString);
        RtlAppendUnicodeStringToString((PUNICODE_STRING)&Destination_8, &Source_8);
        ndisUpdateMinimumStackVersion(a1, a2->MajorNdisVersion, a2->MinorNdisVersion);
        v29[0].Header.WaitListHead.Flink = (_LIST_ENTRY *)a2;
        *(_QWORD *)&v29[1].Header.Lock = a1;
        *(_QWORD *)&v29[2].Header.Lock = Paths;
        v29[1].Header.WaitListHead = Destination_8;
        KeInitializeEvent(&v29[4], NotificationEvent, 0);
        if ( !a2->Ref.Closing )
        {
          v30 = 0;
          a2->BindingAdapter = a1;
          m_AdditionalContext = a3->BindState.m_AdditionalContext;
          if ( m_AdditionalContext )
          {
            a3->BindState.m_AdditionalContext = 0LL;
            ndisOpenAdapterLegacyProtocol(
              *(int **)m_AdditionalContext,
              0LL,
              *((void ***)m_AdditionalContext + 1),
              *((unsigned int **)m_AdditionalContext + 2),
              *((enum _NDIS_MEDIUM **)m_AdditionalContext + 3),
              *((_DWORD *)m_AdditionalContext + 8),
              *((struct _NDIS_PROTOCOL_BLOCK **)m_AdditionalContext + 5),
              *((void **)m_AdditionalContext + 6),
              *((struct _UNICODE_STRING **)m_AdditionalContext + 7),
              0,
              0LL,
              (int *)&v30);
            v18 = *((_QWORD *)m_AdditionalContext + 1);
            if ( *(_QWORD *)v18 )
              *(_DWORD *)(*(_QWORD *)v18 + 224LL) |= 0x20000000u;
          }
          else
          {
            a2->BindAdapterHandler((int *)&v30, v29, Paths, &Destination_8, PhysicalDeviceObject);
          }
          Blink = v30;
          if ( v30 == 259 )
          {
            ndisWaitForKernelObject(&v29[4]);
            Blink = (unsigned int)v29[3].Header.WaitListHead.Blink;
            v30 = (unsigned int)v29[3].Header.WaitListHead.Blink;
          }
          a2->BindingAdapter = 0LL;
          if ( !Blink )
            ndisNotifyWmiBindUnbind(a1, a2, 1u);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_ZZL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v16,
              v17,
              0xCu,
              v24,
              &a2->Name.Length,
              &a1->pAdapterInstanceName->Length);
        }
        ExFreePoolWithTag(Destination_8.Blink, 0);
        LOBYTE(v20) = 7;
        a2->BindDeviceName = 0LL;
        ndisDereferenceProtocol(a2, v21, v20, v22);
      }
      else
      {
        LOBYTE(v13) = 7;
        ndisDereferenceProtocol(a2, v12, v13, v14);
      }
    }
  }
  RELEASE_PROT_MUTEX(a2);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v25) = v30;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0xDu,
      (struct _GUID *)&WPP_00be6b421a7931e0b0f96a5f66efcc23_Traceguids,
      (char)a1,
      (char)a2,
      v25);
  }
  return v30;
}
