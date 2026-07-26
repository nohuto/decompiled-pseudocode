/*
 * XREFs of ndisMapOpenByName @ 0x1C007467C
 * Callers:
 *     ndisHandleProtocolReconfigNotification @ 0x1C0156158 (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006690 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0011218 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001F5AC (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C00235E4 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisEqualUnicodeStringDispatchLevel@@YA_NPEBU_UNICODE_STRING@@0@Z @ 0x1C0026BF4 (-ndisEqualUnicodeStringDispatchLevel@@YA_NPEBU_UNICODE_STRING@@0@Z.c)
 */

__int64 __fastcall ndisMapOpenByName(PCUNICODE_STRING SourceString, __int64 a2)
{
  __int64 v4; // rdi
  KIRQL v6; // al
  __int64 v7; // rbx
  KIRQL v8; // r14
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF

  DestinationString = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Zq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      6u,
      0xAu,
      (struct _GUID *)&WPP_f447471922483fea15b29c0a6cad7a3c_Traceguids,
      &SourceString->Length,
      a2);
  DestinationString.Length = SourceString->Length;
  DestinationString.MaximumLength = DestinationString.Length + 2;
  v4 = 0LL;
  DestinationString.Buffer = (wchar_t *)ExAllocatePool2(
                                          66LL,
                                          (unsigned __int16)(DestinationString.Length + 2),
                                          1953711182);
  if ( DestinationString.Buffer )
  {
    RtlUpcaseUnicodeString(&DestinationString, SourceString, 0);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 32));
    v7 = *(_QWORD *)(a2 + 24);
    v8 = v6;
    while ( v7 )
    {
      if ( ndisEqualUnicodeStringDispatchLevel(&DestinationString, *(const struct _UNICODE_STRING **)(v7 + 416)) )
      {
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 232));
        if ( (*(_DWORD *)(v7 + 224) & 0x10) == 0
          && ndisReferenceMiniport(*(struct _NDIS_MINIPORT_BLOCK **)(v7 + 16), 0x34u) )
        {
          v4 = v7;
          ndisMReferenceOpen(v7, 4u);
          *(_DWORD *)(v7 + 224) |= 0x10u;
        }
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v7 + 232));
        break;
      }
      v7 = *(_QWORD *)(v7 + 400);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 32), v8);
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        6u,
        0xCu,
        (struct _GUID *)&WPP_f447471922483fea15b29c0a6cad7a3c_Traceguids,
        v4);
    return v4;
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        6u,
        0xBu,
        (struct _GUID *)&WPP_f447471922483fea15b29c0a6cad7a3c_Traceguids);
    return 0LL;
  }
}
