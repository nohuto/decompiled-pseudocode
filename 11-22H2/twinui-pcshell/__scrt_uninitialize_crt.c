/*
 * XREFs of __scrt_uninitialize_crt @ 0x1801C6C7C
 * Callers:
 *     dllmain_crt_process_detach @ 0x1801C6510 (dllmain_crt_process_detach.c)
 * Callees:
 *     __scrt_stub_for_acrt_uninitialize_critical @ 0x1801CEF5C (__scrt_stub_for_acrt_uninitialize_critical.c)
 */

char __fastcall _scrt_uninitialize_crt(__int64 a1, char a2)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = a1;
  if ( !byte_18098CA70 || !a2 )
  {
    _scrt_stub_for_acrt_uninitialize_critical(a1);
    LOBYTE(v3) = v2;
    _scrt_stub_for_acrt_uninitialize_critical(v3);
  }
  return 1;
}
