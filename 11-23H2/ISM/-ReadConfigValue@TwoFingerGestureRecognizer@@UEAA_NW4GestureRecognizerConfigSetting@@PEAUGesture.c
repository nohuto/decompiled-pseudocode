/*
 * XREFs of ?ReadConfigValue@TwoFingerGestureRecognizer@@UEAA_NW4GestureRecognizerConfigSetting@@PEAUGestureRecognizerConfigValue@@@Z @ 0x1801D6350
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall TwoFingerGestureRecognizer::ReadConfigValue(__int64 a1, unsigned int a2, __int64 a3)
{
  return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 16) + 48LL))(a1 + 16)
      || (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(a1 + 88) + 48LL))(a1 + 88, a2, a3) != 0;
}
