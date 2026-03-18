/*
 * XREFs of WPP_IFR_SF_sq @ 0x1C0021984
 * Callers:
 *     ?GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@@PEAPEAU1@PEAPEAVFxDevice@@@Z @ 0x1C00031D0 (-GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@.c)
 *     imp_WdfObjectGetTypedContextWorker @ 0x1C0008880 (imp_WdfObjectGetTypedContextWorker.c)
 *     ?FxObjectGetTypedContext@@YAPEAXPEAVFxObject@@PEBU_WDF_OBJECT_CONTEXT_TYPE_INFO@@@Z @ 0x1C0043504 (-FxObjectGetTypedContext@@YAPEAXPEAVFxObject@@PEBU_WDF_OBJECT_CONTEXT_TYPE_INFO@@@Z.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00B84EC (VfWdfObjectGetTypedContext.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_sq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int flags,
        unsigned __int16 id,
        const _GUID *traceGuid,
        const char *_a1,
        const void *_a2)
{
  const char *v7; // rbx
  __int64 v8; // rdi
  unsigned __int64 v11; // rsi
  int v14; // eax
  unsigned __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rcx
  const char *v18; // rax
  __int64 v19; // rdi

  v7 = _a1;
  v8 = -1LL;
  v11 = (unsigned __int64)flags >> 16;
  v14 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * v11 + (((flags - 1) >> 5) & 0x7FF));
  if ( _bittest(&v14, (flags - 1) & 0x1F) )
  {
    v15 = v11 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v15 + 1) >= level )
    {
      if ( _a1 )
      {
        v16 = -1LL;
        do
          ++v16;
        while ( _a1[v16] );
        v17 = v16 + 1;
      }
      else
      {
        v17 = 5LL;
      }
      v18 = _a1;
      if ( !_a1 )
        v18 = "NULL";
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v15),
        0x2Bu,
        traceGuid,
        id,
        v18,
        v17,
        &_a2,
        8LL,
        0LL);
    }
  }
  if ( _a1 )
  {
    do
      ++v8;
    while ( _a1[v8] );
    v19 = v8 + 1;
  }
  else
  {
    v19 = 5LL;
  }
  if ( !_a1 )
    v7 = "NULL";
  FxIFR(globals, level, flags, traceGuid, id, v7, v19, &_a2, 8LL, 0LL);
}
