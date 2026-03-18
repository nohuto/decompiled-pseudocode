/*
 * XREFs of ACPIBuildMissingChildren @ 0x1C004A3DC
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C0006A34 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0006CE8 (ACPIDetectPdoDevices.c)
 * Callees:
 *     OSNotifyCreateProcessor @ 0x1C0005604 (OSNotifyCreateProcessor.c)
 *     OSNotifyCreateDevice @ 0x1C0009C54 (OSNotifyCreateDevice.c)
 *     OSNotifyCreateOperationRegion @ 0x1C000A0B4 (OSNotifyCreateOperationRegion.c)
 *     AMLIIterateSiblingsNext @ 0x1C001BA54 (AMLIIterateSiblingsNext.c)
 *     AMLIGetFirstChild @ 0x1C002BFAC (AMLIGetFirstChild.c)
 *     OSNotifyCreateThermalZone @ 0x1C002D154 (OSNotifyCreateThermalZone.c)
 *     WPP_RECORDER_SF_DD @ 0x1C004B644 (WPP_RECORDER_SF_DD.c)
 */

__int64 __fastcall ACPIBuildMissingChildren(__int64 a1)
{
  volatile signed __int32 *i; // rax
  __int64 v2; // rax
  int Device; // eax
  int v4; // edx
  volatile signed __int32 *v5; // rbx

  if ( !_bittest64((const signed __int64 *)(a1 + 8), 0x33u) )
  {
    for ( i = AMLIGetFirstChild(*(_QWORD **)(a1 + 760)); ; i = (volatile signed __int32 *)AMLIIterateSiblingsNext(v5) )
    {
      v5 = i;
      if ( !i )
        return 0LL;
      v2 = *(_QWORD *)i;
      if ( !*(_QWORD *)(*(_QWORD *)v5 + 104LL) )
      {
        switch ( *(_WORD *)(v2 + 66) )
        {
          case 6:
            Device = OSNotifyCreateDevice((ULONG_PTR)v5, 0x20000000000uLL);
            break;
          case 0xA:
            Device = OSNotifyCreateOperationRegion((__int64)v5);
            break;
          case 0xC:
            Device = OSNotifyCreateProcessor((__int64)v5, 0x20000000000uLL);
            break;
          case 0xD:
            Device = OSNotifyCreateThermalZone((__int64)v5, 0x20000000000uLL);
            break;
          default:
            continue;
        }
        if ( Device < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v4) = 2;
          WPP_RECORDER_SF_DD(
            WPP_GLOBAL_Control->DeviceExtension,
            v4,
            22,
            24,
            (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
            Device,
            (char)v5);
        }
      }
    }
  }
  return 0LL;
}
