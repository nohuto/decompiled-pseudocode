/*
 * XREFs of ApplyPathsModality @ 0x1C001851C
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0014230 (DrvSetDisplayConfig.c)
 * Callees:
 *     ApplyPathModalityToCdsRegistryStore @ 0x1C001A35C (ApplyPathModalityToCdsRegistryStore.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C001B11C (DrvNotifyModeChangeStartStop.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001B5AC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00BD990 (GreIncrementDisplaySettingsUniqueness.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplyPathsModality(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6,
        _QWORD *a7,
        int *a8,
        _DWORD *a9,
        __int64 a10)
{
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // rsi
  __int64 DxgkWin32kInterface; // rax
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // ebx
  unsigned int v24; // ebp
  __int64 v25; // rdx
  unsigned int v26; // r8d
  int v27; // eax
  __int64 v28; // rdx
  _DWORD *v29; // rcx
  unsigned int v30; // ebx
  __int64 v31; // rax
  __int64 v33; // r10
  __int64 v34; // r9
  __int64 v35; // rax
  unsigned int v36; // r9d
  __int64 v37; // rcx
  unsigned int v38; // edx
  __int64 v39; // r8

  *a6 = 0;
  v14 = ApplyPathModalityToCdsRegistryStore();
  if ( v14 < 0 )
  {
    *a8 = v14;
    *a9 = 50;
    return 0xFFFFFFFFLL;
  }
  else
  {
    LOBYTE(v15) = 1;
    DrvNotifyModeChangeStartStop(v15);
    v18 = (__int64 *)(a1 + 48);
    if ( *(_DWORD *)(a1 + 40) || *v18 )
      WdLogSingleEntry0(1LL);
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v17, v16);
    v20 = a2;
    LODWORD(v20) = a2 | 0x20000;
    v21 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(DxgkWin32kInterface + 160))(v20, a1, a10);
    if ( v21 < 0 )
    {
      v30 = -1;
      *a6 = 1;
      *a8 = v21;
      *a9 = 51;
    }
    else
    {
      v22 = *(_DWORD *)(a1 + 40);
      if ( !v22 || !*v18 )
      {
        WdLogSingleEntry0(1LL);
        v22 = *(_DWORD *)(a1 + 40);
      }
      v23 = (a2 & 0x400000) != 0;
      v24 = 0;
      if ( v22 )
      {
        v25 = *v18;
        do
        {
          v26 = v22;
          if ( (v23 & 1) != 0 )
          {
            v33 = 340LL * v24;
            v34 = *(unsigned int *)(v33 + v25 + 88);
            v35 = *(unsigned int *)(v33 + v25 + 120);
            if ( (_DWORD)v34 != (_DWORD)v35 )
            {
              WdLogSingleEntry4(4LL, *(int *)(v33 + v25 + 4), *(unsigned int *)(v33 + v25), v34, v35);
              v26 = *(_DWORD *)(a1 + 40);
              v23 &= ~1u;
            }
          }
          v25 = *v18;
          v22 = v26;
          if ( *(_BYTE *)(340LL * v24 + *v18 + 76) )
            a3 = 1;
          ++v24;
        }
        while ( v24 < v26 );
      }
      v27 = DrvChangeDisplaySettingsInternal(0LL, 0LL, a1, a4, 0, 1, a5, a7, 0, 1, a3, 1, v23);
      v30 = v27;
      if ( v27 < 0 )
      {
        *a6 = 1;
        *a8 = -1073741823;
        v29 = a9;
        *a9 = 16;
      }
      else if ( v27 == 1 )
      {
        v30 = -1;
        *a8 = -1073741823;
        *a9 = 52;
      }
      v31 = DxDdGetDxgkWin32kInterface(v29, v28);
      (*(void (__fastcall **)(__int64))(v31 + 168))(a1);
      if ( v30 == 2 )
      {
        v36 = *(_DWORD *)(a1 + 40);
        if ( v36 )
        {
          v37 = *v18;
          if ( *v18 )
          {
            v38 = 0;
            while ( 1 )
            {
              v39 = 340LL * v38;
              if ( *(_DWORD *)(v39 + v37 + 88)
                || *(_DWORD *)(v39 + v37 + 92)
                || *(_DWORD *)(v39 + v37 + 124)
                || *(_DWORD *)(v39 + v37 + 132) )
              {
                break;
              }
              if ( ++v38 >= v36 )
                goto LABEL_17;
            }
            v30 = 0;
            *a7 = a5;
            GreIncrementDisplaySettingsUniqueness();
          }
        }
      }
    }
LABEL_17:
    DrvNotifyModeChangeStartStop(0LL);
    return v30;
  }
}
