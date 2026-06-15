/*
 * XREFs of __scrt_initialize_crt @ 0x14002F9D8
 * Callers:
 *     __scrt_common_main_seh @ 0x14002F3B0 (__scrt_common_main_seh.c)
 * Callees:
 *     _should_initialize_environment @ 0x140030164 (_should_initialize_environment.c)
 *     __isa_available_init @ 0x140030570 (__isa_available_init.c)
 *     __scrt_stub_for_acrt_uninitialize @ 0x140031D70 (__scrt_stub_for_acrt_uninitialize.c)
 */

char __fastcall _scrt_initialize_crt(int a1)
{
  char v1; // al

  v1 = byte_1400C0F81;
  if ( !a1 )
    v1 = 1;
  byte_1400C0F81 = v1;
  _isa_available_init();
  if ( !(unsigned __int8)should_initialize_environment() )
    return 0;
  if ( !(unsigned __int8)should_initialize_environment() )
  {
    _scrt_stub_for_acrt_uninitialize(0LL);
    return 0;
  }
  return 1;
}
