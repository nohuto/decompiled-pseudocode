/*
 * XREFs of WppInitUm @ 0x18001F2D8
 * Callers:
 *     DllMain @ 0x18001F0BC (DllMain.c)
 * Callees:
 *     <none>
 */

ULONG WppInitUm()
{
  ULONG64 *v0; // rbx
  const GUID **v1; // rdi
  const GUID *v2; // r8
  ULONG result; // eax
  struct _TRACE_GUID_REGISTRATION TraceGuidReg; // [rsp+40h] [rbp-18h] BYREF

  v0 = (ULONG64 *)WPP_GLOBAL_Control;
  v1 = (const GUID **)&WPP_REGISTRATION_GUIDS;
  while ( v0 )
  {
    v2 = *v1;
    TraceGuidReg.RegHandle = 0LL;
    ++v1;
    TraceGuidReg.Guid = v2;
    v0[4] = (ULONG64)v2;
    result = RegisterTraceGuidsW((WMIDPREQUEST)WppControlCallback, v0, v2, 1u, &TraceGuidReg, 0LL, 0LL, v0 + 1);
    v0 = (ULONG64 *)*v0;
  }
  return result;
}
