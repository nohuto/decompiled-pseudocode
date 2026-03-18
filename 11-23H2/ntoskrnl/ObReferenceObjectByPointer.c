/*
 * XREFs of ObReferenceObjectByPointer @ 0x14022A980
 * Callers:
 *     EtwpAddUmRegEntry @ 0x1406BFA44 (EtwpAddUmRegEntry.c)
 *     WmipQuerySetExecuteSI @ 0x1406C6D3C (WmipQuerySetExecuteSI.c)
 *     ObpParseSymbolicLinkEx @ 0x1406C70C0 (ObpParseSymbolicLinkEx.c)
 *     WmipQueryAllData @ 0x1406C7A7C (WmipQueryAllData.c)
 *     ObpLookupObjectName @ 0x1406ED720 (ObpLookupObjectName.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x140767940 (IopAllocateFoExtensionsOnCreate.c)
 *     NtImpersonateAnonymousToken @ 0x1407F4FB0 (NtImpersonateAnonymousToken.c)
 *     EtwpStopTrace @ 0x1407F8284 (EtwpStopTrace.c)
 *     HalGetAdapterV3 @ 0x140827530 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140827AC0 (HalGetAdapterV2.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140827D60 (HalpDmaAllocateChildAdapterV2.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x140828A90 (HalpDmaAllocateChildAdapterV3.c)
 *     WmipRegisterDevice @ 0x14086BF88 (WmipRegisterDevice.c)
 *     EtwpRegisterPrivateSession @ 0x1409EC85C (EtwpRegisterPrivateSession.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140582BD8 (ObpPushStackInfo.c)
 */

NTSTATUS __stdcall ObReferenceObjectByPointer(
        PVOID Object,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode)
{
  volatile signed __int64 *v4; // rdi
  signed __int64 BugCheckParameter4; // rbx

  if ( !ObjectType )
  {
    if ( !AccessMode )
    {
      v4 = (volatile signed __int64 *)((char *)Object - 48);
      goto LABEL_3;
    }
    return -1073741788;
  }
  v4 = (volatile signed __int64 *)((char *)Object - 48);
  if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((char *)Object - 24) ^ ((unsigned __int16)((_WORD)Object - 48) >> 8))) != ObjectType->Index )
    return -1073741788;
LABEL_3:
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)v4);
  BugCheckParameter4 = _InterlockedIncrement64(v4);
  if ( BugCheckParameter4 <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v4 + 6), 0x10uLL, BugCheckParameter4);
  return 0;
}
