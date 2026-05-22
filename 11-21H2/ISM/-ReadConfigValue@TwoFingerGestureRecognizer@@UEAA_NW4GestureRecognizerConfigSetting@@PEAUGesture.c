/*
 * XREFs of ?ReadConfigValue@TwoFingerGestureRecognizer@@UEAA_NW4GestureRecognizerConfigSetting@@PEAUGestureRecognizerConfigValue@@@Z @ 0x1801B7E80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall TwoFingerGestureRecognizer::ReadConfigValue(__int64 a1, unsigned int a2, __int64 a3)
{
  char result; // al

  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 16) + 48LL))(a1 + 16) )
    return 1;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(a1 + 88) + 48LL))(a1 + 88, a2, a3);
  if ( result )
    return 1;
  return result;
}
