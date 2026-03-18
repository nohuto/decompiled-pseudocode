/*
 * XREFs of ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C000BF30
 * Callers:
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C000BF30 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPISystemPowerProcessRootMapping @ 0x1C00A13D0 (ACPISystemPowerProcessRootMapping.c)
 * Callees:
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C000BF30 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPIExtListEnumNext @ 0x1C000C1AC (ACPIExtListEnumNext.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_DDqss @ 0x1C002D5D0 (WPP_RECORDER_SF_DDqss.c)
 *     WPP_RECORDER_SF_DDDDqss @ 0x1C0060130 (WPP_RECORDER_SF_DDDDqss.c)
 *     ACPISystemPowerGetSxD @ 0x1C0094BF8 (ACPISystemPowerGetSxD.c)
 */

__int64 __fastcall ACPISystemPowerDetermineSupportedDeviceStates(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 *v3; // rsi
  __int64 **v4; // r14
  __int64 v5; // r12
  int v6; // ebx
  int v9; // edi
  KIRQL v10; // al
  __int64 *v11; // rcx
  __int64 v12; // rax
  volatile signed __int32 *v13; // rdx
  int SxD; // eax
  int v16; // ebx
  int v17; // ecx
  int v18; // edx
  __int64 *i; // r8
  int v20; // eax
  __int64 v21; // rax
  char v22; // cl
  void *v23; // r10
  void *v24; // r8
  int v25; // edx
  __int64 v26; // rax
  int v27; // edx
  void *v28; // r8
  void *v29; // rcx
  __int64 v30; // rax
  void *v31; // r10
  void *v32; // r8
  int v33; // r9d
  __int64 v34; // rcx
  int v35; // [rsp+20h] [rbp-59h]
  char v36; // [rsp+30h] [rbp-49h]
  char v37; // [rsp+38h] [rbp-41h]
  _QWORD v38[2]; // [rsp+68h] [rbp-11h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+78h] [rbp-1h]
  KIRQL v40; // [rsp+80h] [rbp+7h]
  int v41; // [rsp+81h] [rbp+8h]
  __int16 v42; // [rsp+85h] [rbp+Ch]
  char v43; // [rsp+87h] [rbp+Eh]
  volatile signed __int32 *v44; // [rsp+88h] [rbp+Fh]
  __int64 v45; // [rsp+90h] [rbp+17h]
  __int64 v46; // [rsp+98h] [rbp+1Fh]
  KIRQL v47; // [rsp+E0h] [rbp+67h]
  int v48; // [rsp+F8h] [rbp+7Fh] BYREF

  v3 = 0LL;
  v46 = 1LL;
  v4 = (__int64 **)(a1 + 800);
  v48 = 0;
  v41 = 0;
  v5 = 816LL;
  v42 = 0;
  v6 = 1;
  v43 = 0;
  v38[0] = a1 + 800;
  SpinLock = &AcpiDeviceTreeLock;
  v9 = 0;
  v45 = 816LL;
  v10 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v11 = *v4;
  v40 = v10;
  v12 = *v11;
  v13 = (volatile signed __int32 *)(v11 - 102);
  v44 = (volatile signed __int32 *)(v11 - 102);
  if ( v11 != (__int64 *)v4 )
    v3 = v11 - 102;
  v38[1] = v12;
  while ( (__int64 **)((char *)v13 + v5) != v4 && v9 >= 0 )
  {
    if ( v6 == 1 )
    {
      if ( *((_DWORD *)v13 + 183) )
        _InterlockedIncrement(v13 + 183);
      KeReleaseSpinLock(SpinLock, v40);
    }
    v9 = ACPISystemPowerDetermineSupportedDeviceStates(v3, a2, a3);
    if ( v9 >= 0 )
    {
      SxD = ACPISystemPowerGetSxD(v3, a2, &v48);
      v9 = SxD;
      if ( SxD >= 0 )
      {
        v22 = v48;
        v23 = &unk_1C006FB8B;
        v24 = &unk_1C006FB8B;
        v25 = 0;
        *a3 |= 1 << v48;
        if ( v3 )
        {
          v26 = v3[1];
          v25 = (int)v3;
          if ( (v26 & 0x200000000000LL) != 0 )
          {
            v23 = (void *)v3[76];
            if ( (v26 & 0x400000000000LL) != 0 )
              v24 = (void *)v3[77];
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v37 = v25;
          LOBYTE(v25) = 4;
          WPP_RECORDER_SF_DDqss(
            WPP_GLOBAL_Control->DeviceExtension,
            v25,
            15,
            10,
            (__int64)&WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
            a2 - 1,
            v22 - 1,
            v37,
            (__int64)v23,
            (__int64)v24);
        }
      }
      else if ( SxD == -1073741772 )
      {
        v9 = 0;
        v16 = 1;
        v47 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
        v17 = 1;
        do
        {
          v18 = 7;
          if ( v17 != 4 )
          {
            for ( i = (__int64 *)v3[v17 + 51]; i; i = (__int64 *)*i )
            {
              if ( *((_DWORD *)i + 4) < v18 )
                v18 = *((_DWORD *)i + 4);
            }
          }
          v20 = 0;
          if ( v18 != 7 )
            v20 = v18;
          if ( v20 >= (int)a2 )
          {
            v31 = &unk_1C006FB8B;
            v32 = &unk_1C006FB8B;
            v33 = 0;
            *a3 |= 1 << v16;
            if ( v3 )
            {
              v34 = v3[1];
              v33 = (int)v3;
              if ( (v34 & 0x200000000000LL) != 0 )
              {
                v31 = (void *)v3[76];
                if ( (v34 & 0x400000000000LL) != 0 )
                  v32 = (void *)v3[77];
              }
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_DDDDqss(
                WPP_GLOBAL_Control->DeviceExtension,
                v16 - 1,
                (_DWORD)v32,
                v33,
                v35,
                v16 - 1,
                v20 - 1,
                a2 - 1,
                v16 - 1,
                v33,
                (__int64)v31,
                (__int64)v32);
          }
          v17 = ++v16;
        }
        while ( v16 <= 3 );
        v48 = v16;
        KeReleaseSpinLock(&AcpiPowerLock, v47);
      }
      else
      {
        v27 = 0;
        v28 = &unk_1C006FB8B;
        v29 = &unk_1C006FB8B;
        if ( v3 )
        {
          v30 = v3[1];
          v27 = (int)v3;
          if ( (v30 & 0x200000000000LL) != 0 )
          {
            v28 = (void *)v3[76];
            if ( (v30 & 0x400000000000LL) != 0 )
              v29 = (void *)v3[77];
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v36 = v27;
          LOBYTE(v27) = 2;
          WPP_RECORDER_SF_Lqss(
            WPP_GLOBAL_Control->DeviceExtension,
            v27,
            15,
            11,
            (__int64)&WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
            v9,
            v36,
            (__int64)v28,
            (__int64)v29);
        }
      }
    }
    v21 = ACPIExtListEnumNext(v38);
    v13 = v44;
    v3 = (__int64 *)v21;
    v6 = v46;
    v5 = v45;
    v4 = (__int64 **)v38[0];
  }
  if ( v6 )
    KeReleaseSpinLock(SpinLock, v40);
  return 0LL;
}
