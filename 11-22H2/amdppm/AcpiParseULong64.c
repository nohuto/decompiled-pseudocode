/*
 * XREFs of AcpiParseULong64 @ 0x1C002A1A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000262C (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C000C4C0 (memmove.c)
 */

__int64 __fastcall AcpiParseULong64(__int64 a1, _QWORD *a2, unsigned int a3)
{
  if ( a3 < 8 )
    return 3221225485LL;
  if ( *(_WORD *)(a1 + 2) <= 8u )
  {
    *a2 = 0LL;
    memmove(a2, (const void *)(a1 + 4), *(unsigned __int16 *)(a1 + 2));
    return 0LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x4Cu,
        (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
    return 3222536200LL;
  }
}
