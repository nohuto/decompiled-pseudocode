/*
 * XREFs of RtlStringCbCopyA @ 0x140348308
 * Callers:
 *     PfpPrivSourceEnum @ 0x1407419A0 (PfpPrivSourceEnum.c)
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 *     ObpRegisterObject @ 0x14097D5B4 (ObpRegisterObject.c)
 *     EtwpLogRefSetAutoMark @ 0x1409EF304 (EtwpLogRefSetAutoMark.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 *     IopStoreArcInformation @ 0x140B72390 (IopStoreArcInformation.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x140348334 (RtlStringCopyWorkerA.c)
 */

NTSTATUS __stdcall RtlStringCbCopyA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszSrc)
{
  NTSTATUS result; // eax
  size_t v4; // [rsp+20h] [rbp-18h]

  if ( cbDest - 1 <= 0x7FFFFFFE )
    return RtlStringCopyWorkerA(pszDest, cbDest, 0LL, pszSrc, v4);
  result = -1073741811;
  if ( cbDest )
    *pszDest = 0;
  return result;
}
