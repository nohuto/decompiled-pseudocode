/*
 * XREFs of ?RememberPropertyName@CompObjectDiagnosticsPrincipal@@QEAA_NIPEAUHSTRING__@@@Z @ 0x18019E284
 * Callers:
 *     ?DebugProperty2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUIDebugAnimationCallback@Private@234@PEAUHSTRING__@@PEAPEAUIClosable@Foundation@4@@Z @ 0x18016B67C (-DebugProperty2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUIDe.c)
 *     ?DebugReferenceProperty@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVCompObjectDiagnosticsPrincipal@@IAEBUObjectPropertyStringTuple@@@Z @ 0x18016BB7C (-DebugReferenceProperty@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVCompObjectDiagn.c)
 * Callees:
 *     ??$_Try_emplace@AEBIAEAPEAUHSTRING__@@@?$map@IUPropInfo@CompObjectDiagnosticsPrincipal@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@PEAX@std@@_N@1@AEBIAEAPEAUHSTRING__@@@Z @ 0x18019C3D4 (--$_Try_emplace@AEBIAEAPEAUHSTRING__@@@-$map@IUPropInfo@CompObjectDiagnosticsPrincipal@@U-$less@.c)
 */

bool __fastcall CompObjectDiagnosticsPrincipal::RememberPropertyName(
        CompObjectDiagnosticsPrincipal *this,
        unsigned int a2,
        HSTRING a3)
{
  __int64 v3; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v6; // [rsp+48h] [rbp+10h] BYREF
  HSTRING v7; // [rsp+50h] [rbp+18h]

  v7 = a3;
  v6 = a2;
  std::map<unsigned int,CompObjectDiagnosticsPrincipal::PropInfo>::_Try_emplace<unsigned int const &,HSTRING__ * &>(
    (__int64 *)this + 7,
    (__int64)v5,
    &v6);
  v3 = v5[0];
  ++*(_DWORD *)(v5[0] + 48LL);
  return *(_DWORD *)(v3 + 48) == 1;
}
