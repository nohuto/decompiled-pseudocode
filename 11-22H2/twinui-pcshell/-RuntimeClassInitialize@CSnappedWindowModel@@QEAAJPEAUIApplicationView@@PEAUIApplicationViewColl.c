/*
 * XREFs of ?RuntimeClassInitialize@CSnappedWindowModel@@QEAAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@@Z @ 0x180667508
 * Callers:
 *     ??$MakeAndInitialize@VCSnappedWindowModel@@V1@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveMonitorManager@@AEAW4SnappedWindowOcclusionModel@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnappedWindowModel@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveMonitorManager@@AEAW4SnappedWindowOcclusionModel@@@Z @ 0x1806664AC (--$MakeAndInitialize@VCSnappedWindowModel@@V1@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewCo.c)
 * Callees:
 *     ??0?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@QEAA@XZ @ 0x18008B3D0 (--0-$deque@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_clock@chrono@.c)
 *     ??1?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x180666F78 (--1-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CSnappedWindowModel@@QEAAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18066758C (-RuntimeClassInitialize@CSnappedWindowModel@@QEAAJPEAUIApplicationView@@PEAUIApplic_ea_18066758C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSnappedWindowModel::RuntimeClassInitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  _QWORD *v9; // rax
  void *v11[6]; // [rsp+30h] [rbp-38h] BYREF

  v9 = std::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>(v11);
  LODWORD(a4) = CSnappedWindowModel::RuntimeClassInitialize(a1, a2, a3, a4, a5, v9, v11[0]);
  std::deque<tagRECT>::~deque<tagRECT>(v11);
  return (unsigned int)a4;
}
