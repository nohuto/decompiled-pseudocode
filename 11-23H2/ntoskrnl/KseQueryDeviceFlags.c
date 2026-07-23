/*
 * XREFs of KseQueryDeviceFlags @ 0x1408081B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     KsepEvntLogFlagsApplied @ 0x14037427C (KsepEvntLogFlagsApplied.c)
 *     KseQueryDeviceData @ 0x1408082D0 (KseQueryDeviceData.c)
 */

__int64 __fastcall KseQueryDeviceFlags(PCWSTR SourceString, PCWSTR a2, _QWORD *a3)
{
  int v6; // edi
  int v8; // esi
  __int64 v9; // rbx
  int v10; // [rsp+30h] [rbp-30h] BYREF
  __int64 v11; // [rsp+38h] [rbp-28h] BYREF
  UNICODE_STRING v12; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  int v14; // [rsp+98h] [rbp+38h] BYREF

  v11 = 0LL;
  if ( dword_140C64D34 != 2 || (KseEngine & 2) != 0 )
    return (unsigned int)-1073741275;
  if ( !SourceString || !a2 || !a3 )
    return (unsigned int)-1073741811;
  *a3 = 0LL;
  v14 = 11;
  v10 = 8;
  v6 = KseQueryDeviceData(SourceString, (_DWORD)a2, (unsigned int)&v14, (unsigned int)&v10, &v11);
  if ( v6 >= 0 )
  {
    v8 = v14;
    if ( (v14 & 0xCFFFFFFF) == 0xB )
    {
      DestinationString = 0LL;
      v12 = 0LL;
      RtlInitUnicodeString(&DestinationString, SourceString);
      RtlInitUnicodeString(&v12, a2);
      v9 = v11;
      KsepEvntLogFlagsApplied(&DestinationString.Length, &v12.Length, (v8 & 0x10000000) == 0, v11);
      *a3 = v9;
      return (unsigned int)v6;
    }
    return (unsigned int)-1073741275;
  }
  return (unsigned int)v6;
}
