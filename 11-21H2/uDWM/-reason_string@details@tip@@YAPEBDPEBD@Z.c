/*
 * XREFs of ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x1800F66AC
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@details@tip@@EEAAXXZ @ 0x1800135A0 (-evaluate@-$test_merged_data@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@details.c)
 *     ?evaluate@_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@QEAAXXZ @ 0x1800F5FC4 (-evaluate@_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

const char *__fastcall tip::details::reason_string(tip::details *this, const char *a2)
{
  const char *result; // rax
  const char *v3; // rdx
  char v4; // r8

  for ( result = (const char *)this; ; result = v3 )
  {
    v4 = *(_BYTE *)this;
    if ( !*(_BYTE *)this )
      break;
    this = (tip::details *)((char *)this + 1);
    v3 = (const char *)this;
    if ( v4 != 58 )
      v3 = result;
  }
  return result;
}
