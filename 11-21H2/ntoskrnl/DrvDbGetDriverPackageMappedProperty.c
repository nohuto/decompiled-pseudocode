/*
 * XREFs of DrvDbGetDriverPackageMappedProperty @ 0x1407886D0
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x1407881D0 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1407886D0 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x140A2EAB8 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x140A2EDF4 (DrvDbGetDriverPackageSignerScore.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x1402E0340 (RtlStringCchCopyExW.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     _RegRtlQueryValue @ 0x14077FC64 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x14077FFEC (_SysCtxRegOpenKey.c)
 *     DrvDbOpenObjectRegKey @ 0x1407827F0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1407886D0 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbOpenDriverPackageRegKey @ 0x140788A34 (DrvDbOpenDriverPackageRegKey.c)
 *     DrvDbGetRegValueMappedProperty @ 0x140788D90 (DrvDbGetRegValueMappedProperty.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x14083EAEC (_PnpCtxRegEnumKeyWithCallback.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x140A2EDF4 (DrvDbGetDriverPackageSignerScore.c)
 *     DrvDbGetObjectDatabaseNodeName @ 0x140A2EE50 (DrvDbGetObjectDatabaseNodeName.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall DrvDbGetDriverPackageMappedProperty(
        __int64 *a1,
        _WORD *a2,
        void *a3,
        __int64 a4,
        __int64 (**a5)[3],
        NTSTRSAFE_PWSTR pszDest,
        unsigned int a7,
        unsigned int *a8)
{
  _DWORD *v8; // r13
  HANDLE v9; // r15
  unsigned int *v10; // r12
  __int64 *v11; // r10
  int v13; // ecx
  int DriverPackageMappedProperty; // ebx
  unsigned int v16; // r8d
  __int64 (**j)[3]; // r11
  __int64 *v18; // r9
  __int64 v19; // rdx
  HANDLE v20; // rcx
  __int64 (**v21)[3]; // rsi
  int RegValueMappedProperty; // eax
  unsigned __int16 *v24; // r14
  HANDLE v25; // rcx
  int v26; // eax
  NTSTRSAFE_PWSTR v27; // rcx
  unsigned int v28; // eax
  size_t v29; // r8
  char *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  NTSTRSAFE_PWSTR v33; // r9
  int ObjectDatabaseNodeName; // eax
  __int64 v35; // rax
  NTSTRSAFE_PWSTR v36; // r14
  int v37; // r8d
  int v38; // eax
  int v39; // eax
  __int64 v40; // rax
  wchar_t *Pool2; // rax
  int v42; // r8d
  int v43; // eax
  __int64 v44; // rcx
  int v45; // r8d
  int v46; // edx
  int v47; // r8d
  __int64 v48; // r8
  _WORD *v49; // rdx
  unsigned __int64 i; // rcx
  __int64 v51; // r9
  int v52; // ecx
  unsigned int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  int v57; // eax
  bool v58; // zf
  __int64 v59; // rax
  __int64 v60; // r8
  unsigned int v61; // edx
  __int64 v62; // rdx
  NTSTRSAFE_PWSTR v63; // rcx
  unsigned int v64; // eax
  __int64 v65; // rax
  int v66; // eax
  char v67; // dl
  char v68; // al
  NTSTRSAFE_PWSTR v69; // rax
  __int64 v70; // rax
  int v71; // eax
  int v72; // eax
  NTSTRSAFE_PWSTR v73; // rcx
  __int64 v74; // rax
  HANDLE v75; // r8
  wchar_t *v76; // rcx
  unsigned int pcchRemaininga; // [rsp+28h] [rbp-79h]
  size_t *pcchRemaining; // [rsp+28h] [rbp-79h]
  ULONG dwFlags[2]; // [rsp+30h] [rbp-71h]
  HANDLE Handle; // [rsp+58h] [rbp-49h] BYREF
  wchar_t v81[2]; // [rsp+60h] [rbp-41h] BYREF
  wchar_t v82[2]; // [rsp+64h] [rbp-3Dh] BYREF
  int v83; // [rsp+68h] [rbp-39h] BYREF
  NTSTRSAFE_PWSTR v84; // [rsp+70h] [rbp-31h] BYREF
  __int128 v85; // [rsp+78h] [rbp-29h] BYREF
  __int64 v86; // [rsp+88h] [rbp-19h]
  __int64 v87; // [rsp+90h] [rbp-11h] BYREF
  HANDLE v88; // [rsp+98h] [rbp-9h] BYREF
  void *v89; // [rsp+A0h] [rbp-1h]
  wchar_t v92; // [rsp+100h] [rbp+5Fh] BYREF

  v8 = a5;
  v9 = a3;
  v10 = a8;
  v88 = 0LL;
  v11 = a1;
  v89 = 0LL;
  *(_DWORD *)a5 = 0;
  *v10 = 0;
  v13 = *(_DWORD *)(a4 + 16);
  Handle = 0LL;
  DriverPackageMappedProperty = 0;
  v86 = 0LL;
  LODWORD(v87) = 0;
  *(_DWORD *)v82 = 0;
  *(_DWORD *)v81 = 0;
  v83 = 0;
  v84 = 0LL;
  LOBYTE(v92) = 0;
  v85 = 0LL;
  if ( v13 == 2 )
  {
    v31 = *(_QWORD *)a4 - DEVPKEY_NODE;
    if ( *(_QWORD *)a4 == DEVPKEY_NODE )
      v31 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
    if ( !v31 )
    {
      v33 = pszDest;
      pcchRemaininga = a7 >> 1;
      *v8 = 18;
      ObjectDatabaseNodeName = DrvDbGetObjectDatabaseNodeName(v11, 2LL, a2, v33, pcchRemaininga, v10);
      DriverPackageMappedProperty = ObjectDatabaseNodeName;
      if ( (int)(ObjectDatabaseNodeName + 0x80000000) < 0 || ObjectDatabaseNodeName == -1073741789 )
        *v10 *= 2;
      goto LABEL_25;
    }
  }
  else if ( v13 == 18 )
  {
    v35 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurable;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurable )
      v35 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v35 )
    {
      if ( !a3 )
      {
        DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey((_DWORD)v11, (_DWORD)a2, 1, 0, (__int64)&Handle, 0LL);
        if ( DriverPackageMappedProperty < 0 )
          goto LABEL_25;
        LODWORD(a3) = (_DWORD)Handle;
        LODWORD(v11) = (_DWORD)a1;
      }
      v36 = pszDest;
      DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                      (int)v11,
                                      (int)a2,
                                      (int)a3,
                                      (int)&DEVPKEY_DriverPackage_ConfigurableOverride,
                                      (__int64)v8,
                                      pszDest,
                                      a7,
                                      (__int64)v10);
      if ( (int)(DriverPackageMappedProperty + 0x80000000) < 0 || DriverPackageMappedProperty == -1073741789 )
        goto LABEL_25;
      v37 = (int)Handle;
      if ( v9 )
        v37 = (int)v9;
      v38 = DrvDbGetDriverPackageMappedProperty(
              (int)a1,
              (int)a2,
              v37,
              (int)&DEVPKEY_DriverPackage_ConfigurableFlags,
              (__int64)v8,
              v82,
              4,
              (__int64)v10);
      DriverPackageMappedProperty = v38;
      if ( v38 == -1073741789 )
      {
LABEL_74:
        DriverPackageMappedProperty = -1073741595;
        goto LABEL_25;
      }
      if ( v38 >= 0 )
      {
        if ( *v8 == 7 && *v10 == 4 )
        {
          v39 = *(_DWORD *)v82;
        }
        else
        {
          v39 = -1;
          *(_DWORD *)v82 = -1;
        }
        *v8 = 17;
        *v10 = 1;
        if ( !v36 || !a7 )
          goto LABEL_206;
        *(_BYTE *)v36 = (v39 != 0) - 1;
      }
      goto LABEL_25;
    }
  }
  else if ( v13 == 33 )
  {
    v40 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_FamilyId;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_FamilyId )
      v40 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v40 )
    {
      if ( !a3 )
      {
        DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey((_DWORD)v11, (_DWORD)a2, 1, 0, (__int64)&Handle, 0LL);
        if ( DriverPackageMappedProperty < 0 )
          goto LABEL_25;
      }
      Pool2 = (wchar_t *)ExAllocatePool2(256LL, 1042LL, 1111770192LL);
      v24 = Pool2;
      if ( Pool2 )
      {
        v42 = (int)Handle;
        if ( v9 )
          v42 = (int)v9;
        v43 = DrvDbGetDriverPackageMappedProperty(
                (int)a1,
                (int)a2,
                v42,
                (int)&DEVPKEY_DriverPackage_ProviderName,
                (__int64)v8,
                Pool2,
                1042,
                (__int64)v10);
        DriverPackageMappedProperty = v43;
        if ( v43 != -1073741789 )
        {
          if ( v43 < 0 )
            goto LABEL_42;
          if ( *v8 != 18 )
            goto LABEL_193;
          if ( *v10 - 2 > 0x206 )
            goto LABEL_193;
          v44 = (*v10 >> 1) - 1;
          v87 = (unsigned int)v44;
          if ( v24[v44] )
            goto LABEL_193;
          v45 = (int)Handle;
          v46 = 2 * v44;
          LODWORD(a8) = 2 * v44;
          if ( v9 )
            v45 = (int)v9;
          LODWORD(a5) = 1040 - v46;
          v84 = &v24[(unsigned int)v44 + 1];
          DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                          (int)a1,
                                          (int)a2,
                                          v45,
                                          (int)&DEVPKEY_DriverPackage_OriginalInfName,
                                          (__int64)v8,
                                          v84,
                                          1040 - v46,
                                          (__int64)v10);
          if ( DriverPackageMappedProperty == -1073741275 )
          {
            v47 = (int)Handle;
            if ( v9 )
              v47 = (int)v9;
            DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                            (int)a1,
                                            (int)a2,
                                            v47,
                                            (int)&DEVPKEY_DriverPackage_DriverInfName,
                                            (__int64)v8,
                                            v84,
                                            (int)a5,
                                            (__int64)v10);
          }
          if ( DriverPackageMappedProperty != -1073741789 )
          {
            if ( DriverPackageMappedProperty < 0 )
              goto LABEL_42;
            if ( *v8 == 18 && *v10 - 2 <= 0x206 )
            {
              v48 = v87;
              v49 = v24;
              v24[v87] = 45;
              for ( i = *v24; (_WORD)i; i = (unsigned __int16)*v49 )
              {
                if ( (unsigned __int16)i <= 0x3Au && (v51 = 0x400200100000000LL, _bittest64(&v51, i)) || (_WORD)i == 126 )
                  *v49 = 95;
                ++v49;
              }
              v52 = (_DWORD)a8 + 2;
              v24[v48] = 45;
              *v8 = 18;
              v53 = *v10 + v52;
              *v10 = v53;
              v27 = pszDest;
              if ( pszDest && a7 >= v53 )
              {
                v29 = v53;
                v30 = (char *)v24;
                goto LABEL_41;
              }
LABEL_192:
              DriverPackageMappedProperty = -1073741789;
              goto LABEL_42;
            }
LABEL_193:
            DriverPackageMappedProperty = -1073741823;
            goto LABEL_42;
          }
        }
LABEL_191:
        DriverPackageMappedProperty = -1073741595;
        goto LABEL_42;
      }
LABEL_103:
      DriverPackageMappedProperty = -1073741801;
      goto LABEL_25;
    }
  }
  else
  {
    if ( v13 == 29 )
    {
      v54 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurations;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurations )
        v54 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v54 )
        goto LABEL_120;
    }
    if ( v13 != 30 )
    {
      switch ( v13 )
      {
        case ' ':
          v32 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_DriverPackageId;
          if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_DriverPackageId )
            v32 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
          if ( !v32 )
          {
            *v8 = 18;
            v62 = -1LL;
            do
              ++v62;
            while ( a2[v62] );
            v63 = pszDest;
            v64 = 2 * v62 + 2;
            *v10 = v64;
            if ( v63 && a7 >= v64 )
              memmove(v63, a2, v64);
            else
              return (unsigned int)-1073741789;
            return (unsigned int)DriverPackageMappedProperty;
          }
          break;
        case '&':
          v65 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Integrated;
          if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Integrated )
            v65 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
          if ( !v65 )
          {
            if ( !a3 )
            {
              DriverPackageMappedProperty = DrvDbOpenObjectRegKey(v11, 0LL, 2u, a2, 1, 0, &Handle, 0LL, &v84);
              if ( DriverPackageMappedProperty < 0 )
                goto LABEL_25;
              LODWORD(v9) = (_DWORD)Handle;
              LODWORD(v11) = (_DWORD)a1;
            }
            v66 = DrvDbGetDriverPackageMappedProperty(
                    (int)v11,
                    (int)a2,
                    (int)v9,
                    (int)&DEVPKEY_DriverPackage_Inbox,
                    (__int64)v8,
                    &v92,
                    1,
                    (__int64)v10);
            DriverPackageMappedProperty = v66;
            if ( v66 == -1073741789 )
              goto LABEL_74;
            if ( v66 == -1073741275 )
            {
              DriverPackageMappedProperty = 0;
              LOBYTE(v92) = 0;
              v67 = 0;
            }
            else
            {
              if ( v66 < 0 )
                goto LABEL_25;
              if ( *v8 == 17 && *v10 == 1 )
              {
                v67 = v92;
              }
              else
              {
                v67 = -1;
                LOBYTE(v92) = -1;
              }
              if ( v67 )
              {
                if ( !Handle )
                {
                  LOBYTE(dwFlags[0]) = 0;
                  LODWORD(pcchRemaining) = 1;
                  DriverPackageMappedProperty = DrvDbOpenObjectRegKey(
                                                  a1,
                                                  0LL,
                                                  2u,
                                                  a2,
                                                  pcchRemaining,
                                                  *(_QWORD *)dwFlags,
                                                  &Handle,
                                                  0LL,
                                                  &v84);
                  if ( DriverPackageMappedProperty < 0 )
                    goto LABEL_25;
                  v67 = v92;
                }
                v68 = v67;
                if ( (v84[32] & 0x10) != 0 )
                  v68 = 0;
                v67 = v68;
                LOBYTE(v92) = v68;
              }
            }
            v69 = pszDest;
            *v8 = 17;
            *v10 = 1;
            if ( !v69 || !a7 )
              goto LABEL_206;
            *(_BYTE *)v69 = v67;
            goto LABEL_25;
          }
          break;
        case '(':
          v70 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Primitive;
          if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Primitive )
            v70 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
          if ( !v70 )
          {
            if ( !a3 )
            {
              DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey(
                                              (_DWORD)v11,
                                              (_DWORD)a2,
                                              1,
                                              0,
                                              (__int64)&Handle,
                                              0LL);
              if ( DriverPackageMappedProperty < 0 )
                goto LABEL_25;
              LODWORD(v9) = (_DWORD)Handle;
              LODWORD(v11) = (_DWORD)a1;
            }
            v71 = DrvDbGetDriverPackageMappedProperty(
                    (int)v11,
                    (int)a2,
                    (int)v9,
                    (int)&DEVPKEY_DriverPackage_PrimitiveFlags,
                    (__int64)v8,
                    v81,
                    4,
                    (__int64)v10);
            DriverPackageMappedProperty = v71;
            if ( v71 != -1073741789 )
            {
              if ( v71 == -1073741275 )
              {
                DriverPackageMappedProperty = 0;
              }
              else
              {
                if ( v71 < 0 )
                  goto LABEL_25;
                if ( *v8 == 7 && *v10 == 4 )
                {
                  v72 = *(_DWORD *)v81;
                  goto LABEL_183;
                }
              }
              v72 = -1;
              *(_DWORD *)v81 = -1;
LABEL_183:
              v73 = pszDest;
              *v8 = 17;
              *v10 = 1;
              if ( v73 && a7 )
              {
                *(_BYTE *)v73 = (v72 != 0) - 1;
                goto LABEL_25;
              }
LABEL_206:
              DriverPackageMappedProperty = -1073741789;
              goto LABEL_25;
            }
            goto LABEL_74;
          }
          break;
      }
      goto LABEL_9;
    }
    v55 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
      v55 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v55 )
    {
LABEL_120:
      if ( !a3 )
      {
        DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey((_DWORD)v11, (_DWORD)a2, 1, 0, (__int64)&Handle, 0LL);
        if ( DriverPackageMappedProperty < 0 )
          goto LABEL_25;
        v9 = Handle;
        v11 = a1;
      }
      v56 = 0LL;
      if ( *v11 )
        v56 = *(_QWORD *)(*v11 + 224);
      v57 = SysCtxRegOpenKey(v56, (__int64)v9, (__int64)L"Configurations", 0, 9u, (__int64)&v88);
      DriverPackageMappedProperty = v57;
      if ( v57 != -1073741772 )
      {
        if ( v57 < 0 )
          goto LABEL_25;
        v58 = *(_DWORD *)(a4 + 16) == 30;
        *(_WORD *)((char *)&v86 + 1) = 0;
        BYTE3(v86) = 0;
        *(_QWORD *)&v85 = pszDest;
        HIDWORD(v85) = 0;
        HIDWORD(v86) = 0;
        if ( !v58 )
          goto LABEL_131;
        v59 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
          v59 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        LOBYTE(v86) = 1;
        if ( v59 )
LABEL_131:
          LOBYTE(v86) = 0;
        if ( pszDest )
          DWORD2(v85) = a7 >> 1;
        else
          DWORD2(v85) = 0;
        DriverPackageMappedProperty = PnpCtxRegEnumKeyWithCallback(*a1, v88, DrvDbGetConfigurationSubKeyCallback, &v85);
        if ( DriverPackageMappedProperty < 0 )
        {
          if ( v86 < 0 )
            DriverPackageMappedProperty = HIDWORD(v86);
          goto LABEL_25;
        }
        if ( HIDWORD(v85) )
        {
          v60 = v85;
          v61 = HIDWORD(v85) + 1;
          DriverPackageMappedProperty = HIDWORD(v86);
          *v8 = 8210;
          HIDWORD(v85) = v61;
          *v10 = 2 * v61;
          if ( v60 && 2 * (unsigned __int64)v61 <= a7 )
            *(_WORD *)(v60 + 2LL * (v61 - 1)) = 0;
          else
            DriverPackageMappedProperty = -1073741789;
          goto LABEL_25;
        }
      }
      DriverPackageMappedProperty = -1073741275;
      goto LABEL_25;
    }
  }
LABEL_9:
  v16 = 0;
  for ( j = &off_140002870; ; j += 5 )
  {
    v18 = (__int64 *)*j;
    if ( LODWORD((**j)[2]) == v13 )
    {
      v19 = *v18 - *(_QWORD *)a4;
      if ( *v18 == *(_QWORD *)a4 )
        v19 = v18[1] - *(_QWORD *)(a4 + 8);
      if ( !v19 )
        break;
    }
    if ( ++v16 >= 0x20 )
      return (unsigned int)-1073741802;
  }
  a5 = &off_140002870 + 5 * v16;
  if ( !a5 )
    return (unsigned int)-1073741802;
  if ( v9 )
  {
    v20 = v89;
LABEL_20:
    v21 = a5;
    if ( !*((_DWORD *)a5 + 8) )
    {
      if ( v9 )
        v20 = v9;
      RegValueMappedProperty = DrvDbGetRegValueMappedProperty(v20, v20, a5, v8, pszDest, a7, v10);
      DriverPackageMappedProperty = RegValueMappedProperty;
      if ( RegValueMappedProperty != -1073741275
        && (RegValueMappedProperty && RegValueMappedProperty != -1073741789 || *v8 != 18 || *v10 != 2)
        || *(_DWORD *)(a4 + 16) != 7 )
      {
        goto LABEL_25;
      }
      v74 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerName;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerName )
        v74 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( v74 )
        goto LABEL_25;
      v75 = Handle;
      if ( v9 )
        v75 = v9;
      if ( (int)DrvDbGetDriverPackageSignerScore(a1, a2, v75, &v83) < 0 || v83 != 218103811 )
        goto LABEL_25;
      v76 = pszDest;
      DriverPackageMappedProperty = 0;
      *v8 = 18;
      *v10 = 36;
      if ( v76 && a7 >= 0x24 )
      {
        RtlStringCchCopyExW(v76, (unsigned __int64)a7 >> 1, L"Microsoft Windows", 0LL, 0LL, 0x800u);
        goto LABEL_25;
      }
      goto LABEL_206;
    }
    LODWORD(a5) = 48;
    v24 = (unsigned __int16 *)ExAllocatePool2(256LL, 48LL, 1111770192LL);
    if ( v24 )
    {
      v25 = Handle;
      if ( v9 )
        v25 = v9;
      v26 = RegRtlQueryValue(v25, L"Version", &v87, v24, (unsigned int *)&a5);
      DriverPackageMappedProperty = v26;
      if ( v26 == -1073741772 )
      {
        DriverPackageMappedProperty = -1073741275;
        goto LABEL_42;
      }
      if ( v26 != -1073741789 )
      {
        if ( v26 < 0 )
        {
LABEL_42:
          ExFreePoolWithTag(v24, 0);
          goto LABEL_25;
        }
        if ( (_DWORD)v87 == 3 && (_DWORD)a5 == 48 )
        {
          v27 = pszDest;
          *v8 = *((_DWORD *)v21 + 2);
          v28 = *((_DWORD *)v21 + 8);
          *v10 = v28;
          if ( v27 && a7 >= v28 )
          {
            v29 = *((unsigned int *)v21 + 8);
            v30 = (char *)v24 + *((unsigned int *)v21 + 7);
LABEL_41:
            memmove(v27, v30, v29);
            goto LABEL_42;
          }
          goto LABEL_192;
        }
        goto LABEL_193;
      }
      goto LABEL_191;
    }
    goto LABEL_103;
  }
  DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey((_DWORD)v11, (_DWORD)a2, 1, 0, (__int64)&Handle, 0LL);
  if ( DriverPackageMappedProperty >= 0 )
  {
    v20 = Handle;
    goto LABEL_20;
  }
LABEL_25:
  if ( v88 )
    ZwClose(v88);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DriverPackageMappedProperty;
}
