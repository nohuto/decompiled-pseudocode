/*
 * XREFs of CmpReparseToVirtualPath @ 0x140A19F04
 * Callers:
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E2300 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpVEExecuteCreateLogic @ 0x1407BA444 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A17F74 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A18238 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x14076F3D0 (RtlFreeUnicodeString.c)
 *     CmRealKCBToVirtualPath @ 0x140A18608 (CmRealKCBToVirtualPath.c)
 *     CmpVirtualPathPresent @ 0x140A1A7E0 (CmpVirtualPathPresent.c)
 */

char __fastcall CmpReparseToVirtualPath(__int64 a1, __int64 a2, __int64 a3, UNICODE_STRING *a4)
{
  char v7; // bl
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (*(_DWORD *)(a1 + 184) & 0x800000) != 0 && (int)CmRealKCBToVirtualPath(a1, 0LL, a3, &DestinationString) >= 0 )
  {
    v7 = CmpVirtualPathPresent(&DestinationString);
    if ( v7 )
    {
      *a4 = DestinationString;
      RtlInitUnicodeString(&DestinationString, 0LL);
      v7 = 1;
    }
  }
  else
  {
    v7 = 0;
  }
  if ( DestinationString.Buffer )
    RtlFreeUnicodeString(&DestinationString);
  return v7;
}
