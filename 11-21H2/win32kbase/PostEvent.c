/*
 * XREFs of PostEvent @ 0x1C01E8148
 * Callers:
 *     ?SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@PEAVForegroundChangeTracker@1@@Z @ 0x1C0142BC0 (-SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z @ 0x1C0142F28 (-ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z.c)
 *     NtMITPostWindowEventMessage @ 0x1C0155930 (NtMITPostWindowEventMessage.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C002CA0C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C002CA34 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall PostEvent(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  bool v6; // bl
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v8, a2, a3);
  if ( qword_1C029CD58 )
    v5 = qword_1C029CD58(30LL, a1, a2);
  else
    v5 = -1073741637;
  v6 = v5 != 0;
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v8);
  return v6;
}
