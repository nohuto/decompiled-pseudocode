/*
 * XREFs of ?RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z @ 0x180045B5C
 * Callers:
 *     ?RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z @ 0x180045934 (-RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z.c)
 * Callees:
 *     ?HampSystemQueryDWordValue@@YAJPEAUHKEY__@@PEBGPEAK@Z @ 0x180045D8C (-HampSystemQueryDWordValue@@YAJPEAUHKEY__@@PEBGPEAK@Z.c)
 */

__int64 __fastcall RmpGetResourceManagerRegistryOverrides(
        struct _RM_RUNTIME_CONFIGURATION *a1,
        struct _RM_RUNTIME_CONFIGURATION *a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  LSTATUS v13; // eax
  signed int v14; // ebx
  unsigned int v15; // ebx
  LSTATUS v16; // eax
  bool v17; // sf
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  _OWORD *v25; // rdi
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  unsigned int v30; // eax
  HKEY phkResult; // [rsp+30h] [rbp-79h] BYREF
  __int128 v32; // [rsp+40h] [rbp-69h]
  __int128 v33; // [rsp+50h] [rbp-59h]
  __int128 v34; // [rsp+60h] [rbp-49h]
  __int128 v35; // [rsp+70h] [rbp-39h]
  __int128 v36; // [rsp+80h] [rbp-29h]
  __int128 v37; // [rsp+90h] [rbp-19h]
  __int128 v38; // [rsp+A0h] [rbp-9h]
  __int128 v39; // [rsp+B0h] [rbp+7h]
  __int128 v40; // [rsp+C0h] [rbp+17h] BYREF
  __int128 v41; // [rsp+D0h] [rbp+27h]
  __int128 v42; // [rsp+E0h] [rbp+37h]
  unsigned int v43; // [rsp+110h] [rbp+67h] BYREF
  int v44; // [rsp+120h] [rbp+77h] BYREF
  HKEY hKey; // [rsp+128h] [rbp+7Fh] BYREF

  v2 = *(_OWORD *)a1;
  hKey = 0LL;
  v3 = *((_OWORD *)a1 + 1);
  phkResult = 0LL;
  v32 = v2;
  v5 = *((_OWORD *)a1 + 2);
  v33 = v3;
  v6 = *((_OWORD *)a1 + 3);
  v34 = v5;
  v7 = *((_OWORD *)a1 + 4);
  v35 = v6;
  v8 = *((_OWORD *)a1 + 5);
  v36 = v7;
  v9 = *((_OWORD *)a1 + 6);
  v37 = v8;
  v10 = *((_OWORD *)a1 + 8);
  v38 = v9;
  v39 = *((_OWORD *)a1 + 7);
  v11 = *((_OWORD *)a1 + 9);
  v40 = v10;
  v12 = *((_OWORD *)a1 + 10);
  v41 = v11;
  v42 = v12;
  v13 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"System\\ResourceManager", 0, 0x20019u, &hKey);
  v14 = v13;
  if ( v13 > 0 )
    v14 = (unsigned __int16)v13 | 0xC0070000;
  if ( v14 >= 0 )
  {
    if ( (int)HampSystemQueryDWordValue(hKey, L"MemoryFlags", &v43) >= 0 )
    {
      v30 = v32;
      if ( (v43 & 0xFFFFFFF0) == 0 )
        v30 = v43;
      LODWORD(v32) = v30;
    }
    v15 = DWORD1(v32);
    if ( (int)HampSystemQueryDWordValue(hKey, L"CustomizationFlags", &v43) >= 0 )
    {
      if ( (v43 & 0xFFFFFE00) == 0 )
        v15 = v43;
      DWORD1(v32) = v15;
    }
    RtlGetDeviceFamilyInfoEnum(0LL, &v44, 0LL);
    if ( v44 == 3 )
    {
      v15 |= 0x40u;
    }
    else
    {
      if ( v44 != 10 && v44 != 16 )
        goto LABEL_9;
      v15 |= 0x80u;
    }
    DWORD1(v32) = v15;
LABEL_9:
    v16 = RegOpenKeyExW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows NT\\CurrentVersion\\ResourceManager",
            0,
            0x20019u,
            &phkResult);
    v17 = v16 < 0;
    if ( v16 > 0 )
      v17 = 1;
    if ( !v17 && (int)HampSystemQueryDWordValue(phkResult, L"SimulateCommitSavings", &v43) >= 0 && v43 <= 1 )
      DWORD1(v32) = ((unsigned __int8)v15 ^ (unsigned __int8)(2 * v43)) & 2 ^ v15;
    HampSystemQueryDWordValue(hKey, L"UserPresenceIoDeduction", (unsigned int *)&v40);
    v18 = v33;
    *(_OWORD *)a2 = v32;
    v19 = v34;
    *((_OWORD *)a2 + 1) = v18;
    v20 = v35;
    *((_OWORD *)a2 + 2) = v19;
    v21 = v36;
    *((_OWORD *)a2 + 3) = v20;
    v22 = v37;
    *((_OWORD *)a2 + 4) = v21;
    v23 = v38;
    *((_OWORD *)a2 + 5) = v22;
    v24 = v39;
    *((_OWORD *)a2 + 6) = v23;
    v25 = (_OWORD *)((char *)a2 + 128);
    v26 = v40;
    v14 = 0;
    *(v25 - 1) = v24;
    v27 = v41;
    *v25 = v26;
    v28 = v42;
    v25[1] = v27;
    v25[2] = v28;
  }
  if ( hKey )
    RegCloseKey(hKey);
  if ( phkResult )
    RegCloseKey(phkResult);
  return (unsigned int)v14;
}
