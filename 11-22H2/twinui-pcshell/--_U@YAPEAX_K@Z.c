/*
 * XREFs of ??_U@YAPEAX_K@Z @ 0x1801C9334
 * Callers:
 *     ?IsPointerDeviceSupportedOnMonitor@CVirtualTouchpadExperienceManager@@CA_NPEAUHMONITOR__@@W4tagPOINTER_DEVICE_TYPE@@@Z @ 0x180453598 (-IsPointerDeviceSupportedOnMonitor@CVirtualTouchpadExperienceManager@@CA_NPEAUHMONITOR__@@W4tagP.c)
 *     ?GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z @ 0x180706530 (-GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z.c)
 *     ??$make_unique@$$BY0A@G$0A@@std@@YA?AV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@0@_K@Z @ 0x18070CCA4 (--$make_unique@$$BY0A@G$0A@@std@@YA-AV-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@std@@@0@_K.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__fastcall operator new[](size_t a1)
{
  return operator new(a1);
}
