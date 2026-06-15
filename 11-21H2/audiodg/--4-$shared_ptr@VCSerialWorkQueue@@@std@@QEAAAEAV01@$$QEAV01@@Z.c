/*
 * XREFs of ??4?$shared_ptr@VCSerialWorkQueue@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x140067BF4
 * Callers:
 *     ??0CReleaseContext@@QEAA@AEAV?$shared_ptr@VCSerialWorkQueue@@@std@@@Z @ 0x140031FF0 (--0CReleaseContext@@QEAA@AEAV-$shared_ptr@VCSerialWorkQueue@@@std@@@Z.c)
 *     ?StartSendingNotifications@CAPOProcessingHostObject@@QEAAJXZ @ 0x14006845C (-StartSendingNotifications@CAPOProcessingHostObject@@QEAAJXZ.c)
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUtWAVEFORMATEX@@PEBGIIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x1400922C8 (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUt.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z @ 0x140092A3C (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14002DA28 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::shared_ptr<CSerialWorkQueue>::operator=(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  std::_Ref_count_base *v5; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = a2[1];
  a2[1] = 0LL;
  *a1 = v2;
  v5 = (std::_Ref_count_base *)a1[1];
  a1[1] = v4;
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return a1;
}
