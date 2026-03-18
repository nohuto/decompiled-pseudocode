/*
 * XREFs of FxVerifierQueryTrackPower @ 0x1C0044C5C
 * Callers:
 *     FxDriverGlobalsInitializeDebugExtension @ 0x1C0043BD8 (FxDriverGlobalsInitializeDebugExtension.c)
 * Callees:
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00014A8 (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 */

void __fastcall FxVerifierQueryTrackPower(void *Key, FxTrackPowerOption *TrackPower)
{
  unsigned int value; // [rsp+20h] [rbp-40h] BYREF
  _UNICODE_STRING valueName; // [rsp+28h] [rbp-38h] BYREF
  wchar_t valueName_buffer[12]; // [rsp+38h] [rbp-28h] BYREF

  value = 0;
  valueName.Buffer = valueName_buffer;
  wcscpy(valueName_buffer, L"TrackPower");
  *(_QWORD *)&valueName.Length = 1441812LL;
  if ( FxRegKey::_QueryULong(Key, &valueName, &value) < 0 || value >= 3 )
    *TrackPower = FxTrackPowerNone;
  else
    *TrackPower = value;
}
