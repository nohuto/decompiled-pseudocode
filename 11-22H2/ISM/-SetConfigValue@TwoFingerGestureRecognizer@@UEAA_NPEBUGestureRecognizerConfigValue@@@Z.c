/*
 * XREFs of ?SetConfigValue@TwoFingerGestureRecognizer@@UEAA_NPEBUGestureRecognizerConfigValue@@@Z @ 0x1801E3CF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall TwoFingerGestureRecognizer::SetConfigValue(
        TwoFingerGestureRecognizer *this,
        const struct GestureRecognizerConfigValue *a2)
{
  return (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 56LL))((char *)this + 16)
      || (*(unsigned __int8 (__fastcall **)(char *, const struct GestureRecognizerConfigValue *))(*((_QWORD *)this + 11)
                                                                                                + 56LL))(
           (char *)this + 88,
           a2) != 0;
}
