/*
 * XREFs of WPP_IFR_SF_qcDqd @ 0x1C0054868
 * Callers:
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00042E0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z @ 0x1C000EB40 (-Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qcDqd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 flags,
        unsigned int id,
        unsigned __int16 traceGuid,
        const _GUID *_a1,
        const void *_a2,
        char _a3,
        unsigned int _a4,
        const void *globals_0)
{
  int v12; // eax
  unsigned __int64 v13; // r11
  int _a5[4]; // [rsp+80h] [rbp-28h] BYREF

  _a5[0] = -1073741811;
  v12 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)id >> 16) + (((id - 1) >> 5) & 0x7FF));
  if ( _bittest(&v12, (id - 1) & 0x1F) )
  {
    v13 = (unsigned __int64)id >> 16 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v13 + 1) >= 2u )
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v13),
        43LL,
        _a1,
        traceGuid,
        &_a2,
        8LL,
        &_a3,
        1LL,
        &_a4,
        4LL,
        &globals_0,
        8LL,
        _a5,
        4LL,
        0LL);
  }
  FxIFR(globals, 2u, id, _a1, traceGuid, &_a2, 8LL, &_a3, 1LL, &_a4, 4LL, &globals_0, 8LL, _a5, 4LL, 0LL);
}
