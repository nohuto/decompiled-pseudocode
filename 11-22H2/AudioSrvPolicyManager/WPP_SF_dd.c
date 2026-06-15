/*
 * XREFs of WPP_SF_dd @ 0x18002BDD4
 * Callers:
 *     ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x180026084 (-CastingStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?DialogSessionStateChanged@CApplication@@QEAAXH@Z @ 0x180026870 (-DialogSessionStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?VoipCallStateChanged@CApplication@@QEAAXH@Z @ 0x18002AF04 (-VoipCallStateChanged@CApplication@@QEAAXH@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_dd(TRACEHANDLE a1, USHORT a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return TraceMessage(a1, 0x2Bu, &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids, a2, &v5, 4LL, va, 4LL, 0LL);
}
