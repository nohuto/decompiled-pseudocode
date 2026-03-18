/*
 * XREFs of ACPISystemPowerUpdateWakeCapabilitiesForFilters @ 0x1C001E928
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilities @ 0x1C00953E0 (ACPISystemPowerUpdateWakeCapabilities.c)
 * Callees:
 *     ACPISystemPowerDetermineSupportedDeviceWakeState @ 0x1C00203FC (ACPISystemPowerDetermineSupportedDeviceWakeState.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     AcpiGetIdleWakeInfo @ 0x1C00952D0 (AcpiGetIdleWakeInfo.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1C009581C (ACPISystemPowerGetDeviceWake.c)
 */

__int64 __fastcall ACPISystemPowerUpdateWakeCapabilitiesForFilters(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        int *a5,
        _DWORD *a6,
        signed int *a7,
        signed int *a8)
{
  signed int v9; // edi
  __int64 v11; // rbx
  int v12; // ecx
  int v13; // eax
  int DeviceWake; // eax
  bool v15; // zf
  KIRQL v17; // al
  unsigned int v18; // r12d
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  signed int v22; // r13d
  KIRQL v23; // r9
  bool v24; // r13
  int IdleWakeInfo; // eax
  bool v26; // zf
  int v27; // esi
  signed int *v28; // rdx
  int v29; // eax
  signed int v30; // ecx
  unsigned int v31; // ecx
  int v32; // eax
  __int64 v33; // rax
  int v34; // eax
  signed int v35; // ecx
  int v36; // eax
  int v37; // eax
  char v38; // [rsp+20h] [rbp-50h]
  unsigned int v39; // [rsp+24h] [rbp-4Ch] BYREF
  __int64 v40; // [rsp+28h] [rbp-48h]
  _DWORD *v41; // [rsp+30h] [rbp-40h]
  signed int *v42; // [rsp+38h] [rbp-38h]
  signed int *v43; // [rsp+40h] [rbp-30h]
  __m128i si128; // [rsp+48h] [rbp-28h]
  int v45; // [rsp+58h] [rbp-18h]
  int v46; // [rsp+5Ch] [rbp-14h]

  v9 = a3[12];
  v11 = (unsigned int)a3[11];
  v41 = a6;
  v42 = a7;
  *a5 = 0;
  v12 = a3[1];
  v43 = a8;
  v13 = 0;
  v40 = a4;
  v38 = 0;
  v39 = 0;
  if ( (v12 & 0x400) != 0 )
  {
    v13 = 2;
    *a5 = 2;
    v12 = a3[1];
  }
  if ( (v12 & 0x800) != 0 )
  {
    v13 |= 4u;
    *a5 = v13;
    v12 = a3[1];
  }
  if ( (v12 & 0x1000) != 0 )
  {
    v13 |= 8u;
    *a5 = v13;
    v12 = a3[1];
  }
  if ( (v12 & 0x2000) != 0 )
    *a5 = v13 | 0x10;
  if ( !v9 || !(_DWORD)v11 )
  {
    v38 = 1;
    v9 = 0;
    v11 = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x10000LL) != 0 )
  {
    v17 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    v18 = *(_DWORD *)(a1 + 536);
    LOBYTE(v19) = v17;
    v22 = ACPISystemPowerDetermineSupportedDeviceWakeState(a1, v20, v21, v19);
    KeReleaseSpinLock(&AcpiPowerLock, v23);
    if ( v38 || (int)v18 < (int)v11 )
      v11 = v18;
    if ( !(_DWORD)v11 )
    {
      v33 = *(_QWORD *)(a1 + 1000);
      if ( (v33 & 0x400000000LL) != 0 )
      {
        if ( (AcpiSupportedSystemStates & 0x20) != 0 )
          v11 = 5LL;
        else
          v11 = (AcpiSupportedSystemStates & 0x10) != 0 ? 4 : 1;
      }
      else if ( (v33 & 0x100000000LL) != 0 )
      {
        v11 = 1LL;
      }
    }
    if ( v22 )
      v9 = v22;
    v24 = v22 != 0;
    IdleWakeInfo = AcpiGetIdleWakeInfo(a1, v18, &v39);
    if ( IdleWakeInfo == -1073741275 )
    {
      IdleWakeInfo = AcpiGetIdleWakeInfo(a1, (unsigned int)v11, &v39);
      if ( IdleWakeInfo == -1073741275 )
        IdleWakeInfo = ACPISystemPowerGetDeviceWake(a1, &v39);
    }
    if ( IdleWakeInfo >= 0
      && ((si128 = _mm_load_si128((const __m128i *)&_xmm), v45 = 4, v46 = 4, v39 > 5)
        ? (v31 = 0)
        : (v31 = si128.m128i_u32[v39]),
          v32 = *a5,
          _bittest(&v32, v31)) )
    {
      v9 = v31;
    }
    else if ( !v24 )
    {
      if ( (unsigned int)v11 > 6 )
        v11 = 0LL;
      v9 = *(_DWORD *)(v40 + 4 * v11);
      if ( !v9 )
        v9 = 4;
    }
    if ( v38 )
    {
LABEL_40:
      v26 = v9 == 5;
    }
    else
    {
      v26 = v9 == 5;
      if ( v9 < 5 )
      {
        while ( 1 )
        {
          v34 = *a5;
          if ( _bittest(&v34, v9) )
            break;
          if ( ++v9 >= 5 )
            goto LABEL_40;
        }
LABEL_42:
        if ( v9 )
        {
          v27 = 1 << v9;
LABEL_44:
          *a5 = v27;
          goto LABEL_18;
        }
LABEL_70:
        v9 = 0;
        LODWORD(v11) = 0;
        v27 = 0;
        goto LABEL_44;
      }
    }
    if ( v26 )
      goto LABEL_70;
    goto LABEL_42;
  }
  DeviceWake = AcpiGetIdleWakeInfo(a1, (unsigned int)v11, &v39);
  if ( DeviceWake == -1073741275 )
    DeviceWake = ACPISystemPowerGetDeviceWake(a1, &v39);
  if ( DeviceWake >= 0 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v45 = 4;
    v46 = 4;
    if ( v39 <= 5 )
    {
      v35 = si128.m128i_i32[v39];
      if ( v35 > 0 )
      {
        while ( 1 )
        {
          v36 = *a5;
          if ( _bittest(&v36, v35) )
            break;
          if ( --v35 <= 0 )
            goto LABEL_15;
        }
        v9 = v35;
      }
    }
  }
LABEL_15:
  v15 = (_DWORD)v11 == 0;
  if ( (int)v11 > 0 )
  {
    v28 = (signed int *)(a4 + 4LL * (int)v11);
    do
    {
      v29 = AcpiSupportedSystemStates;
      if ( _bittest(&v29, v11) )
      {
        v30 = *v28;
        if ( *v28 )
        {
          if ( v30 <= v9 )
            goto LABEL_18;
          v37 = *a5;
          if ( _bittest(&v37, v30) )
          {
            v9 = *v28;
            goto LABEL_18;
          }
        }
      }
      LODWORD(v11) = v11 - 1;
      --v28;
    }
    while ( (int)v11 > 0 );
    v15 = (_DWORD)v11 == 0;
  }
  if ( v15 )
  {
    v9 = 0;
    *a5 = 0;
  }
LABEL_18:
  if ( v41 )
    *v41 = v11;
  if ( v42 )
    *v42 = v9;
  if ( v43 )
    *v43 = v9;
  return 0LL;
}
