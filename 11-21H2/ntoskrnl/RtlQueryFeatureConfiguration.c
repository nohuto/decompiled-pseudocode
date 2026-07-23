/*
 * XREFs of RtlQueryFeatureConfiguration @ 0x1403C7820
 * Callers:
 *     sub_140907F90 @ 0x140907F90 (sub_140907F90.c)
 *     sub_140911230 @ 0x140911230 (sub_140911230.c)
 *     sub_140911780 @ 0x140911780 (sub_140911780.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140244120 (KeGetEffectiveIrql.c)
 *     sub_1403C78DC @ 0x1403C78DC (sub_1403C78DC.c)
 *     sub_1403C7984 @ 0x1403C7984 (sub_1403C7984.c)
 *     sub_1406EBC34 @ 0x1406EBC34 (sub_1406EBC34.c)
 *     sub_140832F68 @ 0x140832F68 (sub_140832F68.c)
 */

NTSTATUS __cdecl RtlQueryFeatureConfiguration(
        RTL_FEATURE_ID FeatureId,
        RTL_FEATURE_CONFIGURATION_TYPE ConfigurationType,
        PRTL_FEATURE_CHANGE_STAMP ChangeStamp,
        PRTL_FEATURE_CONFIGURATION FeatureConfiguration)
{
  __int64 v8; // rsi
  int v9; // eax
  NTSTATUS v10; // ebx
  ULONGLONG v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  if ( KeGetEffectiveIrql() > 1u && ((dword_140C31E20 & 3) != 0 || byte_140C22263) )
    return -2147483614;
  v8 = sub_1406EBC34();
  sub_1403C7984(v8, &v12, &v13);
  v9 = sub_140832F68(v13, FeatureId, (unsigned int)ConfigurationType, FeatureConfiguration);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v10 = 0;
    *ChangeStamp = v12;
  }
  else if ( v9 == -1073741275 || v9 == -2147483614 )
  {
    *ChangeStamp = v12;
  }
  sub_1403C78DC(v8, v13);
  return v10;
}
