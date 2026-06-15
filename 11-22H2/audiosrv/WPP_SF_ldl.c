/*
 * XREFs of WPP_SF_ldl @ 0x180132C80
 * Callers:
 *     ?OnMuteStateChanged@CMonitor@@IEAAXH@Z @ 0x18013151C (-OnMuteStateChanged@CMonitor@@IEAAXH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_ldl(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+88h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids, 39LL, &v5);
}
