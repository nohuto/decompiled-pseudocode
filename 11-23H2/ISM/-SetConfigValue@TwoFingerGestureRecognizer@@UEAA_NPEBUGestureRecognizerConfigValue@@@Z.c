/*
 * XREFs of ?SetConfigValue@TwoFingerGestureRecognizer@@UEAA_NPEBUGestureRecognizerConfigValue@@@Z @ 0x1801D6480
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
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
