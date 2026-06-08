/*
 * XREFs of RegisterSubspace @ 0x1C0026594
 * Callers:
 *     InitAcpiCpc @ 0x1C0024C48 (InitAcpiCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004990 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0005D08 (WPP_RECORDER_SF_DD.c)
 *     AddSubspace @ 0x1C0005E30 (AddSubspace.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 *     FindSubspace @ 0x1C0026508 (FindSubspace.c)
 */

__int64 __fastcall RegisterSubspace(__int64 a1, int a2, _QWORD *a3)
{
  _DWORD *Subspace; // rbx
  __int64 Pool2; // rax
  int v8; // edi
  __int64 v9; // rax
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]

  Subspace = (_DWORD *)FindSubspace(a2);
  if ( Subspace )
    goto LABEL_14;
  Pool2 = ExAllocatePool2(64LL, 184LL, 1919119952LL);
  Subspace = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 48) = a2;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _DWORD *, __int16, __int16, _QWORD))(WdfFunctions_01015 + 1048))(
           WdfDriverGlobals,
           v9,
           &GUID_PCC_INTERFACE_STANDARD,
           Subspace + 4,
           128,
           1,
           0LL);
    if ( v8 < 0 )
    {
LABEL_9:
      ExFreePoolWithTag(Subspace, (ULONG)1919119952);
      return (unsigned int)v8;
    }
    if ( (unsigned int)(Subspace[21] - 1) <= 0x26 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v12) = 40;
        LODWORD(v11) = Subspace[21];
        WPP_RECORDER_SF_DD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          1u,
          0xAu,
          (__int64)&WPP_7cab4d9c26fa3e8ad6ad775de533e8a5_Traceguids,
          v11,
          v12);
      }
      v8 = -1073741823;
      goto LABEL_9;
    }
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _DWORD *))(WdfFunctions_01015 + 2520))(
           WdfDriverGlobals,
           0LL,
           Subspace + 38);
    if ( v8 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v11) = v8;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          4u,
          0xBu,
          (__int64)&WPP_7cab4d9c26fa3e8ad6ad775de533e8a5_Traceguids,
          v11);
      }
      goto LABEL_9;
    }
    AddSubspace(Subspace);
LABEL_14:
    v8 = 0;
    *a3 = Subspace;
    return (unsigned int)v8;
  }
  return (unsigned int)-1073741670;
}
