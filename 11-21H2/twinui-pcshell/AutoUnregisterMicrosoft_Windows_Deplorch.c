/*
 * XREFs of AutoUnregisterMicrosoft_Windows_Deplorch @ 0x18017ED60
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void AutoUnregisterMicrosoft_Windows_Deplorch()
{
  if ( McGenTracingSupportInit && Microsoft_Windows_Deplorch_Context )
  {
    if ( McGenPreVista )
    {
      UnregisterTraceGuids(Microsoft_Windows_Deplorch_Context);
      dword_1807AC0C0 = 0;
      byte_1807AC0C8 = 0;
      qword_1807AC0A8 = 0LL;
      if ( word_1807AC0CA )
        memset_0(off_1807AC0D0, 0, 4LL * (((unsigned __int16)word_1807AC0CA - 1) / 32 + 1));
    }
    else
    {
      ((void (*)(void))PfnEventUnregister)();
    }
    Microsoft_Windows_Deplorch_Context = 0LL;
  }
}
