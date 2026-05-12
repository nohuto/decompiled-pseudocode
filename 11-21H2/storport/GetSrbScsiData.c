/*
 * XREFs of GetSrbScsiData @ 0x1C001BAA4
 * Callers:
 *     RaUnitAtaPassThroughMarshalResults @ 0x1C0002208 (RaUnitAtaPassThroughMarshalResults.c)
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaidUnitHandleSpecialErrorConditions @ 0x1C000C1C0 (RaidUnitHandleSpecialErrorConditions.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C001B720 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidAdapterMapBuffers @ 0x1C00355B4 (RaidAdapterMapBuffers.c)
 *     RaUnitSmartReturnStatus @ 0x1C0052C4C (RaUnitSmartReturnStatus.c)
 *     RaidLogRequestComplete @ 0x1C0053EFC (RaidLogRequestComplete.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0054FE4 (RaidUnitProcessBusyRequest.c)
 *     StorUnitStartBypassIo @ 0x1C0056990 (StorUnitStartBypassIo.c)
 *     StorEtwIORequestDispatch @ 0x1C005AAEC (StorEtwIORequestDispatch.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x1C005AD24 (StorEtwIORequestServiceTimeEventData.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x1C005B01C (StorEtwLogoRequestServiceTimeEventData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSrbScsiData(__int64 a1, _BYTE *a2, _DWORD *a3, _BYTE *a4, _QWORD *a5, _BYTE *a6)
{
  __int64 v6; // r11
  char v7; // r15
  __int64 v10; // r14
  __int64 v11; // rcx
  unsigned __int64 v12; // rbp
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rcx

  v6 = 0LL;
  v7 = 0;
  if ( *(_BYTE *)(a1 + 2) != 40 || *(_DWORD *)(a1 + 20) )
  {
    if ( a2 )
      *a2 = 0;
    if ( a3 )
      *a3 = 0;
    if ( a4 )
      *a4 = 0;
    if ( a5 )
      *a5 = 0LL;
    if ( a6 )
      *a6 = 0;
    return v6;
  }
  v10 = 0LL;
  if ( !*(_DWORD *)(a1 + 56) )
    return v6;
  while ( 1 )
  {
    v11 = *(unsigned int *)(a1 + 4 * v10 + 120);
    if ( (unsigned int)v11 >= 0x80 )
    {
      v12 = *(unsigned int *)(a1 + 16);
      if ( (unsigned int)v11 <= (unsigned int)v12 )
        break;
    }
LABEL_44:
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= *(_DWORD *)(a1 + 56) )
      return v6;
  }
  v13 = (unsigned int)v11;
  v14 = *(_DWORD *)(v11 + a1) - 64;
  if ( !v14 )
  {
    if ( v13 + 40 <= v12 )
    {
      if ( a2 )
        *a2 = *(_BYTE *)(v13 + a1 + 10);
      v15 = v13 + a1 + 24;
      if ( !*(_BYTE *)(v13 + a1 + 10) )
        v15 = v6;
      v6 = v15;
      if ( a4 )
        *a4 = *(_BYTE *)(v13 + a1 + 8);
      if ( a5 )
      {
        v16 = *(_QWORD *)(v13 + a1 + 16);
LABEL_16:
        *a5 = v16;
        goto LABEL_17;
      }
      goto LABEL_17;
    }
    goto LABEL_20;
  }
  v18 = v14 - 1;
  if ( !v18 )
  {
    if ( v13 + 56 <= v12 )
    {
      v7 = 1;
      if ( a2 )
        *a2 = *(_BYTE *)(v13 + a1 + 10);
      v20 = v13 + a1 + 24;
      if ( !*(_BYTE *)(v13 + a1 + 10) )
        v20 = v6;
      v6 = v20;
      if ( a4 )
        *a4 = *(_BYTE *)(v13 + a1 + 8);
      if ( a5 )
        *a5 = *(_QWORD *)(v13 + a1 + 16);
      if ( !a6 )
        return v6;
      *a6 = *(_BYTE *)(v13 + a1 + 9);
    }
    goto LABEL_20;
  }
  if ( v18 != 1 || v13 + 40 > v12 )
  {
LABEL_20:
    if ( v7 )
      return v6;
    goto LABEL_44;
  }
  if ( a3 )
    *a3 = *(_DWORD *)(v13 + a1 + 12);
  v19 = v13 + a1 + 32;
  if ( !*(_DWORD *)(v13 + a1 + 12) )
    v19 = v6;
  v6 = v19;
  if ( a4 )
    *a4 = *(_BYTE *)(v13 + a1 + 8);
  if ( a5 )
  {
    v16 = *(_QWORD *)(v13 + a1 + 24);
    goto LABEL_16;
  }
LABEL_17:
  if ( a6 )
    *a6 = *(_BYTE *)(v13 + a1 + 9);
  return v6;
}
