/*
 * XREFs of ??4?$shared_ptr@VCSerialWorkQueue@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x14003B2F8
 * Callers:
 *     ?put@?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x140065FD4 (-put@-$shared_any_t@V-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP.c)
 *     ?ShutdownWorkQueue@CAPOProcessingHostObject@@AEAAJXZ @ 0x1400702CC (-ShutdownWorkQueue@CAPOProcessingHostObject@@AEAAJXZ.c)
 *     ?StartSendingNotifications@CAPOProcessingHostObject@@QEAAJXZ @ 0x140070350 (-StartSendingNotifications@CAPOProcessingHostObject@@QEAAJXZ.c)
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUtWAVEFORMATEX@@PEBGIIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x14009DEFC (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUt.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z @ 0x14009E678 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1400382FE (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
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
