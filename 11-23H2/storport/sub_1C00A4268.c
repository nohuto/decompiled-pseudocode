/*
 * XREFs of sub_1C00A4268 @ 0x1C00A4268
 * Callers:
 *     sub_1C00A2788 @ 0x1C00A2788 (sub_1C00A2788.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C001AAE0 @ 0x1C001AAE0 (sub_1C001AAE0.c)
 *     sub_1C0021E44 @ 0x1C0021E44 (sub_1C0021E44.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C003EF0C @ 0x1C003EF0C (sub_1C003EF0C.c)
 *     sub_1C003F3DC @ 0x1C003F3DC (sub_1C003F3DC.c)
 */

int __fastcall sub_1C00A4268(__int64 a1)
{
  __int64 v2; // rdx
  _DWORD *v3; // r14
  _DWORD *v4; // r15
  int v5; // eax
  _DWORD *v6; // rsi
  int v7; // ecx
  int v8; // eax
  struct _DEVICE_OBJECT *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v13; // [rsp+20h] [rbp-E0h]
  void *KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  void *DeviceRegKey; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE Dst[8]; // [rsp+90h] [rbp-70h] BYREF
  int v19; // [rsp+98h] [rbp-68h]
  const wchar_t *v20; // [rsp+A0h] [rbp-60h]
  __int64 v21; // [rsp+A8h] [rbp-58h]
  int v22; // [rsp+B0h] [rbp-50h]
  __int64 v23; // [rsp+B8h] [rbp-48h]
  int v24; // [rsp+C0h] [rbp-40h]
  int v25; // [rsp+D0h] [rbp-30h]
  const wchar_t *v26; // [rsp+D8h] [rbp-28h]
  __int64 v27; // [rsp+E0h] [rbp-20h]
  int v28; // [rsp+E8h] [rbp-18h]
  __int64 v29; // [rsp+F0h] [rbp-10h]
  int v30; // [rsp+F8h] [rbp-8h]
  int v31; // [rsp+108h] [rbp+8h]
  const WCHAR *v32; // [rsp+110h] [rbp+10h]
  __int64 v33; // [rsp+118h] [rbp+18h]
  int v34; // [rsp+120h] [rbp+20h]
  __int64 v35; // [rsp+128h] [rbp+28h]
  int v36; // [rsp+130h] [rbp+30h]
  int v37; // [rsp+140h] [rbp+40h]
  const wchar_t *v38; // [rsp+148h] [rbp+48h]
  __int64 v39; // [rsp+150h] [rbp+50h]
  int v40; // [rsp+158h] [rbp+58h]
  __int64 v41; // [rsp+160h] [rbp+60h]
  int v42; // [rsp+168h] [rbp+68h]
  int v43; // [rsp+178h] [rbp+78h]
  const wchar_t *v44; // [rsp+180h] [rbp+80h]
  __int64 v45; // [rsp+188h] [rbp+88h]
  int v46; // [rsp+190h] [rbp+90h]
  __int64 v47; // [rsp+198h] [rbp+98h]
  int v48; // [rsp+1A0h] [rbp+A0h]
  int v49; // [rsp+1B0h] [rbp+B0h]
  const wchar_t *v50; // [rsp+1B8h] [rbp+B8h]
  __int64 v51; // [rsp+1C0h] [rbp+C0h]
  int v52; // [rsp+1C8h] [rbp+C8h]
  __int64 v53; // [rsp+1D0h] [rbp+D0h]
  int v54; // [rsp+1D8h] [rbp+D8h]

  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DestinationString = 0LL;
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 2) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003EF0C((__int64)off_1C0093070->AttachedDevice, 0x43u, (__int64)&unk_1C0083530, a1);
  }
  v2 = *(_QWORD *)(a1 + 24);
  v3 = (_DWORD *)(a1 + 1848);
  *(_DWORD *)(a1 + 1848) = 20;
  v4 = (_DWORD *)(a1 + 1856);
  v5 = *(_DWORD *)(a1 + 1848);
  v6 = (_DWORD *)(a1 + 1852);
  v7 = *(_DWORD *)(v2 + 5588);
  *(_DWORD *)(a1 + 1856) = 250;
  *(_DWORD *)(a1 + 1852) = 25;
  if ( v7 )
    v5 = v7;
  *v3 = v5;
  v8 = *v4;
  if ( *(_DWORD *)(v2 + 5592) )
    v8 = *(_DWORD *)(v2 + 5592);
  v9 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  *(_DWORD *)(a1 + 1860) = 0;
  *(_DWORD *)(a1 + 1868) = -1;
  *v4 = v8;
  LODWORD(v10) = IoOpenDeviceRegistryKey(v9, 1u, 0x20019u, &DeviceRegKey);
  if ( (int)v10 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Storport");
    ObjectAttributes.RootDirectory = DeviceRegKey;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LODWORD(v10) = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( (int)v10 >= 0 )
    {
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
        && (HIDWORD(off_1C0093070->Timer) & 2) != 0
        && BYTE1(off_1C0093070->Timer) >= 4u )
      {
        sub_1C003EF0C((__int64)off_1C0093070->AttachedDevice, 0x44u, (__int64)&unk_1C0083530, a1);
      }
      memset_0(Dst, 0, 0x188uLL);
      v20 = L"QueueFullWaitIoPercentage";
      v22 = 67108868;
      v19 = 288;
      v24 = 4;
      v26 = L"BusyPauseTime";
      v25 = 288;
      v32 = L"BusyRetryCount";
      v38 = L"EnableLogoETW";
      v44 = L"DisableIdlePowerManagement";
      v45 = a1 + 1864;
      v47 = a1 + 1864;
      v28 = 67108868;
      v30 = 4;
      v31 = 288;
      v34 = 67108868;
      v36 = 4;
      v37 = 288;
      v40 = 67108868;
      v42 = 4;
      v43 = 288;
      v46 = 67108868;
      v48 = 4;
      v49 = 288;
      v52 = 67108868;
      v54 = 4;
      v50 = L"MinimumIdleTimeoutInMS";
      v21 = a1 + 1852;
      v23 = a1 + 1852;
      v27 = a1 + 1856;
      v29 = a1 + 1856;
      v33 = a1 + 1848;
      v35 = a1 + 1848;
      v39 = a1 + 1860;
      v41 = a1 + 1860;
      v51 = a1 + 1868;
      v53 = a1 + 1868;
      RtlQueryRegistryValuesEx(0x40000000LL, KeyHandle, Dst, 0LL, 0LL);
      if ( *v6 > 0x64u )
        *v6 = 25;
      if ( byte_1C0093AED && !*(_QWORD *)(a1 + 3480) )
      {
        v10 = sub_1C0007CF4(64LL, 192LL, 1465016658LL, 0LL);
        v11 = v10;
        if ( !v10 )
          goto LABEL_25;
        *(_QWORD *)v10 = a1;
        *(_QWORD *)(v10 + 8) = sub_1C001AFF0;
        sub_1C0021E44((__int64)KeyHandle, v10);
        sub_1C001AAE0(v11);
        KeyHandle = 0LL;
        *(_QWORD *)(a1 + 3480) = v11;
      }
      v10 = (__int64)&off_1C0093070;
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 )
      {
        LODWORD(v10) = HIDWORD(off_1C0093070->Timer);
        if ( (v10 & 2) != 0 && BYTE1(off_1C0093070->Timer) >= 4u )
        {
          LODWORD(v13) = *v3;
          LODWORD(v10) = sub_1C003F3DC(
                           (__int64)off_1C0093070->AttachedDevice,
                           0x45u,
                           (__int64)&unk_1C0083530,
                           a1,
                           v13,
                           *v4,
                           *v6);
        }
      }
    }
  }
LABEL_25:
  if ( DeviceRegKey )
    LODWORD(v10) = ZwClose(DeviceRegKey);
  if ( KeyHandle )
    LODWORD(v10) = ZwClose(KeyHandle);
  return v10;
}
