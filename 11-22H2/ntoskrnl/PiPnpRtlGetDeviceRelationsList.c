/*
 * XREFs of PiPnpRtlGetDeviceRelationsList @ 0x140855B20
 * Callers:
 *     <none>
 * Callees:
 *     ZwPlugPlayControl @ 0x14041CE00 (ZwPlugPlayControl.c)
 */

__int64 __fastcall PiPnpRtlGetDeviceRelationsList(
        __int64 a1,
        __int128 *a2,
        int a3,
        __int64 a4,
        int a5,
        _DWORD *a6,
        int a7)
{
  __int128 v7; // xmm0
  NTSTATUS v8; // eax
  unsigned int v9; // ecx
  int v11; // eax
  __int128 PnPControlData; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+34h] [rbp-14h]
  __int64 v15; // [rsp+38h] [rbp-10h]

  if ( a2 && a6 && !a7 )
  {
    v7 = *a2;
    v13 = a3;
    PnPControlData = v7;
    v15 = a4;
    v14 = a5;
    v8 = ZwPlugPlayControl(PlugPlayControlQueryDeviceRelations, &PnPControlData, 0x20u);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v11 = v14;
      *a6 = v14;
      if ( v11 )
        return v9;
    }
    else if ( v8 == -1073741789 )
    {
      *a6 = v14;
      return v9;
    }
    return (unsigned int)-1073741772;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
}
