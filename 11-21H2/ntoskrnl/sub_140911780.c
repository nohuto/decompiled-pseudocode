/*
 * XREFs of sub_140911780 @ 0x140911780
 * Callers:
 *     sub_1409116D0 @ 0x1409116D0 (sub_1409116D0.c)
 * Callees:
 *     sub_1403C77F8 @ 0x1403C77F8 (sub_1403C77F8.c)
 *     RtlQueryFeatureConfiguration @ 0x1403C7820 (RtlQueryFeatureConfiguration.c)
 */

__int64 *sub_140911780()
{
  __int64 *i; // rcx
  RTL_FEATURE_ID v1; // ecx
  NTSTATUS v2; // eax
  __int16 v3; // dx
  __int16 v4; // dx
  __int64 *result; // rax
  volatile signed __int32 **v6; // rbx
  _RTL_FEATURE_CONFIGURATION FeatureConfiguration; // [rsp+20h] [rbp-18h] BYREF
  ULONGLONG ChangeStamp; // [rsp+40h] [rbp+8h] BYREF

  for ( i = (__int64 *)&off_1400C9DD8; ; i = (__int64 *)(v6 + 6) )
  {
    result = sub_1403C77F8(i);
    v6 = (volatile signed __int32 **)result;
    if ( !result )
      break;
    if ( !*((_BYTE *)result + 21) && !*((_BYTE *)result + 22) && !*((_BYTE *)result + 20) )
    {
      v1 = *((_DWORD *)result + 4);
      *(_QWORD *)&FeatureConfiguration.FeatureId = 0LL;
      FeatureConfiguration.VariantPayload = 0;
      v2 = RtlQueryFeatureConfiguration(v1, RtlFeatureConfigurationRuntime, &ChangeStamp, &FeatureConfiguration);
      if ( v2 == -2147483614 || v2 == -1073741275 )
        goto LABEL_12;
      if ( v2 )
      {
        if ( v2 == 279 )
        {
          v3 = FeatureConfiguration.Flags & 0x80;
          goto LABEL_11;
        }
LABEL_12:
        v4 = 131;
      }
      else
      {
        v3 = FeatureConfiguration.Flags & 0xB0 | (4 * (FeatureConfiguration.Flags & 0x40));
LABEL_11:
        v4 = (2 * v3) | 0x83;
      }
      _InterlockedXor(*v6, ((unsigned __int16)**v6 ^ (unsigned __int16)v4) & 0x3E0);
      continue;
    }
  }
  return result;
}
