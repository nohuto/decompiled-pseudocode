/*
 * XREFs of ?RegisterGlitches@CSpatialCrossProcessEndpointTraceLogger@@QEAAXHH@Z @ 0x14009C790
 * Callers:
 *     ?CheckGlitches@CSpatialCrossProcessBaseEndpoint@@IEAAXXZ @ 0x14009CF74 (-CheckGlitches@CSpatialCrossProcessBaseEndpoint@@IEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::RegisterGlitches(
        CSpatialCrossProcessEndpointTraceLogger *this,
        int a2,
        int a3)
{
  char *v3; // rbx
  int v5; // [rsp+38h] [rbp+10h] BYREF

  ++*((_QWORD *)this + 11);
  v3 = (char *)this + 256;
  v5 = 1;
  if ( a2 )
  {
    (**(void (__fastcall ***)(char *, __int64, int *))v3)((char *)this + 256, 1LL, &v5);
    (**(void (__fastcall ***)(char *, _QWORD, int *))v3)(v3, 0LL, &v5);
  }
  if ( a3 )
  {
    (**(void (__fastcall ***)(char *, __int64, int *))v3)(v3, 2LL, &v5);
    (**(void (__fastcall ***)(char *, _QWORD, int *))v3)(v3, 0LL, &v5);
  }
}
