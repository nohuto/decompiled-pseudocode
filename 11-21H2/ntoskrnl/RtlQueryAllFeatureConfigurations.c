/*
 * XREFs of RtlQueryAllFeatureConfigurations @ 0x1409B5E70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403C78DC @ 0x1403C78DC (sub_1403C78DC.c)
 *     sub_1403C7970 @ 0x1403C7970 (sub_1403C7970.c)
 *     sub_1403C7984 @ 0x1403C7984 (sub_1403C7984.c)
 *     sub_1409BF67C @ 0x1409BF67C (sub_1409BF67C.c)
 */

NTSTATUS __cdecl RtlQueryAllFeatureConfigurations(
        RTL_FEATURE_CONFIGURATION_TYPE ConfigurationType,
        PRTL_FEATURE_CHANGE_STAMP ChangeStamp,
        PRTL_FEATURE_CONFIGURATION Configurations,
        PSIZE_T ConfigurationCount)
{
  __int64 v6; // rbp
  int v8; // eax
  __int64 v9; // rsi
  NTSTATUS v10; // ebx
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  ULONGLONG v13[4]; // [rsp+28h] [rbp-20h] BYREF

  v13[0] = 0LL;
  v12 = 0LL;
  v6 = ConfigurationType;
  sub_1403C7984((__int64)qword_140C494B0, (__int64)v13, &v12);
  v8 = sub_1403C7970(v6);
  v9 = v12;
  v10 = v8;
  if ( v8 >= 0 )
  {
    v12 = 0x100000000LL;
    v10 = sub_1409BF67C(v9 + 24LL * *((unsigned int *)&v13[-1] + v6), Configurations, ConfigurationCount);
  }
  if ( v10 >= 0 )
  {
    if ( ChangeStamp )
      *ChangeStamp = v13[0];
    v10 = 0;
  }
  sub_1403C78DC((__int64)qword_140C494B0, v9);
  return v10;
}
