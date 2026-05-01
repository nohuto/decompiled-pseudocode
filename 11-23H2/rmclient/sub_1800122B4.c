/*
 * XREFs of sub_1800122B4 @ 0x1800122B4
 * Callers:
 *     sub_180010BE4 @ 0x180010BE4 (sub_180010BE4.c)
 * Callees:
 *     sub_180011BC4 @ 0x180011BC4 (sub_180011BC4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800122B4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  FARPROC RtlRegisterFeatureConfigurationChangeNotification; // rax
  HMODULE v8; // rax

  RtlRegisterFeatureConfigurationChangeNotification = (FARPROC)qword_1800328F8;
  if ( qword_1800328F8 )
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64))RtlRegisterFeatureConfigurationChangeNotification)(
             a1,
             a2,
             0LL,
             a4);
  v8 = sub_180011BC4();
  RtlRegisterFeatureConfigurationChangeNotification = GetProcAddress(
                                                        v8,
                                                        "RtlRegisterFeatureConfigurationChangeNotification");
  qword_1800328F8 = (__int64)RtlRegisterFeatureConfigurationChangeNotification;
  if ( RtlRegisterFeatureConfigurationChangeNotification )
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64))RtlRegisterFeatureConfigurationChangeNotification)(
             a1,
             a2,
             0LL,
             a4);
  else
    return 3221225785LL;
}
