/*
 * XREFs of RtlpFtQueryConfiguration @ 0x18009F9D8
 * Callers:
 *     RtlGetFeatureToggleConfiguration @ 0x18009F600 (RtlGetFeatureToggleConfiguration.c)
 *     RtlNotifyFeatureToggleUsage @ 0x18009F7A0 (RtlNotifyFeatureToggleUsage.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1800328D0 (RtlRunOnceExecuteOnce.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     RtlpFtGetConfigurationFlags @ 0x18009F8AC (RtlpFtGetConfigurationFlags.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x1800A0430 (RtlQueryInternalFeatureConfiguration.c)
 */

__int64 __fastcall RtlpFtQueryConfiguration(unsigned int a1, __int64 a2)
{
  __int64 v2; // rbx
  int v4; // eax
  __int64 v6; // [rsp+20h] [rbp-38h]
  __int128 v7; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v8[8]; // [rsp+38h] [rbp-20h] BYREF
  int v9; // [rsp+6Ch] [rbp+14h]

  v9 = HIDWORD(a2);
  v2 = a2;
  RtlRunOnceExecuteOnce(
    &_ft_g_init_once,
    (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpFtInitOnceCallback,
    0LL,
    0LL);
  HIDWORD(v6) = HIDWORD(v2);
  v7 = 0LL;
  v4 = RtlQueryInternalFeatureConfiguration(a1, (v9 & 0xE000000) != 0x2000000, v8, &v7);
  if ( v4 != -2147483614 )
  {
    if ( v4 )
    {
      if ( v4 == 279 && SBYTE4(v7) < 0 )
      {
        LODWORD(v6) = v2 | 0x100;
        return v6;
      }
    }
    else
    {
      return RtlpFtGetConfigurationFlags((__int64)&v7, v2);
    }
  }
  return v2;
}
