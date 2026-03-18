/*
 * XREFs of HUBCONNECTOR_UnMapHubPorts @ 0x1C0082B58
 * Callers:
 *     HUBFDO_EvtDeviceReleaseHardware @ 0x1C0079370 (HUBFDO_EvtDeviceReleaseHardware.c)
 *     HUBCONNECTOR_MapHubPorts @ 0x1C0082A18 (HUBCONNECTOR_MapHubPorts.c)
 * Callees:
 *     HUBCONNECTOR_DeRegisterPort @ 0x1C008214C (HUBCONNECTOR_DeRegisterPort.c)
 */

void __fastcall HUBCONNECTOR_UnMapHubPorts(_WORD *a1)
{
  unsigned __int16 v1; // di
  _QWORD **i; // rbx
  _QWORD *j; // rax
  __int64 v5; // rcx
  unsigned __int16 k; // di
  _QWORD *m; // rax
  __int64 v8; // rcx

  v1 = a1[73];
  for ( i = (_QWORD **)(a1 + 1180); v1 <= a1[74]; ++v1 )
  {
    for ( j = *i; ; j = (_QWORD *)*j )
    {
      v5 = (__int64)(j - 31);
      if ( i == j )
        break;
      if ( *(_WORD *)(v5 + 200) == v1 )
      {
        if ( j != (_QWORD *)248 )
          HUBCONNECTOR_DeRegisterPort(v5);
        break;
      }
    }
  }
  for ( k = a1[76]; k <= a1[77]; ++k )
  {
    for ( m = *i; ; m = (_QWORD *)*m )
    {
      v8 = (__int64)(m - 31);
      if ( i == m )
        break;
      if ( *(_WORD *)(v8 + 200) == k )
      {
        if ( m != (_QWORD *)248 )
          HUBCONNECTOR_DeRegisterPort(v8);
        break;
      }
    }
  }
}
