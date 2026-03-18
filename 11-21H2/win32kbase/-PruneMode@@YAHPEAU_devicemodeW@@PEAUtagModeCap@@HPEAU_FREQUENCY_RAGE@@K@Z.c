/*
 * XREFs of ?PruneMode@@YAHPEAU_devicemodeW@@PEAUtagModeCap@@HPEAU_FREQUENCY_RAGE@@K@Z @ 0x1C0069408
 * Callers:
 *     ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C0069090 (-PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z.c)
 * Callees:
 *     ?compModeCap@@YAHPEAUtagModeCap@@0@Z @ 0x1C00695E8 (-compModeCap@@YAHPEAUtagModeCap@@0@Z.c)
 */

__int64 __fastcall PruneMode(
        struct _devicemodeW *a1,
        struct tagModeCap *a2,
        int a3,
        struct _FREQUENCY_RAGE *a4,
        signed int a5)
{
  unsigned int v5; // ebp
  DWORD dmDisplayFrequency; // r10d
  BOOL v7; // ebx
  __int64 v8; // rdi
  DWORD dmPelsHeight; // r8d
  unsigned int v12; // edx
  int v13; // ecx
  DWORD v14; // eax
  DWORD dmPelsWidth; // r8d
  __int64 v16; // r9
  _DWORD *v17; // rdx
  int v18; // r8d
  __int64 v19; // r9
  unsigned int v20; // r10d
  _DWORD v22[3]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v23; // [rsp+2Ch] [rbp-1Ch]
  int v24; // [rsp+34h] [rbp-14h]

  v5 = 0;
  dmDisplayFrequency = a1->dmDisplayFrequency;
  v7 = 0;
  v8 = a3;
  if ( (a1->dmFields & 0x80u) != 0 )
    v7 = ((a1->dmDisplayOrientation - 1) & 0xFFFFFFFD) == 0;
  if ( dmDisplayFrequency > 1 && a5 < 0 )
  {
    if ( dmDisplayFrequency < *(_DWORD *)a4 || dmDisplayFrequency > *((_DWORD *)a4 + 1) && dmDisplayFrequency > 0x3D )
      return 1LL;
    dmPelsHeight = a1->dmPelsHeight;
    v12 = dmDisplayFrequency * dmPelsHeight;
    if ( dmDisplayFrequency * dmPelsHeight < *((_DWORD *)a4 + 2) && dmDisplayFrequency < 0x3C )
      return 1LL;
    if ( v12 > *((_DWORD *)a4 + 3) && dmDisplayFrequency > 0x3D || v12 * a1->dmPelsWidth > *((_DWORD *)a4 + 5) )
      return 1LL;
    v13 = 107;
    if ( dmPelsHeight <= 0x258 )
      v13 = 105;
    v5 = v12 * v13 / 0x64;
  }
  if ( v7 )
  {
    v14 = a1->dmPelsHeight;
    dmPelsWidth = a1->dmPelsWidth;
  }
  else
  {
    v14 = a1->dmPelsWidth;
    dmPelsWidth = a1->dmPelsHeight;
  }
  v22[0] = v14;
  v22[1] = dmPelsWidth;
  v22[2] = dmDisplayFrequency;
  v23 = 0LL;
  v24 = 0;
  if ( !(_DWORD)v8 || (a5 & 0x40000000) == 0 || dmPelsWidth <= *((_DWORD *)a2 + 6 * v8 - 5) )
  {
    v16 = 0LL;
    if ( (int)v8 > 0 )
    {
      while ( 1 )
      {
        v18 = compModeCap((struct tagModeCap *)v22, (struct tagModeCap *)((char *)a2 + 24 * v16));
        if ( v18 <= 0 )
          break;
        if ( (int)v19 >= (int)v8 - 1 )
        {
          if ( (a5 & 0x40000000) != 0 )
            return 1LL;
          break;
        }
        v16 = (unsigned int)(v19 + 1);
        if ( (int)v16 >= (int)v8 )
          return 1LL;
      }
      if ( v20 <= 1 || a5 >= 0 )
        return 0LL;
      if ( v18 && (_DWORD)v19 )
        v17 = (_DWORD *)((char *)a2 + 24 * v19 - 24);
      if ( (v20 <= v17[2] || v20 <= 0x3D || v18 && !(_DWORD)v19)
        && v20 >= v17[3]
        && (v5 >= v17[4] || v20 >= 0x3C)
        && (v5 <= v17[5] || v20 <= 0x3D) )
      {
        return 0LL;
      }
    }
  }
  return 1LL;
}
