/*
 * XREFs of HUBMISC_StripSymbolicNamePrefix @ 0x1C0030B3C
 * Callers:
 *     HUBPDO_GetHubName @ 0x1C0014F9C (HUBPDO_GetHubName.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x1C0076BFC (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x1C00778A0 (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     WMI_AcquireHubName @ 0x1C0085ED8 (WMI_AcquireHubName.c)
 *     WMI_FireNotification @ 0x1C0086B48 (WMI_FireNotification.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall HUBMISC_StripSymbolicNamePrefix(unsigned __int16 *a1, _QWORD *a2)
{
  _WORD *result; // rax
  __int64 v3; // r8
  __int64 v4; // rcx

  result = (_WORD *)*((_QWORD *)a1 + 1);
  v3 = *a1;
  v4 = 0LL;
  if ( result )
  {
    if ( *result == 92 )
    {
      while ( 1 )
      {
        ++result;
        v3 -= 2LL;
        if ( !*result )
          break;
        if ( *result == 92 )
        {
          ++result;
          v3 -= 2LL;
          break;
        }
      }
    }
    v4 = v3;
  }
  *a2 = v4;
  return result;
}
