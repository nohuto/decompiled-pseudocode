/*
 * XREFs of _anonymous_namespace_::EtwLogRegistrar::EtwLogRegistrar @ 0x180046F30
 * Callers:
 *     _anonymous_namespace_::_dynamic_initializer_for__g_EtwLogger___0 @ 0x1800017D0 (_anonymous_namespace_--_dynamic_initializer_for__g_EtwLogger___0.c)
 * Callees:
 *     McGenEventRegister_EventRegister @ 0x180046FE0 (McGenEventRegister_EventRegister.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 */

void *anonymous_namespace_::EtwLogRegistrar::EtwLogRegistrar()
{
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  ProviderId = (GUID)*((_OWORD *)off_1802404D0 - 1);
  if ( qword_1802404E8 )
    __fastfail(5u);
  xmmword_1802404F0 = 0LL;
  if ( !EventRegister(&ProviderId, (PENABLECALLBACK)tlgEnableCallback, &dword_1802404C8, &qword_1802404E8) )
    EventSetInformation(
      qword_1802404E8,
      2LL,
      off_1802404D0,
      *(unsigned __int16 *)off_1802404D0,
      *(_QWORD *)&ProviderId.Data1,
      *(_QWORD *)ProviderId.Data4);
  McGenEventRegister_EventRegister();
  return &unk_1802430A0;
}
