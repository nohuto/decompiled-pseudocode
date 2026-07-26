/*
 * XREFs of ?ndisSetSystemPowerNotificationHandlers@@YAHPEAXPEAU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z @ 0x1C0082C18
 * Callers:
 *     NdisSetOptionalHandlers @ 0x1C0022190 (NdisSetOptionalHandlers.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall ndisSetSystemPowerNotificationHandlers(_BYTE *a1, struct _NDIS_DRIVER_OPTIONAL_HANDLERS *a2)
{
  __int64 v2; // rax

  if ( *a1 != 2 || a1[24] <= 6u && (a1[24] != 6 || a1[25] < 0x1Eu) )
    return 3221225659LL;
  if ( a2->Header.Revision != 1 )
    return 3221225485LL;
  if ( a2->Header.Size < 0x10u )
    return 3221225485LL;
  if ( a2[1] )
    return 3221225485LL;
  v2 = *(_QWORD *)&a2[2].Header.Type;
  if ( !v2 )
    return 3221225485LL;
  *((_QWORD *)a1 + 103) = v2;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0xAu,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      (char)a1,
      v2);
  return 0LL;
}
