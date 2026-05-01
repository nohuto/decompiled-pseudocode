/*
 * XREFs of AutoUnregisterMicrosoft_Windows_Deplorch @ 0x1801BC2E0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void AutoUnregisterMicrosoft_Windows_Deplorch()
{
  if ( McGenTracingSupportInit && Microsoft_Windows_Deplorch_Context )
  {
    if ( McGenPreVista )
    {
      UnregisterTraceGuids(Microsoft_Windows_Deplorch_Context);
      dword_180986F50 = 0;
      byte_180986F58 = 0;
      qword_180986F38 = 0LL;
      if ( word_180986F5A )
        memset_0(off_180986F60, 0, 4LL * (((unsigned __int16)word_180986F5A - 1) / 32 + 1));
    }
    else
    {
      ((void (*)(void))PfnEventUnregister)();
    }
    Microsoft_Windows_Deplorch_Context = 0LL;
  }
}
