/*
 * XREFs of _CmSetDevicePanelMappedProperty @ 0x140A671A0
 * Callers:
 *     _PnpDispatchDevicePanel @ 0x14082A0B0 (_PnpDispatchDevicePanel.c)
 *     _CmDeleteDevicePanelWorker @ 0x140A665A0 (_CmDeleteDevicePanelWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmSetDevicePanelMappedProperty(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r10d
  __int64 **v6; // r8
  unsigned int v7; // edx
  __int64 *v8; // r9
  __int64 v9; // rcx

  v5 = -1073741802;
  if ( !a4 )
  {
    v6 = &off_14000B1C8;
    v7 = 0;
    while ( 1 )
    {
      v8 = *v6;
      if ( *(_DWORD *)(a5 + 16) == *((_DWORD *)*v6 + 4) )
      {
        v9 = *(_QWORD *)a5 - *v8;
        if ( *(_QWORD *)a5 == *v8 )
          v9 = *(_QWORD *)(a5 + 8) - v8[1];
        if ( !v9 )
          break;
      }
      ++v7;
      v6 += 2;
      if ( v7 >= 3 )
        return v5;
    }
    return (unsigned int)-1073741790;
  }
  return v5;
}
