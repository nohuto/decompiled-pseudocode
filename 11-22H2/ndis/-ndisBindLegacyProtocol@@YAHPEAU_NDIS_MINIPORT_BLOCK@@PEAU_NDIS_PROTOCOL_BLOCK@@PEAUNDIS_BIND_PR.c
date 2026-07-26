/*
 * XREFs of ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C0137B08
 * Callers:
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C01129FC (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000CC20 (WPP_RECORDER_SF_qqL.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C001E558 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C001F2A0 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x1C001F3F4 (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_ZZL @ 0x1C0020720 (WPP_RECORDER_SF_ZZL.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002293C (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C009C32C (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C600 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C01123E0 (-WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0112418 (-RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x1C011606C (-ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
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
  int v12; // edx
  int v13; // r9d
  void *m_AdditionalContext; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned int Blink; // eax
  int v19; // edx
  int v20; // r9d
  int v22; // [rsp+28h] [rbp-E0h]
  void *v23; // [rsp+40h] [rbp-C8h]
  _LIST_ENTRY Destination_8; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING Source_8; // [rsp+78h] [rbp-90h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  struct _KEVENT v27[6]; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v28; // [rsp+170h] [rbp+68h] BYREF

  memset(v27, 0, sizeof(v27));
  v28 = -1073741823;
  Destination_8 = 0LL;
  Source_8 = 0LL;
  DestinationString = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0xAu,
      (struct _GUID *)&WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids,
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
        (struct _GUID *)&WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids,
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
        v27[0].Header.WaitListHead.Flink = (_LIST_ENTRY *)a2;
        *(_QWORD *)&v27[1].Header.Lock = a1;
        *(_QWORD *)&v27[2].Header.Lock = Paths;
        v27[1].Header.WaitListHead = Destination_8;
        KeInitializeEvent(&v27[4], NotificationEvent, 0);
        if ( !a2->Ref.Closing )
        {
          v28 = 0;
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
              (int *)&v28);
            v17 = *((_QWORD *)m_AdditionalContext + 1);
            if ( *(_QWORD *)v17 )
              *(_DWORD *)(*(_QWORD *)v17 + 224LL) |= 0x20000000u;
          }
          else
          {
            a2->BindAdapterHandler((int *)&v28, v27, Paths, &Destination_8, PhysicalDeviceObject);
          }
          Blink = v28;
          if ( v28 == 259 )
          {
            ndisWaitForKernelObject(&v27[4]);
            Blink = (unsigned int)v27[3].Header.WaitListHead.Blink;
            v28 = (unsigned int)v27[3].Header.WaitListHead.Blink;
          }
          a2->BindingAdapter = 0LL;
          if ( !Blink )
            ndisNotifyWmiBindUnbind(a1, a2, 1u);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_ZZL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v15,
              v16,
              0xCu,
              v22,
              &a2->Name.Length,
              &a1->pAdapterInstanceName->Length);
        }
        ExFreePoolWithTag(Destination_8.Blink, 0);
        a2->BindDeviceName = 0LL;
        ndisDereferenceProtocol(a2, v19, 7u, v20);
      }
      else
      {
        ndisDereferenceProtocol(a2, v12, 7u, v13);
      }
    }
  }
  RELEASE_PROT_MUTEX(a2);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v23) = v28;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0xDu,
      (struct _GUID *)&WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids,
      (char)a1,
      (char)a2,
      v23);
  }
  return v28;
}
