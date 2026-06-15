/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140020820
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIIPEBGPEAXI_J3W4__MIDL___MIDL_itf_audioengineendpointp_0000_0001_0001@@PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x1400171E0 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIIPEBGPEAXI_J3W4__MIDL___M.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x14004BA7C (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x14004E708 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUtWAVEFORMATEX@@PEBGIIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x14009DEFC (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUt.c)
 * Callees:
 *     StringCopyWorkerW_0 @ 0x140020848 (StringCopyWorkerW_0.c)
 */

HRESULT __fastcall StringCchCopyW(unsigned __int16 *a1, size_t a2, size_t *a3)
{
  HRESULT result; // eax
  size_t v4; // [rsp+20h] [rbp-18h]

  if ( a2 - 1 <= 0x7FFFFFFE )
    return StringCopyWorkerW_0(a1, a2, a3, (STRSAFE_PCNZWCH)a3, v4);
  result = -2147024809;
  if ( a2 )
    *a1 = 0;
  return result;
}
