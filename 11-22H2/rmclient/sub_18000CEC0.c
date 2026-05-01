/*
 * XREFs of sub_18000CEC0 @ 0x18000CEC0
 * Callers:
 *     sub_18000D00C @ 0x18000D00C (sub_18000D00C.c)
 * Callees:
 *     sub_180011BC4 @ 0x180011BC4 (sub_180011BC4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_18000CEC0(__int64 *a1)
{
  __int64 v1; // rbx
  FARPROC RtlUnregisterFeatureConfigurationChangeNotification; // rax
  HMODULE v3; // rax

  v1 = *a1;
  if ( *a1 )
  {
    RtlUnregisterFeatureConfigurationChangeNotification = (FARPROC)qword_180032900;
    if ( qword_180032900
      || (v3 = (HMODULE)sub_180011BC4(),
          RtlUnregisterFeatureConfigurationChangeNotification = GetProcAddress(
                                                                  v3,
                                                                  "RtlUnregisterFeatureConfigurationChangeNotification"),
          (qword_180032900 = (__int64)RtlUnregisterFeatureConfigurationChangeNotification) != 0) )
    {
      ((void (__fastcall *)(__int64))RtlUnregisterFeatureConfigurationChangeNotification)(v1);
    }
  }
}
