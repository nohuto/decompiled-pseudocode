/*
 * XREFs of ?DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z @ 0x180027594
 * Callers:
 *     ?AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ @ 0x180027450 (-AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ.c)
 *     _lambda_fed9ba16c3d217f0d904c8b3d5c7d5f7_::operator() @ 0x1801ACC4C (_lambda_fed9ba16c3d217f0d904c8b3d5c7d5f7_--operator().c)
 * Callees:
 *     _lambda_7d2adfcb316475bfe2a248d90f5ee63b_::operator() @ 0x1801ACAE4 (_lambda_7d2adfcb316475bfe2a248d90f5ee63b_--operator().c)
 */

char __fastcall ImmersiveMonitorHelper::DoesMonitorSupportTaskbar(
        ImmersiveMonitorHelper *this,
        struct IImmersiveMonitor *a2)
{
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF
  char v4; // [rsp+50h] [rbp+8h] BYREF
  struct IImmersiveMonitor *v5; // [rsp+58h] [rbp+10h] BYREF

  v5 = a2;
  v3[1] = this;
  v3[0] = &v5;
  v4 = 0;
  v3[2] = &v4;
  lambda_7d2adfcb316475bfe2a248d90f5ee63b_::operator()(v3);
  return v4;
}
