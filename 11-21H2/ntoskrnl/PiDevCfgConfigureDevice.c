/*
 * XREFs of PiDevCfgConfigureDevice @ 0x1407702BC
 * Callers:
 *     PiDevCfgProcessDevice @ 0x140747740 (PiDevCfgProcessDevice.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1402D17BC (RtlUnicodeStringPrintf.c)
 *     PnpDuplicateUnicodeString @ 0x1402D1DA4 (PnpDuplicateUnicodeString.c)
 *     PipIsDevNodeDNStarted @ 0x1402DEAB0 (PipIsDevNodeDNStarted.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x14069760C (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgConfigureDeviceDriver @ 0x1406976D0 (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140697824 (PiDevCfgConfigureDeviceKeys.c)
 *     _RegRtlDeleteTreeInternal @ 0x1406CB238 (_RegRtlDeleteTreeInternal.c)
 *     PipHardwareConfigActivateService @ 0x1406DF35C (PipHardwareConfigActivateService.c)
 *     PiDevCfgMigrateDevice @ 0x1406E2EEC (PiDevCfgMigrateDevice.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x1406E4EA0 (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x1406E6424 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x1406E66F4 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140744E30 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1407460F8 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgBuildIndirectString @ 0x1407468A0 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgQueryObjectProperties @ 0x140746CCC (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgSetObjectProperty @ 0x14077139C (PiDevCfgSetObjectProperty.c)
 *     PnpIsNullGuid @ 0x140776274 (PnpIsNullGuid.c)
 *     _PnpOpenObjectRegKey @ 0x14077C924 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectProperty @ 0x14077DA5C (_PnpGetObjectProperty.c)
 *     RtlpQueryRegistryValues @ 0x140781F40 (RtlpQueryRegistryValues.c)
 *     RtlCompareUnicodeString @ 0x1407CAA80 (RtlCompareUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     PnpDeleteDeviceInterfaces @ 0x140944640 (PnpDeleteDeviceInterfaces.c)
 *     PiDevCfgAppendMultiSz @ 0x14094A7D4 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14094C79C (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14094D930 (PiDevCfgResetDeviceDriverSettings.c)
 *     _CmDeleteDeviceRegKey @ 0x140A23FCC (_CmDeleteDeviceRegKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDevCfgConfigureDevice(__int64 a1, __int64 a2, __int64 a3, int *a4, _DWORD *a5)
{
  __int64 v7; // r14
  __int64 v8; // r15
  int v9; // r13d
  void *v10; // r12
  int DriverConfiguration; // ebx
  int v12; // edx
  __int64 v13; // r12
  __int64 v14; // rdx
  wchar_t *v15; // rcx
  int v16; // ebx
  char v17; // cl
  char v18; // al
  _BYTE *v19; // rax
  NTSTATUS v20; // eax
  char v21; // al
  int v22; // ebx
  int v23; // eax
  __int64 v24; // rcx
  int *v25; // r12
  __int64 i; // r12
  int *v27; // r13
  _DWORD *v28; // r12
  __int64 v29; // rcx
  char v30; // dl
  UNICODE_STRING v31; // xmm0
  __int64 v32; // r8
  __int64 v33; // rcx
  const WCHAR *v34; // rdi
  const WCHAR *v35; // rdi
  __int64 v37; // rax
  int v38; // eax
  char v39; // cl
  unsigned int v40; // ecx
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  char v46; // al
  _QWORD *v47; // rbx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // r8
  __int64 v51; // r8
  __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // [rsp+20h] [rbp-E0h]
  int v58; // [rsp+28h] [rbp-D8h]
  int v59; // [rsp+28h] [rbp-D8h]
  int v60; // [rsp+28h] [rbp-D8h]
  int v61; // [rsp+28h] [rbp-D8h]
  int v62; // [rsp+28h] [rbp-D8h]
  int v63; // [rsp+28h] [rbp-D8h]
  int v64; // [rsp+28h] [rbp-D8h]
  int v65; // [rsp+28h] [rbp-D8h]
  int v66; // [rsp+28h] [rbp-D8h]
  int v67; // [rsp+28h] [rbp-D8h]
  int v68; // [rsp+28h] [rbp-D8h]
  int v69; // [rsp+28h] [rbp-D8h]
  int v70; // [rsp+28h] [rbp-D8h]
  char v71; // [rsp+60h] [rbp-A0h] BYREF
  char v72; // [rsp+61h] [rbp-9Fh] BYREF
  char v73; // [rsp+62h] [rbp-9Eh] BYREF
  char v74; // [rsp+63h] [rbp-9Dh]
  int v75; // [rsp+64h] [rbp-9Ch] BYREF
  char v76[4]; // [rsp+68h] [rbp-98h] BYREF
  int v77; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v78; // [rsp+70h] [rbp-90h]
  int v79; // [rsp+78h] [rbp-88h] BYREF
  int v80; // [rsp+7Ch] [rbp-84h] BYREF
  int v81; // [rsp+80h] [rbp-80h] BYREF
  int v82; // [rsp+84h] [rbp-7Ch]
  int v83; // [rsp+88h] [rbp-78h]
  unsigned int v84; // [rsp+8Ch] [rbp-74h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v86; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING String2; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING v88; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v89; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v90; // [rsp+CCh] [rbp-34h]
  int v91; // [rsp+D0h] [rbp-30h] BYREF
  int v92; // [rsp+D4h] [rbp-2Ch] BYREF
  int *v93; // [rsp+D8h] [rbp-28h]
  _DWORD *v94; // [rsp+E0h] [rbp-20h]
  const wchar_t *v95; // [rsp+E8h] [rbp-18h]
  UNICODE_STRING UnicodeString; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING v97; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING v98; // [rsp+110h] [rbp+10h] BYREF
  PCWSTR Buffer; // [rsp+120h] [rbp+20h]
  PVOID P; // [rsp+128h] [rbp+28h] BYREF
  HANDLE KeyHandle; // [rsp+130h] [rbp+30h] BYREF
  PCWSTR SourceString; // [rsp+138h] [rbp+38h]
  UNICODE_STRING DestinationString; // [rsp+140h] [rbp+40h] BYREF
  UNICODE_STRING v104; // [rsp+150h] [rbp+50h] BYREF
  UNICODE_STRING v105; // [rsp+160h] [rbp+60h] BYREF
  UNICODE_STRING v106; // [rsp+170h] [rbp+70h] BYREF
  UNICODE_STRING v107; // [rsp+180h] [rbp+80h] BYREF
  UNICODE_STRING String1; // [rsp+190h] [rbp+90h] BYREF
  UNICODE_STRING v109; // [rsp+1A0h] [rbp+A0h] BYREF
  UNICODE_STRING v110; // [rsp+1B0h] [rbp+B0h] BYREF
  UNICODE_STRING v111; // [rsp+1C0h] [rbp+C0h] BYREF
  UNICODE_STRING v112; // [rsp+1D0h] [rbp+D0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 Source2; // [rsp+210h] [rbp+110h] BYREF
  _QWORD v115[22]; // [rsp+220h] [rbp+120h] BYREF

  v78 = a1;
  v93 = a4;
  v94 = a5;
  Handle = 0LL;
  *a4 = 1024;
  *(_DWORD *)(&v111.MaximumLength + 1) = 0;
  v7 = a1 + 40;
  v75 = 1024;
  *a5 = 0;
  v8 = *(_QWORD *)(a2 + 16);
  v9 = 1024;
  KeyHandle = 0LL;
  *(_QWORD *)&v98.Length = 0LL;
  String2 = 0LL;
  v98.Buffer = 0LL;
  v10 = 0LL;
  *(_QWORD *)&v104.Length = 0LL;
  SourceString = 0LL;
  v104.Buffer = 0LL;
  *(_QWORD *)&v105.Length = 0LL;
  Buffer = 0LL;
  v105.Buffer = 0LL;
  *(_QWORD *)&v106.Length = 0LL;
  v106.Buffer = 0LL;
  *(_QWORD *)&v107.Length = 0LL;
  v107.Buffer = 0LL;
  *(_QWORD *)&v109.Length = 0LL;
  v109.Buffer = 0LL;
  *(_QWORD *)&v110.Length = 0LL;
  v110.Buffer = 0LL;
  v82 = 0;
  v83 = 0;
  v77 = 0;
  v91 = 0;
  v92 = 0;
  v95 = 0LL;
  Source2 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v86.Length = 0LL;
  v86.Buffer = 0LL;
  *(_QWORD *)&v88.Length = 0LL;
  v88.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v112.Length = 0LL;
  v112.Buffer = 0LL;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  v71 = 0;
  v84 = 0;
  v89 = 0;
  v72 = 0;
  v73 = 0;
  P = 0LL;
  v90 = 0;
  v79 = 0;
  v74 = 0;
  *(_QWORD *)&v97.Length = 0LL;
  v97.Buffer = 0LL;
  v76[0] = 0;
  v80 = 0;
  v81 = 0;
  *(_DWORD *)&v111.Length = 68157440;
  v111.Buffer = (wchar_t *)ExAllocatePool2(256LL, 1040LL, 1667526736LL);
  if ( !v111.Buffer )
    goto LABEL_170;
  if ( a3 )
  {
    DriverConfiguration = PiDevCfgQueryDriverConfiguration(a3);
    if ( DriverConfiguration < 0 )
      goto LABEL_151;
    v95 = *(const wchar_t **)(a3 + 264);
    if ( *(_QWORD *)(a3 + 296) && !PnpDuplicateUnicodeString((__int64)&v98, a3 + 288) )
      goto LABEL_170;
    if ( *(_QWORD *)(a3 + 312) )
    {
      if ( !PnpDuplicateUnicodeString((__int64)&v104, a3 + 304) )
        goto LABEL_170;
      SourceString = v104.Buffer;
    }
    if ( *(_QWORD *)(a3 + 328) )
    {
      if ( !PnpDuplicateUnicodeString((__int64)&v105, a3 + 320) )
        goto LABEL_170;
      Buffer = v105.Buffer;
    }
    if ( (!*(_QWORD *)(a3 + 344) || PnpDuplicateUnicodeString((__int64)&v106, a3 + 336))
      && (!*(_QWORD *)(a3 + 360) || PnpDuplicateUnicodeString((__int64)&v107, a3 + 352)) )
    {
      v9 = *(_DWORD *)(a3 + 384);
      v12 = *(_DWORD *)(a3 + 184);
      v82 = *(_DWORD *)(a3 + 388);
      v13 = *(_QWORD *)(a3 + 208);
      v75 = v9;
      v83 = v12;
      if ( v13 == a3 + 208 )
      {
        v10 = (void *)SourceString;
      }
      else
      {
        do
        {
          v38 = PiDevCfgQueryDriverConfiguration(v13);
          DriverConfiguration = v38;
          if ( v38 >= 0 )
          {
            if ( *(_QWORD *)(v13 + 296) )
            {
              *(_DWORD *)(v13 + 184) &= ~1u;
            }
            else
            {
              if ( *(_QWORD *)(v13 + 312) )
              {
                DriverConfiguration = PiDevCfgAppendMultiSz(&v104);
                if ( DriverConfiguration < 0 )
                  goto LABEL_151;
              }
              if ( *(_QWORD *)(v13 + 328) )
              {
                DriverConfiguration = PiDevCfgAppendMultiSz(&v105);
                if ( DriverConfiguration < 0 )
                  goto LABEL_151;
              }
              if ( *(_QWORD *)(v13 + 344) )
              {
                DriverConfiguration = PiDevCfgAppendMultiSz(&v106);
                if ( DriverConfiguration < 0 )
                  goto LABEL_151;
              }
              if ( *(_QWORD *)(v13 + 360) )
              {
                DriverConfiguration = PiDevCfgAppendMultiSz(&v107);
                if ( DriverConfiguration < 0 )
                  goto LABEL_151;
              }
              v9 |= *(_DWORD *)(v13 + 384);
              v82 |= *(_DWORD *)(v13 + 388);
              v83 |= *(_DWORD *)(v13 + 184);
              v75 = v9;
              DriverConfiguration = PiDevCfgAppendMultiSz(&v109);
              if ( DriverConfiguration < 0 )
                goto LABEL_151;
              DriverConfiguration = PiDevCfgAppendMultiSz(&v110);
              if ( DriverConfiguration < 0 )
                goto LABEL_151;
            }
          }
          else
          {
            if ( v38 != -1073740653 || !PnpBootMode || (PiDevCfgFlags & 2) == 0 )
              goto LABEL_151;
            v9 |= 0x400u;
            DriverConfiguration = 0;
            v75 = v9;
          }
          v13 = *(_QWORD *)v13;
        }
        while ( v13 != a3 + 208 );
        LOBYTE(v12) = v83;
        if ( DriverConfiguration < 0 )
          goto LABEL_151;
        v10 = v104.Buffer;
        SourceString = v104.Buffer;
        Buffer = v105.Buffer;
      }
      if ( (PiDevCfgFlags & 2) != 0 )
      {
        if ( (v9 & 0x400) != 0
          && (*(_BYTE *)(a3 + 408) & 2) == 0
          && (PiDevCfgOptions & 1) == 0
          && !InitIsWinPEMode
          && !PnpBootMode )
        {
          goto LABEL_199;
        }
        if ( (v12 & 0x40) != 0 )
        {
          if ( !PnpBootMode )
            goto LABEL_199;
          v9 |= 0x400u;
          v75 = v9;
        }
      }
      memset(v115, 0, 0xA8uLL);
      LODWORD(v115[1]) = 288;
      LODWORD(v115[4]) = 0x1000000;
      v115[2] = L"Description";
      LODWORD(v115[11]) = 0x1000000;
      v14 = *(_QWORD *)(a3 + 24);
      v115[3] = &v86;
      v115[9] = L"Manufacturer";
      LODWORD(v115[8]) = 288;
      v115[10] = &v88;
      DriverConfiguration = RtlpQueryRegistryValues(3221225472LL, v14, v115, 0LL);
      if ( DriverConfiguration < 0 )
        goto LABEL_151;
      v15 = v88.Buffer;
      if ( !v86.Buffer && !v88.Buffer && *(_QWORD *)(a3 + 168) && (PiDevCfgFlags & 2) != 0 && !InitIsWinPEMode )
      {
        if ( !PnpBootMode )
          goto LABEL_199;
        v9 |= 0x400u;
        v75 = v9;
      }
      if ( !v86.Length && v86.Buffer )
      {
        RtlFreeUnicodeString(&v86);
        v15 = v88.Buffer;
      }
      if ( !v88.Length && v15 )
        RtlFreeUnicodeString(&v88);
      v16 = (int)v95;
      if ( !v95 || (int)PnpOpenObjectRegKey(PiPnpRtlCtx, (_DWORD)v95, 2, 131097, 0, (__int64)&Handle) < 0 )
        goto LABEL_223;
      memset(v115, 0, 0xA0uLL);
      v115[0] = &DEVPKEY_DeviceClass_Configurable;
      LODWORD(v115[1]) = 17;
      v115[2] = &v71;
      LODWORD(v115[6]) = 17;
      v115[5] = DEVPKEY_DeviceClass_PolicyExempt;
      v115[7] = &v72;
      LODWORD(v115[3]) = 1;
      v115[10] = &DEVPKEY_DeviceClass_DefaultService;
      v115[12] = &DestinationString;
      v115[15] = DEVPKEY_DeviceClass_CompatibleFeatureScores;
      v115[17] = &P;
      LODWORD(v115[8]) = 1;
      LODWORD(v115[11]) = 18;
      HIDWORD(v115[13]) = 6;
      LODWORD(v115[16]) = 4099;
      HIDWORD(v115[18]) = 2;
      DriverConfiguration = PiDevCfgQueryObjectProperties(2LL, v16, 2, (__int64)Handle, (__int64)v115, 4u);
      if ( DriverConfiguration < 0 )
        goto LABEL_151;
      v17 = v71;
      v18 = v72;
      if ( SLODWORD(v115[4]) < 0 )
        v17 = 0;
      v71 = v17;
      if ( SLODWORD(v115[9]) < 0 )
        v18 = 0;
      v72 = v18;
      if ( SLODWORD(v115[14]) < 0 )
      {
        RtlInitUnicodeString(&DestinationString, 0LL);
        v17 = v71;
      }
      if ( SLODWORD(v115[19]) >= 0 )
        v90 = v115[18];
      else
        P = 0LL;
      if ( v17 )
      {
LABEL_31:
        v19 = P;
        if ( P )
        {
          v40 = 0;
          if ( !v90 )
          {
LABEL_231:
            DriverConfiguration = -1073740764;
            goto LABEL_151;
          }
          while ( *v19 != *(_BYTE *)(a3 + 110) )
          {
            ++v40;
            ++v19;
            if ( v40 >= v90 )
              goto LABEL_231;
          }
        }
        goto LABEL_32;
      }
      if ( (int)PnpGetObjectProperty(
                  PiPnpRtlCtx,
                  (_DWORD)v95,
                  2,
                  (_DWORD)Handle,
                  0LL,
                  (__int64)DEVPKEY_DeviceClass_ConfigurableClassVersion,
                  (__int64)&v80,
                  (__int64)&v84,
                  4,
                  (__int64)&v81,
                  0) >= 0
        && v80 == 7
        && v81 == 4
        && v84
        && (int)PnpGetObjectProperty(
                  PiPnpRtlCtx,
                  *(_QWORD *)(a3 + 64),
                  8,
                  *(_QWORD *)(a3 + 16),
                  0LL,
                  (__int64)DEVPKEY_DriverPackage_ClassVersion,
                  (__int64)&v80,
                  (__int64)&v89,
                  4,
                  (__int64)&v81,
                  0) >= 0
        && v80 == 7
        && v81 == 4 )
      {
        v39 = v71;
        if ( v89 >= v84 )
          v39 = -1;
        v71 = v39;
      }
      else
      {
LABEL_223:
        v39 = v71;
      }
      if ( v39 || (PiDevCfgOptions & 1) != 0 || (PiDevCfgFlags & 2) == 0 )
        goto LABEL_31;
      if ( PnpBootMode )
      {
        v9 |= 0x400u;
        v75 = v9;
        goto LABEL_31;
      }
LABEL_199:
      DriverConfiguration = -1073740651;
      goto LABEL_151;
    }
LABEL_170:
    DriverConfiguration = -1073741670;
    goto LABEL_151;
  }
LABEL_32:
  if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    memset(v115, 0, 0xA0uLL);
    v41 = *(_QWORD *)(v7 + 8);
    v115[0] = &DEVPKEY_Device_ClassGuid;
    v115[2] = &Source2;
    LODWORD(v115[1]) = 13;
    v115[5] = DEVPKEY_Device_InstallFlags;
    v115[7] = &v79;
    v115[10] = DEVPKEY_Device_DriverNodeStrongName;
    v115[12] = &v97;
    LODWORD(v115[3]) = 16;
    LODWORD(v115[6]) = 7;
    LODWORD(v115[8]) = 4;
    LODWORD(v115[11]) = 18;
    HIDWORD(v115[13]) = 6;
    DriverConfiguration = PiDevCfgQueryObjectProperties(v42, v41, 1, v8, (__int64)v115, 3u);
    if ( DriverConfiguration < 0 )
      goto LABEL_151;
    if ( SLODWORD(v115[4]) >= 0 )
      v74 = 1;
    else
      Source2 = 0LL;
    v43 = v79;
    if ( SLODWORD(v115[9]) < 0 )
      v43 = 0;
    v79 = v43;
    if ( SLODWORD(v115[14]) < 0 )
      RtlInitUnicodeString(&v97, 0LL);
  }
  if ( !v72 )
  {
    if ( (v79 & 4) == 0 )
      goto LABEL_35;
    if ( !a3 )
      goto LABEL_247;
    memset(v115, 0, 0xA0uLL);
    v44 = *(_QWORD *)(v7 + 8);
    v115[0] = &DEVPKEY_Device_DriverInfPath;
    v115[2] = &String1;
    LODWORD(v115[1]) = 18;
    HIDWORD(v115[3]) = 6;
    DriverConfiguration = PiDevCfgQueryObjectProperties(v45, v44, 1, v8, (__int64)v115, 1u);
    if ( DriverConfiguration < 0 )
      goto LABEL_151;
    if ( SLODWORD(v115[4]) < 0 )
      RtlInitUnicodeString(&String1, 0LL);
    if ( String1.Buffer && RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(a3 + 40), 1u) )
    {
LABEL_247:
      v46 = -1;
      v72 = -1;
    }
    else
    {
      v46 = v72;
    }
    if ( !v46 )
    {
LABEL_35:
      DriverConfiguration = PiDevCfgEnforceDevicePolicy(v78, a2, v95);
      if ( DriverConfiguration < 0 )
        goto LABEL_151;
    }
  }
  if ( Handle )
  {
    ObjectAttributes.RootDirectory = Handle;
    String2.Buffer = L"Configuration";
    *(_DWORD *)&String2.Length = 1835034;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.ObjectName = &String2;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v20 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    DriverConfiguration = v20;
    if ( v20 != -1073741772 )
    {
      if ( v20 < 0 )
        goto LABEL_151;
      DriverConfiguration = PiDevCfgVerifyDeviceAllowed(v78, KeyHandle);
      if ( DriverConfiguration < 0 )
        goto LABEL_151;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v78 + 32) + 8LL) + 16LL) & 4) == 0
    || (int)PnpGetObjectProperty(
              PiPnpRtlCtx,
              *(_QWORD *)(v7 + 8),
              1,
              v8,
              0LL,
              (__int64)&DEVPKEY_Device_Reported,
              (__int64)&v80,
              (__int64)&v73,
              1,
              (__int64)&v81,
              0) >= 0
    && v80 == 17
    && v81 == 1 )
  {
    v21 = v73;
  }
  else
  {
    v21 = 0;
    v73 = 0;
  }
  if ( a3 && !v98.Buffer && !DestinationString.Buffer && !v21 && (*(_DWORD *)(v78 + 560) & 0x100) == 0 )
  {
    DriverConfiguration = -1073740652;
    goto LABEL_151;
  }
  if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    if ( a3 )
    {
      if ( (unsigned __int8)PnpIsNullGuid(&Source2) )
        goto LABEL_45;
      v47 = (_QWORD *)(a3 + 240);
      if ( (unsigned __int8)PnpIsNullGuid((void *)(a3 + 240)) )
        goto LABEL_45;
      v48 = Source2 - *v47;
      if ( (_QWORD)Source2 == *v47 )
        v48 = *((_QWORD *)&Source2 + 1) - *(_QWORD *)(a3 + 248);
      if ( !v48 )
        goto LABEL_45;
    }
    else if ( !v74 || (*(_DWORD *)(v78 + 560) & 0x100) == 0 )
    {
      CmDeleteDeviceRegKey(PiPnpRtlCtx);
    }
    CmDeleteDeviceRegKey(PiPnpRtlCtx);
  }
LABEL_45:
  v22 = v78;
  if ( (int)PiDevCfgMigrateDevice(
              v78,
              a2,
              (unsigned __int16 *)((a3 + 256) & -(__int64)(a3 != 0)),
              (a3 + 40) & -(__int64)(a3 != 0),
              &v91,
              &v92) >= 0 )
  {
    v9 |= v91;
    v75 = v9;
    v77 = v92;
  }
  if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    PiDevCfgResetDeviceDriverSettings(
      v22,
      a2,
      a3 != 0 ? a3 + 240 : 0,
      (_DWORD)Handle,
      (unsigned __int64)&Source2 & -(__int64)(v74 != 0));
    if ( *(_QWORD *)&PiPnpRtlCtx && (v49 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
      v50 = *(_QWORD *)(v49 + 8);
    else
      v50 = 0LL;
    RegRtlDeleteTreeInternal(v8, (__int64)L"Devices", v50, 0);
    if ( *(_QWORD *)&PiPnpRtlCtx && (v51 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
      v52 = *(_QWORD *)(v51 + 8);
    else
      v52 = 0LL;
    RegRtlDeleteTreeInternal(v8, (__int64)L"Filters", v52, 0);
  }
  if ( !a3 || (unsigned __int8)PnpIsNullGuid((void *)(a3 + 240)) )
  {
    if ( (*(_DWORD *)a2 & 1) == 0 )
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v7 + 8),
        1,
        v8,
        v58,
        (__int64)&DEVPKEY_Device_ClassGuid,
        0,
        0LL,
        0,
        0);
  }
  else
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v7 + 8),
                            1,
                            v8,
                            v58,
                            (__int64)&DEVPKEY_Device_ClassGuid,
                            13,
                            a3 + 240,
                            16,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_151;
  }
  if ( v98.Buffer )
  {
    if ( v98.Length )
    {
      v23 = PiDevCfgSetObjectProperty(
              PiPnpRtlCtx,
              a2,
              *(_QWORD *)(v7 + 8),
              1,
              v8,
              v58,
              (__int64)&DEVPKEY_Device_Service,
              18,
              (__int64)v98.Buffer,
              (unsigned int)v98.Length + 2,
              0);
      goto LABEL_54;
    }
LABEL_75:
    if ( (*(_DWORD *)a2 & 1) == 0 && (v98.Buffer && DestinationString.Buffer || !v73) )
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v7 + 8),
        1,
        v8,
        v58,
        (__int64)&DEVPKEY_Device_Service,
        0,
        0LL,
        0,
        0);
    goto LABEL_55;
  }
  if ( !DestinationString.Buffer || !DestinationString.Length )
    goto LABEL_75;
  v23 = PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          a2,
          *(_QWORD *)(v7 + 8),
          1,
          v8,
          v58,
          (__int64)&DEVPKEY_Device_Service,
          18,
          (__int64)DestinationString.Buffer,
          (unsigned int)DestinationString.Length + 2,
          0);
LABEL_54:
  DriverConfiguration = v23;
  if ( v23 < 0 )
    goto LABEL_151;
LABEL_55:
  if ( v10 )
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v7 + 8),
                            1,
                            v8,
                            v58,
                            (__int64)&DEVPKEY_Device_LowerFilters,
                            8210,
                            (__int64)v10,
                            v104.Length,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_151;
  }
  else if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v7 + 8),
      1,
      v8,
      v58,
      (__int64)&DEVPKEY_Device_LowerFilters,
      0,
      0LL,
      0,
      0);
  }
  if ( Buffer )
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v7 + 8),
                            1,
                            v8,
                            v58,
                            (__int64)&DEVPKEY_Device_UpperFilters,
                            8210,
                            (__int64)Buffer,
                            v105.Length,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_151;
  }
  else if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v7 + 8),
      1,
      v8,
      v58,
      (__int64)&DEVPKEY_Device_UpperFilters,
      0,
      0LL,
      0,
      0);
  }
  if ( a3 && v86.Buffer )
  {
    DriverConfiguration = PiDevCfgBuildIndirectString(a3, &v86.Length, (__int64)&UnicodeString, &v112);
    if ( DriverConfiguration < 0 )
      goto LABEL_151;
    if ( (v9 & 0x400) == 0 || (PiDevCfgOptions & 1) != 0 )
    {
      DriverConfiguration = PiDevCfgSetObjectProperty(
                              PiPnpRtlCtx,
                              a2,
                              *(_QWORD *)(v7 + 8),
                              1,
                              v8,
                              v58,
                              (__int64)&DEVPKEY_Device_DeviceDesc,
                              18,
                              (__int64)UnicodeString.Buffer,
                              (unsigned int)UnicodeString.Length + 2,
                              0);
      if ( DriverConfiguration < 0 )
        goto LABEL_151;
    }
    if ( v112.Buffer )
    {
      DriverConfiguration = PiDevCfgSetObjectProperty(
                              PiPnpRtlCtx,
                              a2,
                              *(_QWORD *)(v7 + 8),
                              1,
                              v8,
                              v58,
                              (__int64)&DEVPKEY_Device_DriverDesc,
                              18,
                              (__int64)v112.Buffer,
                              (unsigned int)v112.Length + 2,
                              0);
      if ( DriverConfiguration < 0 )
        goto LABEL_151;
    }
    else if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v7 + 8),
        1,
        v8,
        v58,
        (__int64)&DEVPKEY_Device_DriverDesc,
        0,
        0LL,
        0,
        0);
    }
    RtlFreeUnicodeString(&UnicodeString);
  }
  else if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    if ( !a3 )
      goto LABEL_299;
  }
  else
  {
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v7 + 8),
      1,
      v8,
      v58,
      (__int64)&DEVPKEY_Device_DriverDesc,
      0,
      0LL,
      0,
      0);
    if ( !a3 )
    {
      memset(v115, 0, 0xA0uLL);
      v53 = *(_QWORD *)(v7 + 8);
      v115[0] = &DEVPKEY_Device_BusReportedDeviceDesc;
      v115[2] = &v86;
      LODWORD(v115[1]) = 18;
      HIDWORD(v115[3]) = 6;
      if ( (int)PiDevCfgQueryObjectProperties(v54, v53, 1, v8, (__int64)v115, 1u) >= 0
        && SLODWORD(v115[4]) >= 0
        && v86.Buffer )
      {
        DriverConfiguration = PiDevCfgSetObjectProperty(
                                PiPnpRtlCtx,
                                a2,
                                *(_QWORD *)(v7 + 8),
                                1,
                                v8,
                                v65,
                                (__int64)&DEVPKEY_Device_DeviceDesc,
                                v115[1],
                                (__int64)v86.Buffer,
                                (unsigned int)v86.Length + 2,
                                0);
        if ( DriverConfiguration < 0 )
          goto LABEL_151;
      }
      else
      {
        PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          a2,
          *(_QWORD *)(v7 + 8),
          1,
          v8,
          v65,
          (__int64)&DEVPKEY_Device_DeviceDesc,
          0,
          0LL,
          0,
          0);
      }
      goto LABEL_299;
    }
  }
  if ( !v88.Buffer )
  {
LABEL_299:
    if ( (*(_DWORD *)a2 & 1) == 0 )
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v7 + 8),
        1,
        v8,
        v58,
        (__int64)&DEVPKEY_Device_Manufacturer,
        0,
        0LL,
        0,
        0);
    goto LABEL_83;
  }
  DriverConfiguration = PiDevCfgBuildIndirectString(a3, &v88.Length, (__int64)&UnicodeString, 0LL);
  if ( DriverConfiguration < 0 )
    goto LABEL_151;
  DriverConfiguration = PiDevCfgSetObjectProperty(
                          PiPnpRtlCtx,
                          a2,
                          *(_QWORD *)(v7 + 8),
                          1,
                          v8,
                          v58,
                          (__int64)&DEVPKEY_Device_Manufacturer,
                          18,
                          (__int64)UnicodeString.Buffer,
                          (unsigned int)UnicodeString.Length + 2,
                          0);
  if ( DriverConfiguration < 0 )
    goto LABEL_151;
LABEL_83:
  if ( a3 && (v24 = *(_QWORD *)(a3 + 280)) != 0 )
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v7 + 8),
                            1,
                            v8,
                            v58,
                            (__int64)&DEVPKEY_Device_DriverProvider,
                            18,
                            v24,
                            (unsigned int)*(unsigned __int16 *)(a3 + 272) + 2,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_151;
  }
  else
  {
    if ( (*(_DWORD *)a2 & 1) == 0 )
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v7 + 8),
        1,
        v8,
        v58,
        (__int64)&DEVPKEY_Device_DriverProvider,
        0,
        0LL,
        0,
        0);
    if ( !a3 )
    {
      if ( (*(_DWORD *)a2 & 1) == 0 )
      {
        PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          a2,
          *(_QWORD *)(v7 + 8),
          1,
          v8,
          v58,
          (__int64)&DEVPKEY_Device_DriverDate,
          0,
          0LL,
          0,
          0);
        PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          a2,
          *(_QWORD *)(v7 + 8),
          1,
          v8,
          v66,
          (__int64)&DEVPKEY_Device_DriverVersion,
          0,
          0LL,
          0,
          0);
        PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          a2,
          *(_QWORD *)(v7 + 8),
          1,
          v8,
          v67,
          (__int64)&DEVPKEY_Device_DriverInfPath,
          0,
          0LL,
          0,
          0);
        PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          a2,
          *(_QWORD *)(v7 + 8),
          1,
          v8,
          v68,
          (__int64)&DEVPKEY_Device_DriverInfSection,
          0,
          0LL,
          0,
          0);
        PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          a2,
          *(_QWORD *)(v7 + 8),
          1,
          v8,
          v69,
          (__int64)DEVPKEY_Device_DriverNodeStrongName,
          0,
          0LL,
          0,
          0);
      }
      goto LABEL_94;
    }
  }
  DriverConfiguration = PiDevCfgSetObjectProperty(
                          PiPnpRtlCtx,
                          a2,
                          *(_QWORD *)(v7 + 8),
                          1,
                          v8,
                          v58,
                          (__int64)&DEVPKEY_Device_DriverDate,
                          16,
                          a3 + 112,
                          8,
                          0);
  if ( DriverConfiguration < 0 )
    goto LABEL_151;
  v59 = *(unsigned __int16 *)(a3 + 120);
  LODWORD(v57) = *(unsigned __int16 *)(a3 + 122);
  DriverConfiguration = RtlUnicodeStringPrintf(
                          &v111,
                          L"%u.%u.%u.%u",
                          (unsigned __int16)HIWORD(*(_DWORD *)(a3 + 124)),
                          *(unsigned __int16 *)(a3 + 124),
                          v57);
  if ( DriverConfiguration < 0 )
    goto LABEL_151;
  DriverConfiguration = PiDevCfgSetObjectProperty(
                          PiPnpRtlCtx,
                          a2,
                          *(_QWORD *)(v7 + 8),
                          1,
                          v8,
                          v59,
                          (__int64)&DEVPKEY_Device_DriverVersion,
                          18,
                          (__int64)v111.Buffer,
                          (unsigned int)v111.Length + 2,
                          0);
  if ( DriverConfiguration < 0 )
    goto LABEL_151;
  DriverConfiguration = PiDevCfgSetObjectProperty(
                          PiPnpRtlCtx,
                          a2,
                          *(_QWORD *)(v7 + 8),
                          1,
                          v8,
                          v60,
                          (__int64)&DEVPKEY_Device_DriverInfPath,
                          18,
                          *(_QWORD *)(a3 + 48),
                          (unsigned int)*(unsigned __int16 *)(a3 + 40) + 2,
                          0);
  if ( DriverConfiguration < 0 )
    goto LABEL_151;
  DriverConfiguration = PiDevCfgSetObjectProperty(
                          PiPnpRtlCtx,
                          a2,
                          *(_QWORD *)(v7 + 8),
                          1,
                          v8,
                          v61,
                          (__int64)&DEVPKEY_Device_DriverInfSection,
                          18,
                          *(_QWORD *)(a3 + 96),
                          (unsigned int)*(unsigned __int16 *)(a3 + 88) + 2,
                          0);
  if ( DriverConfiguration < 0 )
    goto LABEL_151;
  DriverConfiguration = PiDevCfgBuildDriverNodeStrongName(a3, &v88, &v86, &String2);
  if ( DriverConfiguration < 0 )
    goto LABEL_151;
  if ( v97.Buffer && !RtlCompareUnicodeString(&v97, &String2, 1u) )
    RtlFreeUnicodeString(&v97);
  DriverConfiguration = PiDevCfgSetObjectProperty(
                          PiPnpRtlCtx,
                          a2,
                          *(_QWORD *)(v7 + 8),
                          1,
                          v8,
                          v62,
                          (__int64)DEVPKEY_Device_DriverNodeStrongName,
                          18,
                          (__int64)String2.Buffer,
                          (unsigned int)String2.Length + 2,
                          0);
  RtlFreeUnicodeString(&String2);
  if ( DriverConfiguration < 0 )
    goto LABEL_151;
LABEL_94:
  if ( !v97.Buffer || (v79 & 8) != 0 || (*(_DWORD *)(v78 + 396) & 0x6000) != 0 )
  {
    if ( (*(_DWORD *)a2 & 1) == 0 )
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v7 + 8),
        1,
        v8,
        v58,
        (__int64)DEVPKEY_Device_RollbackDriverNode,
        0,
        0LL,
        0,
        0);
  }
  else
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v7 + 8),
                            1,
                            v8,
                            v58,
                            (__int64)DEVPKEY_Device_RollbackDriverNode,
                            18,
                            (__int64)v97.Buffer,
                            (unsigned int)v97.Length + 2,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_151;
  }
  if ( v106.Buffer )
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v7 + 8),
                            1,
                            v8,
                            v58,
                            (__int64)DEVPKEY_Device_DriverIncludedInfs,
                            8210,
                            (__int64)v106.Buffer,
                            v106.Length,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_151;
  }
  else if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v7 + 8),
      1,
      v8,
      v58,
      (__int64)DEVPKEY_Device_DriverIncludedInfs,
      0,
      0LL,
      0,
      0);
  }
  if ( v107.Buffer )
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v7 + 8),
                            1,
                            v8,
                            v58,
                            (__int64)DEVPKEY_Device_DriverIncludedConfigs,
                            8210,
                            (__int64)v107.Buffer,
                            v107.Length,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_151;
  }
  else if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v7 + 8),
      1,
      v8,
      v58,
      (__int64)DEVPKEY_Device_DriverIncludedConfigs,
      0,
      0LL,
      0,
      0);
  }
  if ( v109.Buffer )
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v7 + 8),
                            1,
                            v8,
                            v58,
                            (__int64)DEVPKEY_Device_DriverExtendedInfs,
                            8210,
                            (__int64)v109.Buffer,
                            v109.Length,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_151;
  }
  else if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v7 + 8),
      1,
      v8,
      v58,
      (__int64)DEVPKEY_Device_DriverExtendedInfs,
      0,
      0LL,
      0,
      0);
  }
  if ( !a3 || *(_DWORD *)(a3 + 108) == -1 )
  {
    if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v7 + 8),
        1,
        v8,
        v58,
        (__int64)&DEVPKEY_Device_MatchingDeviceId,
        0,
        0LL,
        0,
        0);
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v7 + 8),
        1,
        v8,
        v70,
        (__int64)&DEVPKEY_Device_DriverRank,
        0,
        0LL,
        0,
        0);
    }
  }
  else
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v7 + 8),
                            1,
                            v8,
                            v58,
                            (__int64)&DEVPKEY_Device_MatchingDeviceId,
                            18,
                            *(_QWORD *)(a3 + 80),
                            (unsigned int)*(unsigned __int16 *)(a3 + 72) + 2,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_151;
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v7 + 8),
                            1,
                            v8,
                            v63,
                            (__int64)&DEVPKEY_Device_DriverRank,
                            7,
                            a3 + 108,
                            4,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_151;
  }
  if ( v79 )
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v7 + 8),
      1,
      v8,
      v58,
      (__int64)DEVPKEY_Device_InstallFlags,
      0,
      0LL,
      0,
      0);
  if ( a3 )
  {
    v25 = v93;
    *v93 = v9;
    if ( (*(_DWORD *)(a3 + 184) & 8) != 0 && (PiDevCfgFlags & 2) != 0 )
      *v25 = v9 | 0x400;
    DriverConfiguration = PiDevCfgConfigureDeviceDriver(v78, a2, a3, &v75, &v77);
    if ( DriverConfiguration < 0 )
      goto LABEL_151;
    *v25 |= v75;
    *v94 |= v77;
    for ( i = *(_QWORD *)(a3 + 208); i != a3 + 208; i = *(_QWORD *)i )
    {
      if ( (*(_DWORD *)(i + 184) & 1) != 0 )
      {
        DriverConfiguration = PiDevCfgConfigureDeviceDriver(v78, a2, i, &v75, &v77);
        if ( DriverConfiguration < 0 )
          goto LABEL_151;
        *v93 |= v75;
        *v94 |= v77;
      }
    }
    DriverConfiguration = PiDevCfgConfigureDeviceLocation(v78, a2, &v75, &v77);
    if ( DriverConfiguration < 0 )
      goto LABEL_151;
    v27 = v93;
    v28 = v94;
    *v93 |= v75;
    *v28 |= v77;
  }
  else
  {
    v29 = v78;
    v27 = v93;
    if ( (*(_DWORD *)(v78 + 560) & 0x100) != 0 )
    {
      *v93 = 0;
      v28 = v94;
      goto LABEL_120;
    }
    *v93 = 64;
    PnpDeleteDeviceInterfaces(v7);
    v28 = v94;
  }
  v29 = v78;
LABEL_120:
  v30 = 0;
  if ( v82 && !InitIsWinPEMode && PipIsDevNodeDNStarted(v29) )
    *v28 |= 0x10u;
  if ( (v79 & 2) != 0 )
    *v28 |= 0x20u;
  if ( v74 != v30 )
    *v28 |= 1u;
  if ( KeyHandle )
  {
    DriverConfiguration = PiDevCfgConfigureDeviceKeys(v29, a2, KeyHandle, -1, &v75, &v77);
    if ( DriverConfiguration < 0 )
      goto LABEL_151;
    *v27 |= v75;
    *v28 |= v77;
  }
  if ( (*v28 & 2) == 0 && v95 && Handle )
  {
    DriverConfiguration = PiDevCfgGetDeviceClassConfigFlags((int)v95, (int)Handle, &v75);
    if ( DriverConfiguration < 0 )
      goto LABEL_151;
    *v27 |= v75;
  }
  if ( a3 )
    v31 = *(UNICODE_STRING *)(a3 + 392);
  else
    v31 = *(UNICODE_STRING *)&PiDevCfgEmptyString;
  v32 = *(_QWORD *)(v7 + 8);
  String2 = v31;
  DriverConfiguration = PiDevCfgSetObjectProperty(
                          PiPnpRtlCtx,
                          a2,
                          v32,
                          1,
                          v8,
                          v58,
                          (__int64)&DEVPKEY_Device_ConfigurationId,
                          18,
                          (__int64)v31.Buffer,
                          (unsigned int)v31.Length + 2,
                          0);
  if ( DriverConfiguration >= 0 )
  {
    if ( v110.Buffer )
    {
      DriverConfiguration = PiDevCfgSetObjectProperty(
                              PiPnpRtlCtx,
                              a2,
                              *(_QWORD *)(v7 + 8),
                              1,
                              v8,
                              v64,
                              (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
                              8210,
                              (__int64)v110.Buffer,
                              v110.Length,
                              0);
      if ( DriverConfiguration < 0 )
        goto LABEL_151;
    }
    else if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v7 + 8),
        1,
        v8,
        v64,
        (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
        0,
        0LL,
        0,
        0);
    }
    if ( a3 && (v33 = *(_QWORD *)(a3 + 136)) != 0 )
    {
      DriverConfiguration = PiDevCfgSetObjectProperty(
                              PiPnpRtlCtx,
                              a2,
                              *(_QWORD *)(v7 + 8),
                              1,
                              v8,
                              v64,
                              (__int64)DEVPKEY_Device_MatchingTargetComputerId,
                              18,
                              v33,
                              (unsigned int)*(unsigned __int16 *)(a3 + 128) + 2,
                              0);
      if ( DriverConfiguration < 0 )
        goto LABEL_151;
    }
    else if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v7 + 8),
        1,
        v8,
        v64,
        (__int64)DEVPKEY_Device_MatchingTargetComputerId,
        0,
        0LL,
        0,
        0);
    }
    if ( (v83 & 0x80u) != 0 )
    {
      v55 = *(_QWORD *)(v7 + 8);
      v76[0] = -1;
      DriverConfiguration = PiDevCfgSetObjectProperty(
                              PiPnpRtlCtx,
                              a2,
                              v55,
                              1,
                              v8,
                              v64,
                              (__int64)DEVPKEY_Device_DriverInGroup,
                              17,
                              (__int64)v76,
                              1,
                              0);
      if ( DriverConfiguration < 0 )
        goto LABEL_151;
    }
    else if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v7 + 8),
        1,
        v8,
        v64,
        (__int64)DEVPKEY_Device_DriverInGroup,
        0,
        0LL,
        0,
        0);
    }
    if ( v98.Buffer && v98.Length )
      PipHardwareConfigActivateService(v98.Buffer);
    v34 = SourceString;
    if ( SourceString )
    {
      while ( *v34 )
      {
        PipHardwareConfigActivateService(v34);
        if ( !PnpBootMode && (*(_DWORD *)(a3 + 184) & 0x10) != 0 )
          PiDevCfgMakeServiceBootStart(v34);
        v37 = -1LL;
        do
          ++v37;
        while ( v34[v37] );
        v34 += v37 + 1;
      }
    }
    v35 = Buffer;
    if ( Buffer )
    {
      while ( *v35 )
      {
        PipHardwareConfigActivateService(v35);
        if ( !PnpBootMode && (*(_DWORD *)(a3 + 184) & 0x10) != 0 )
          PiDevCfgMakeServiceBootStart(v35);
        v56 = -1LL;
        do
          ++v56;
        while ( v35[v56] );
        v35 += v56 + 1;
      }
    }
  }
LABEL_151:
  RtlFreeUnicodeString(&v86);
  RtlFreeUnicodeString(&v88);
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&v98);
  RtlFreeUnicodeString(&v104);
  RtlFreeUnicodeString(&v105);
  RtlFreeUnicodeString(&v106);
  RtlFreeUnicodeString(&v107);
  RtlFreeUnicodeString(&v109);
  RtlFreeUnicodeString(&v110);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&String1);
  RtlFreeUnicodeString(&v97);
  if ( v111.Buffer )
    ExFreePoolWithTag(v111.Buffer, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)DriverConfiguration;
}
