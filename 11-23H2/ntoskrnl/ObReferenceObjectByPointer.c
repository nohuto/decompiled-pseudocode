/*
 * XREFs of ObReferenceObjectByPointer @ 0x14022AA90
 * Callers:
 *     EtwpAddUmRegEntry @ 0x1406BFA74 (EtwpAddUmRegEntry.c)
 *     WmipQuerySetExecuteSI @ 0x1406C6D6C (WmipQuerySetExecuteSI.c)
 *     ObpParseSymbolicLinkEx @ 0x1406C70F0 (ObpParseSymbolicLinkEx.c)
 *     WmipQueryAllData @ 0x1406C7AAC (WmipQueryAllData.c)
 *     ObpLookupObjectName @ 0x1406ED750 (ObpLookupObjectName.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x140767B30 (IopAllocateFoExtensionsOnCreate.c)
 *     NtImpersonateAnonymousToken @ 0x1407F5280 (NtImpersonateAnonymousToken.c)
 *     EtwpStopTrace @ 0x1407F8554 (EtwpStopTrace.c)
 *     HalGetAdapterV3 @ 0x140827830 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140827DC0 (HalGetAdapterV2.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140828060 (HalpDmaAllocateChildAdapterV2.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x140828D90 (HalpDmaAllocateChildAdapterV3.c)
 *     WmipRegisterDevice @ 0x14086C1C8 (WmipRegisterDevice.c)
 *     EtwpRegisterPrivateSession @ 0x1409ECAEC (EtwpRegisterPrivateSession.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1405830C8 (ObpPushStackInfo.c)
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
