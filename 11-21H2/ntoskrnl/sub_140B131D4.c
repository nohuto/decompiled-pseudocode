/*
 * XREFs of sub_140B131D4 @ 0x140B131D4
 * Callers:
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 * Callees:
 *     sub_1403C77F8 @ 0x1403C77F8 (sub_1403C77F8.c)
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x1403C7A30 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     sub_140B14B1C @ 0x140B14B1C (sub_140B14B1C.c)
 */

int __fastcall sub_140B131D4(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 ***v5; // rax
  __int64 **v6; // rbx
  __int64 *i; // rax

  sub_140B14B1C(*(_QWORD *)(a1 + 168), a2, 0LL);
  v5 = (__int64 ***)(*(_QWORD *)(a1 + 240) + 312LL);
  v6 = *v5;
  while ( v6 != (__int64 **)v5 )
  {
    if ( ((_DWORD)v6[3] & 0x40) != 0 )
    {
      LOBYTE(v4) = 1;
      sub_140B14B1C(v6[4], v3, v4);
    }
    v6 = (__int64 **)*v6;
    v5 = (__int64 ***)(*(_QWORD *)(a1 + 240) + 312LL);
  }
  for ( i = sub_1403C77F8((__int64 *)&off_1400C9DD8); i; i = sub_1403C77F8(i + 6) )
  {
    if ( !*((_BYTE *)i + 21) && !*((_BYTE *)i + 22) && !*((_BYTE *)i + 20) )
    {
      LODWORD(i) = RtlRegisterFeatureConfigurationChangeNotification(
                     (PRTL_FEATURE_CONFIGURATION_CHANGE_CALLBACK)sub_1409116D0,
                     0LL,
                     0LL,
                     &RegistrationHandle);
      if ( (_DWORD)i )
        RegistrationHandle = 0LL;
      return (int)i;
    }
  }
  return (int)i;
}
