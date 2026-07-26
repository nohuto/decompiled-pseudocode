/*
 * XREFs of ?ndisExecuteRSSv2DirectOid@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@U_PROCESSOR_NUMBER@@@Z @ 0x1C008653C
 * Callers:
 *     ?ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU_PROCESSOR_NUMBER@@U3@G22@Z @ 0x1C0086994 (-ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCCC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisAreProcessorsEqual@@YAEU_PROCESSOR_NUMBER@@0@Z @ 0x1C00863AC (-ndisAreProcessorsEqual@@YAEU_PROCESSOR_NUMBER@@0@Z.c)
 *     ?ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00B635C (-ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_N.c)
 */

void __fastcall ndisExecuteRSSv2DirectOid(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        struct _KDPC *a3,
        struct _PROCESSOR_NUMBER a4)
{
  int ProcessorHistory_high; // eax
  int v8; // ebx
  NDIS_PORT_NUMBER PortNumber; // eax
  KIRQL v10; // bl
  struct _KDPC *v11; // rdi
  bool v12; // r15
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-D0h] BYREF
  _PROCESSOR_NUMBER v14; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE SystemArgument1[248]; // [rsp+40h] [rbp-C0h] BYREF

  ProcNumber = 0;
  ProcessorHistory_high = HIDWORD(a3[1].ProcessorHistory);
  v14 = a4;
  if ( ProcessorHistory_high )
  {
    v8 = 24 * ProcessorHistory_high + 20;
    memset(SystemArgument1, 0, sizeof(SystemArgument1));
    *(_DWORD *)&SystemArgument1[88] |= 8u;
    *(_QWORD *)&SystemArgument1[104] = &ndisIntReqGeneric;
    EtwActivityIdControl(3u, (LPGUID)&SystemArgument1[168]);
    PortNumber = a2->PortNumber;
    *(_DWORD *)&SystemArgument1[56] = 0;
    *(_QWORD *)&SystemArgument1[104] = 0LL;
    *(_DWORD *)&SystemArgument1[88] |= 0x1000000u;
    *(_DWORD *)&SystemArgument1[8] = PortNumber;
    *(_QWORD *)&SystemArgument1[40] = (char *)a3 + 68;
    *(_DWORD *)&SystemArgument1[4] = 12;
    *(_DWORD *)&SystemArgument1[32] = 66240;
    *(_DWORD *)&SystemArgument1[48] = v8;
    *(_DWORD *)&SystemArgument1[52] = v8;
    *(_DWORD *)SystemArgument1 = 16253334;
    EtwActivityIdControl(3u, (LPGUID)&SystemArgument1[168]);
    *(_DWORD *)&SystemArgument1[244] = a2[1].RequestType;
    *(_DWORD *)&SystemArgument1[236] = *(_DWORD *)(&a2->Reserved2 + 1);
    *(NDIS_OBJECT_HEADER *)&SystemArgument1[240] = a2[1].Header;
    *(_QWORD *)&SystemArgument1[104] = &ndisIntReqGeneric;
    SystemArgument1[1] = 2;
    *(_WORD *)&SystemArgument1[2] = 248;
    v10 = KfRaiseIrql(2u);
    KeGetCurrentProcessorNumberEx(&ProcNumber);
    v11 = a3 + 1;
    v12 = ndisAreProcessorsEqual(v14, ProcNumber);
    if ( v12 )
      v11->TargetInfoAsUlong = ndisSynchronousOidRequestInternal(
                                 0LL,
                                 a1,
                                 0LL,
                                 (struct _NDIS_OID_REQUEST *)SystemArgument1);
    if ( v10 != 2 )
      KeLowerIrql(v10);
    if ( !v12 )
    {
      a1->RssV2CompletionCount = 1;
      KeResetEvent(&a1->RssV2CompletionEvent);
      v11->TargetInfoAsUlong = 0;
      KeSetTargetProcessorDpcEx(a3, &v14);
      KeInsertQueueDpc(a3, SystemArgument1, a3);
      KeWaitForSingleObject(&a1->RssV2CompletionEvent, Executive, 0, 0, 0LL);
    }
    if ( v11->TargetInfoAsUlong )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        a1->pAdapterInstanceName,
        "Miniport has failed OID_GEN_RSS_SET_INDIRECTION_TABLE_ENTRIES");
      ndisBugCheckEx(0x1CuLL, (ULONG_PTR)a1, 0x102C0uLL, (int)v11->TargetInfoAsUlong);
    }
  }
}
