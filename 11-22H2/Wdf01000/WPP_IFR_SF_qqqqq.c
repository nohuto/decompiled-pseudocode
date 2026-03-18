/*
 * XREFs of WPP_IFR_SF_qqqqq @ 0x1C00546D8
 * Callers:
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x1C005364C (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 *     ?Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@E@Z @ 0x1C00641C4 (-Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qqqqq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 flags,
        unsigned int id,
        unsigned __int16 traceGuid,
        const _GUID *_a1,
        const void *_a2,
        const void *_a3,
        const void *_a4,
        const void *_a5,
        const void *globals_0)
{
  int v13; // eax
  unsigned __int64 v14; // r11

  v13 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)id >> 16) + (((id - 1) >> 5) & 0x7FF));
  if ( _bittest(&v13, ((_BYTE)id - 1) & 0x1F) )
  {
    v14 = (unsigned __int64)id >> 16 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v14 + 1) >= 5u )
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v14),
        43LL,
        _a1,
        traceGuid,
        &_a2,
        8LL,
        &_a3,
        8LL,
        &_a4,
        8LL,
        &_a5,
        8LL,
        &globals_0,
        8LL,
        0LL);
  }
  FxIFR(globals, 5u, id, _a1, traceGuid, &_a2, 8LL, &_a3, 8LL, &_a4, 8LL, &_a5, 8LL, &globals_0, 8LL, 0LL);
}
