/*
 * XREFs of RtlpQueryTimeZoneInformationWorker @ 0x180060FA0
 * Callers:
 *     EtwpGetTimeZoneInformation @ 0x180060C80 (EtwpGetTimeZoneInformation.c)
 *     RtlQueryTimeZoneInformation @ 0x180060F90 (RtlQueryTimeZoneInformation.c)
 *     RtlQueryDynamicTimeZoneInformation @ 0x1800F9D10 (RtlQueryDynamicTimeZoneInformation.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x180008E4C (RtlpQueryRegistryValues.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x1800611A0 (RtlpGetTimeZoneInfoHandle.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpQueryTimeZoneInformationWorker(char *a1, size_t Size)
{
  unsigned int v2; // esi
  __int64 result; // rax
  int RegistryValues; // edi
  int v6; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  int v8; // [rsp+40h] [rbp-C0h] BYREF
  char *v9; // [rsp+48h] [rbp-B8h]
  int v10; // [rsp+50h] [rbp-B0h] BYREF
  char *v11; // [rsp+58h] [rbp-A8h]
  int v12; // [rsp+60h] [rbp-A0h] BYREF
  char *v13; // [rsp+68h] [rbp-98h]
  char v14[8]; // [rsp+70h] [rbp-90h] BYREF
  int v15; // [rsp+78h] [rbp-88h]
  const WCHAR *v16; // [rsp+80h] [rbp-80h]
  char *v17; // [rsp+88h] [rbp-78h]
  int v18; // [rsp+90h] [rbp-70h]
  int v19; // [rsp+B0h] [rbp-50h]
  const WCHAR *v20; // [rsp+B8h] [rbp-48h]
  int *v21; // [rsp+C0h] [rbp-40h]
  int v22; // [rsp+C8h] [rbp-38h]
  int v23; // [rsp+E8h] [rbp-18h]
  const WCHAR *v24; // [rsp+F0h] [rbp-10h]
  char *v25; // [rsp+F8h] [rbp-8h]
  int v26; // [rsp+100h] [rbp+0h]
  int v27; // [rsp+120h] [rbp+20h]
  const WCHAR *v28; // [rsp+128h] [rbp+28h]
  char *v29; // [rsp+130h] [rbp+30h]
  int v30; // [rsp+138h] [rbp+38h]
  int v31; // [rsp+158h] [rbp+58h]
  const WCHAR *v32; // [rsp+160h] [rbp+60h]
  int *v33; // [rsp+168h] [rbp+68h]
  int v34; // [rsp+170h] [rbp+70h]
  int v35; // [rsp+190h] [rbp+90h]
  const WCHAR *v36; // [rsp+198h] [rbp+98h]
  char *v37; // [rsp+1A0h] [rbp+A0h]
  int v38; // [rsp+1A8h] [rbp+A8h]
  int v39; // [rsp+1C8h] [rbp+C8h]
  const WCHAR *v40; // [rsp+1D0h] [rbp+D0h]
  char *v41; // [rsp+1D8h] [rbp+D8h]
  int v42; // [rsp+1E0h] [rbp+E0h]
  void *v43; // [rsp+1F8h] [rbp+F8h]
  const WCHAR *v44; // [rsp+208h] [rbp+108h]
  int *v45; // [rsp+210h] [rbp+110h]
  int v46; // [rsp+218h] [rbp+118h]
  int v47; // [rsp+238h] [rbp+138h]
  const WCHAR *v48; // [rsp+240h] [rbp+140h]
  int *v49; // [rsp+248h] [rbp+148h]
  int v50; // [rsp+250h] [rbp+150h]

  v2 = Size;
  v6 = 0;
  result = RtlpGetTimeZoneInfoHandle(0LL, &Handle);
  if ( (int)result >= 0 )
  {
    memset_thunk_772440563353939046(a1, 0, v2);
    memset_thunk_772440563353939046(v14, 0, 0x230uLL);
    v8 = 0x400000;
    v15 = 288;
    v16 = L"Bias";
    v9 = a1 + 4;
    v20 = L"StandardName";
    v21 = &v8;
    v17 = a1;
    v24 = L"StandardBias";
    v25 = a1 + 84;
    v28 = L"StandardStart";
    v29 = a1 + 68;
    *((_DWORD *)a1 + 17) = -16;
    v11 = a1 + 88;
    v32 = L"DaylightName";
    v33 = &v10;
    v36 = L"DaylightBias";
    v37 = a1 + 168;
    v40 = L"DaylightStart";
    v10 = 0x400000;
    v41 = a1 + 152;
    *((_DWORD *)a1 + 38) = -16;
    v18 = 0x4000000;
    v19 = 288;
    v22 = 0x1000000;
    v23 = 288;
    v26 = 0x4000000;
    v27 = 288;
    v30 = 50331648;
    v31 = 288;
    v34 = 0x1000000;
    v35 = 288;
    v38 = 0x4000000;
    v39 = 288;
    v42 = 50331648;
    if ( v2 >= 0x1B0 )
    {
      v12 = 0x1000000;
      v13 = a1 + 172;
      v43 = &RtlpQueryTimeZoneKeyNameRoutine;
      v44 = L"TimeZoneKeyName";
      v45 = &v12;
      v48 = L"DynamicDaylightTimeDisabled";
      v49 = &v6;
      v46 = 0;
      v47 = 288;
      v50 = 0x4000000;
    }
    RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)Handle, (__int64)v14, 0LL, 0LL, 1);
    if ( RegistryValues >= 0 && v2 >= 0x1B0 )
      a1[428] = v6 != 0;
    NtClose(Handle);
    return (unsigned int)RegistryValues;
  }
  return result;
}
