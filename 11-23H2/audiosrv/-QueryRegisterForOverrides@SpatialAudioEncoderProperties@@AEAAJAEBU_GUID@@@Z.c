/*
 * XREFs of ?QueryRegisterForOverrides@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18014696C
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x180146C38 (-RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180028C1C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18005FE94 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::QueryRegisterForOverrides(
        SpatialAudioEncoderProperties *this,
        const struct _GUID *a2)
{
  HKEY v3; // rcx
  HKEY v4; // rcx
  DWORD cbData; // [rsp+30h] [rbp-D0h] BYREF
  BYTE Data[4]; // [rsp+34h] [rbp-CCh] BYREF
  HKEY hKey; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v9[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+44h] [rbp-BCh]
  int v11; // [rsp+48h] [rbp-B8h]
  int v12; // [rsp+4Ch] [rbp-B4h]
  int v13; // [rsp+50h] [rbp-B0h]
  int v14; // [rsp+54h] [rbp-ACh]
  int v15; // [rsp+58h] [rbp-A8h]
  int v16; // [rsp+5Ch] [rbp-A4h]
  int v17; // [rsp+60h] [rbp-A0h]
  int v18; // [rsp+64h] [rbp-9Ch]
  int v19; // [rsp+68h] [rbp-98h]
  int v20; // [rsp+6Ch] [rbp-94h]
  int v21; // [rsp+70h] [rbp-90h]
  int v22; // [rsp+74h] [rbp-8Ch]
  int v23; // [rsp+78h] [rbp-88h]
  int v24; // [rsp+7Ch] [rbp-84h]
  int v25; // [rsp+80h] [rbp-80h]
  int v26; // [rsp+84h] [rbp-7Ch]
  int v27; // [rsp+88h] [rbp-78h]
  int v28; // [rsp+8Ch] [rbp-74h]
  int v29; // [rsp+90h] [rbp-70h]
  int v30; // [rsp+94h] [rbp-6Ch]
  int v31; // [rsp+98h] [rbp-68h]
  int v32; // [rsp+9Ch] [rbp-64h]
  int v33; // [rsp+A0h] [rbp-60h]
  int v34; // [rsp+A4h] [rbp-5Ch]
  __int16 v35; // [rsp+A8h] [rbp-58h]
  OLECHAR sz[40]; // [rsp+B0h] [rbp-50h] BYREF
  WCHAR SubKey[96]; // [rsp+100h] [rbp+0h] BYREF

  *(_DWORD *)v9 = 7274579;
  v10 = 7602278;
  v11 = 6357111;
  v12 = 6619250;
  v13 = 5046364;
  v14 = 6488169;
  v15 = 7274610;
  v16 = 7274611;
  v17 = 7602278;
  v18 = 5046364;
  v19 = 7078005;
  v20 = 6881396;
  v21 = 6619245;
  v22 = 6881380;
  v23 = 6029409;
  v24 = 7667777;
  v25 = 6881380;
  v26 = 6029423;
  v27 = 7340115;
  v28 = 7602273;
  v29 = 6357097;
  v30 = 6029420;
  v31 = 7209029;
  v32 = 7274595;
  v33 = 6619236;
  v34 = 6029426;
  v35 = 0;
  if ( StringFromGUID2(a2, sz, 39) >= 0
    && (int)StringCchCopyW((char *)SubKey, 92LL, (char *)v9) >= 0
    && (int)StringCchCatW(SubKey, 92LL, sz) >= 0
    && !RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &hKey) )
  {
    *(_DWORD *)Data = *((unsigned __int16 *)this + 62);
    cbData = 4;
    RegQueryValueExW(hKey, L"MaxDynamicObjectCount", 0LL, 0LL, Data, &cbData);
    v3 = hKey;
    *((_WORD *)this + 62) = *(_WORD *)Data;
    *(_DWORD *)Data = *((_DWORD *)this + 29);
    cbData = 4;
    RegQueryValueExW(v3, L"NativeStaticObjectMask", 0LL, 0LL, Data, &cbData);
    v4 = hKey;
    *((_DWORD *)this + 29) = *(_DWORD *)Data;
    cbData = 4;
    *(_DWORD *)Data = 116;
    RegQueryValueExW(v4, L"ProjectionData", 0LL, 0LL, 0LL, &cbData);
    if ( cbData == 116 )
      RegQueryValueExW(hKey, L"ProjectionData", 0LL, 0LL, (LPBYTE)this + 126, &cbData);
    RegCloseKey(hKey);
  }
  return 0LL;
}
