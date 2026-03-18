/*
 * XREFs of IsMiPEnabledForThread @ 0x1C00A1F58
 * Callers:
 *     xxxCapture @ 0x1C00117FC (xxxCapture.c)
 *     IsMiPActive @ 0x1C00A1F08 (IsMiPActive.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserAutoPromoteMouseInPointer @ 0x1C0153E60 (NtUserAutoPromoteMouseInPointer.c)
 *     NtUserPromoteMouseInPointer @ 0x1C01D8B00 (NtUserPromoteMouseInPointer.c)
 *     xxxMNEndMenuStateInternal @ 0x1C01FFB10 (xxxMNEndMenuStateInternal.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMiPEnabledForThread(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 424) + 816LL) & 4) != 0 || (*(_DWORD *)(a1 + 1272) & 0x6000000) != 0;
}
