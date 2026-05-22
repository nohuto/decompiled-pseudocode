/*
 * XREFs of ?ReadConfigValue@GestureSession@@UEAAJW4GestureRecognizerConfigSetting@@PEAUGestureRecognizerConfigValue@@@Z @ 0x1801B5720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GestureSession::ReadConfigValue(__int64 a1, unsigned int a2, __int64 a3)
{
  int v5; // ebx
  _QWORD *v6; // rdi

  if ( a2 > 0x1B || !a3 )
    return 2147942487LL;
  v5 = 0;
  v6 = (_QWORD *)(a1 + 704);
  do
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v6 + 48LL))(*v6, a2, a3) )
      break;
    ++v5;
    ++v6;
  }
  while ( v5 < 5 );
  return 0LL;
}
