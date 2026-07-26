/*
 * XREFs of ?ndisFindMiniportOnGlobalList@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@@Z @ 0x1C0153124
 * Callers:
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C0063E60 (NdisIMInitializeDeviceInstanceEx.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0003060 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C001C58C (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisEqualUnicodeStringDispatchLevel@@YA_NPEBU_UNICODE_STRING@@0@Z @ 0x1C0026D84 (-ndisEqualUnicodeStringDispatchLevel@@YA_NPEBU_UNICODE_STRING@@0@Z.c)
 */

struct _NDIS_MINIPORT_BLOCK *__fastcall ndisFindMiniportOnGlobalList(PCUNICODE_STRING SourceString)
{
  struct _NDIS_MINIPORT_BLOCK *result; // rax
  struct _NDIS_MINIPORT_BLOCK *v3; // rdi
  KIRQL v4; // al
  struct _NDIS_MINIPORT_BLOCK *v5; // rbx
  KIRQL v6; // si
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x66u,
      (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
      SourceString,
      *(_QWORD *)&DestinationString.Length,
      DestinationString.Buffer);
  DestinationString.Length = SourceString->Length;
  DestinationString.MaximumLength = DestinationString.Length + 2;
  result = (struct _NDIS_MINIPORT_BLOCK *)ExAllocatePool2(
                                            66LL,
                                            (unsigned __int16)(DestinationString.Length + 2),
                                            1953711182);
  DestinationString.Buffer = (wchar_t *)&result->Header.Type;
  v3 = result;
  if ( result )
  {
    RtlUpcaseUnicodeString(&DestinationString, SourceString, 0);
    ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    v5 = ndisMiniportList;
    v6 = v4;
    while ( v5 && !ndisEqualUnicodeStringDispatchLevel(&DestinationString, &v5->MiniportName) )
      v5 = v5->NextGlobalMiniport;
    KeReleaseSpinLock(&ndisMiniportListLock, v6);
    ndisDereferencePackage((PVOID *)&ndisPkgs);
    ExFreePoolWithTag(v3, 0);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xDu,
        0x67u,
        (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
        v5);
    return v5;
  }
  return result;
}
