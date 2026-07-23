/*
 * XREFs of PiDevCfgMigrateDevice @ 0x14087C1BC
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x14087A974 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgMigrateRootDevice @ 0x14095EDE4 (PiDevCfgMigrateRootDevice.c)
 *     PpDevCfgProcessDeviceReset @ 0x1409635BC (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B7D0 (RtlInitUnicodeStringEx.c)
 *     PnpValidateRegistryDword @ 0x1403C6D9C (PnpValidateRegistryDword.c)
 *     _wcsicmp @ 0x1403D9C30 (_wcsicmp.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14041CC90 (ZwDeleteValueKey.c)
 *     IopGetRegistryValue @ 0x14068CE78 (IopGetRegistryValue.c)
 *     _CmIsRootEnumeratedDevice @ 0x1406CC0B0 (_CmIsRootEnumeratedDevice.c)
 *     _SysCtxRegOpenKey @ 0x1406CED50 (_SysCtxRegOpenKey.c)
 *     _PnpGetObjectProperty @ 0x1406D0220 (_PnpGetObjectProperty.c)
 *     PiDevCfgFreeMigrationContext @ 0x140879594 (PiDevCfgFreeMigrationContext.c)
 *     PiDevCfgSetObjectProperty @ 0x14087B980 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14087C01C (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x14087C0F8 (PiDevCfgConfigureDeviceDriverConfiguration.c)
 *     PiDevCfgInitMigrationContext @ 0x14087C298 (PiDevCfgInitMigrationContext.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x14095D1B4 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095DC8C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x14095E660 (PiDevCfgFreeDeviceMigrationNode.c)
 *     PiDevCfgLogDeviceMigrated @ 0x14095EAC8 (PiDevCfgLogDeviceMigrated.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14095F000 (PiDevCfgQueryDeviceMigrationNode.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgMigrateDevice(int a1, __int64 a2, unsigned __int16 *a3, __int64 a4, _DWORD *a5, _DWORD *a6)
{
  int v8; // esi
  int v9; // r13d
  int inited; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  _WORD *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  int DeviceMigrationNode; // eax
  int v19; // ecx
  unsigned int *v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  const wchar_t *v24; // rsi
  void *v25; // r14
  const wchar_t **v26; // rdx
  int v27; // [rsp+30h] [rbp-71h]
  int v28; // [rsp+30h] [rbp-71h]
  PVOID P; // [rsp+68h] [rbp-39h] BYREF
  int v30; // [rsp+70h] [rbp-31h] BYREF
  int v31; // [rsp+74h] [rbp-2Dh] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-21h] BYREF
  __int128 v34; // [rsp+90h] [rbp-11h] BYREF
  __int128 v35; // [rsp+A0h] [rbp-1h]
  __int128 v36; // [rsp+B0h] [rbp+Fh] BYREF
  __int64 v37; // [rsp+C0h] [rbp+1Fh]

  v37 = 0LL;
  P = 0LL;
  Handle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v8 = a1;
  v31 = 0;
  v9 = 0;
  v30 = 0;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0;
  inited = PiDevCfgInitMigrationContext(a3, a4, &v34);
  if ( inited < 0 )
    goto LABEL_8;
  if ( !(_QWORD)v34 )
  {
    inited = 0;
    goto LABEL_8;
  }
  if ( (unsigned int)PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       *(_QWORD *)(a2 + 8),
                       1LL,
                       *(_QWORD *)(a2 + 16),
                       0LL,
                       (__int64)DEVPKEY_Device_MigrationRank,
                       (__int64)&v31,
                       0LL,
                       0,
                       (__int64)&v30,
                       0) == -1073741789
    && v31 == 9
    && v30 == 8 )
  {
    goto LABEL_50;
  }
  if ( *((_QWORD *)&v34 + 1) )
  {
    inited = PiDevCfgQueryDeviceMigrationNode(&v34, *(_QWORD *)(a2 + 8), &P);
    if ( inited < 0 )
    {
      P = 0LL;
      if ( inited == -1073741772 )
        inited = 0;
    }
    else
    {
      *((_QWORD *)P + 23) = 0LL;
    }
  }
  if ( !P )
  {
    if ( CmIsRootEnumeratedDevice(*(PCWSTR *)(a2 + 8)) )
      goto LABEL_50;
    if ( !*(_QWORD *)(a2 + 64) )
      goto LABEL_45;
    v12 = v36;
    if ( !(_QWORD)v36 )
    {
      v13 = 0LL;
      if ( *(_QWORD *)&PiPnpRtlCtx )
        v13 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
      v14 = SysCtxRegOpenKey(v13, v34, (__int64)L"Locations", 0, 0x20019u, (__int64)&v36);
      if ( v14 == -1073741772 )
      {
        *(_QWORD *)&v36 = 0LL;
LABEL_45:
        if ( P )
          goto LABEL_51;
        if ( !*((_QWORD *)&v35 + 1) )
          goto LABEL_76;
        DeviceMigrationNode = PiDevCfgFindDeviceMigrationNode(&v34, a2, *((_QWORD *)&v35 + 1), 69665LL, &P);
        inited = DeviceMigrationNode;
        if ( DeviceMigrationNode < 0 )
        {
          P = 0LL;
          if ( DeviceMigrationNode == -1073741275 )
            inited = 0;
        }
LABEL_50:
        if ( P )
          goto LABEL_51;
LABEL_76:
        PiDevCfgClearDeviceMigrationNode(&v34, *(_QWORD *)(a2 + 8));
        goto LABEL_8;
      }
      if ( v14 < 0 )
      {
LABEL_38:
        inited = v14;
        goto LABEL_8;
      }
      v12 = v36;
      if ( !(_QWORD)v36 )
        goto LABEL_45;
    }
    v15 = *(_WORD **)(a2 + 64);
    if ( *v15 )
    {
      while ( 1 )
      {
        v16 = 0LL;
        if ( *(_QWORD *)&PiPnpRtlCtx )
          v16 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
        v14 = SysCtxRegOpenKey(v16, v12, (__int64)v15, 0, 0x20019u, (__int64)&Handle);
        if ( v14 != -1073741772 )
        {
          if ( v14 < 0 )
            goto LABEL_38;
          inited = PiDevCfgFindDeviceMigrationNode(&v34, a2, Handle, 70145LL, &P);
          ZwClose(Handle);
          if ( inited >= 0 )
            goto LABEL_44;
          P = 0LL;
          if ( inited == -1073741275 )
            inited = 0;
        }
        v17 = -1LL;
        do
          ++v17;
        while ( v15[v17] );
        v15 += v17 + 1;
        if ( !*v15 )
          break;
        v12 = v36;
      }
    }
    if ( inited < 0 )
      goto LABEL_8;
LABEL_44:
    v8 = a1;
    goto LABEL_45;
  }
LABEL_51:
  v19 = *((_DWORD *)P + 4);
  if ( (v19 & 1) != 0 )
  {
    inited = -1073740007;
  }
  else if ( (v19 & 2) != 0 )
  {
    inited = -1073740719;
  }
  else
  {
    if ( IopGetRegistryValue(*((HANDLE *)P + 5), L"ConfigFlags", 0, &DestinationString) >= 0 )
    {
      if ( PnpValidateRegistryDword(*(__int64 *)&DestinationString.Length) )
        v9 = *(unsigned int *)((char *)v20 + v20[2]);
      ExFreePoolWithTag(v20, 0);
    }
    v21 = *(_QWORD *)(a2 + 16);
    v22 = *(_QWORD *)(a2 + 8);
    v30 = 0;
    if ( (unsigned int)PnpGetObjectProperty(
                         *(__int64 *)&PiPnpRtlCtx,
                         v22,
                         1LL,
                         v21,
                         0LL,
                         (__int64)&DEVPKEY_Device_ClassGuid,
                         (__int64)&v31,
                         0LL,
                         0,
                         (__int64)&v30,
                         0) != -1073741789
      || v31 != 13
      || v30 != 16 )
    {
      if ( a3 )
        PiDevCfgSetDeviceRegProp(v23, a2, 9u, 1, *((_QWORD *)a3 + 1), *a3 + 2);
      else
        PiDevCfgSetObjectProperty(
          *(__int64 *)&PiPnpRtlCtx,
          (_DWORD *)a2,
          *(const WCHAR **)(a2 + 8),
          1,
          *(_QWORD *)(a2 + 16),
          v27,
          (__int64)&DEVPKEY_Device_ClassGuid,
          13,
          (const wchar_t *)P + 40,
          0x10u,
          0);
    }
    inited = PiDevCfgConfigureDeviceDriverConfiguration(
               v8,
               a2,
               *((_QWORD *)P + 5),
               -1,
               0LL,
               0LL,
               (__int64)a5,
               (__int64)a6);
    if ( inited >= 0 )
    {
      if ( a5 )
        *a5 |= v9;
      v24 = (const wchar_t *)P;
      if ( *((_QWORD *)P + 23) )
      {
        v25 = *(void **)(a2 + 16);
        DestinationString = 0LL;
        if ( RtlInitUnicodeStringEx(&DestinationString, L"ParentIdPrefix") >= 0 )
        {
          ZwDeleteValueKey(v25, &DestinationString);
          v24 = (const wchar_t *)P;
        }
      }
      PiDevCfgSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        (_DWORD *)a2,
        *(const WCHAR **)(a2 + 8),
        1,
        *(_QWORD *)(a2 + 16),
        v28,
        (__int64)DEVPKEY_Device_MigrationRank,
        9,
        v24 + 92,
        8u,
        0);
    }
  }
  PiDevCfgLogDeviceMigrated(a2, P, (unsigned int)inited);
  v26 = (const wchar_t **)P;
  if ( (*((_DWORD *)P + 4) & 1) == 0 )
  {
    PiDevCfgClearDeviceMigrationNode(&v34, *((_QWORD *)P + 4));
    v26 = (const wchar_t **)P;
  }
  if ( !v26 || wcsicmp(*(const wchar_t **)(a2 + 8), v26[4]) )
    goto LABEL_76;
LABEL_8:
  if ( P )
    PiDevCfgFreeDeviceMigrationNode(P);
  PiDevCfgFreeMigrationContext((__int64)&v34);
  return (unsigned int)inited;
}
