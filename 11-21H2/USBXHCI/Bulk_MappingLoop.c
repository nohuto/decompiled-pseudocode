/*
 * XREFs of Bulk_MappingLoop @ 0x1C000E8C4
 * Callers:
 *     Bulk_MapTransfers @ 0x1C000E85C (Bulk_MapTransfers.c)
 * Callees:
 *     TR_AttemptStateChange @ 0x1C000A724 (TR_AttemptStateChange.c)
 *     Bulk_RetrieveNextStage @ 0x1C000E980 (Bulk_RetrieveNextStage.c)
 *     Bulk_MapStage @ 0x1C000F118 (Bulk_MapStage.c)
 *     Bulk_PrepareStage @ 0x1C000F538 (Bulk_PrepareStage.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013618 (WPP_RECORDER_SF_ddd.c)
 */

__int64 __fastcall Bulk_MappingLoop(__int64 a1)
{
  char i; // di
  __int64 result; // rax
  int v4; // edx

  for ( i = 0; ; ++i )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v4 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v4) = 5;
        WPP_RECORDER_SF_ddd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v4,
          14,
          36,
          (__int64)&WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          i);
      }
    }
    *(_DWORD *)(a1 + 340) = 0;
    if ( !(unsigned __int8)Bulk_RetrieveNextStage(a1) )
      break;
    result = Bulk_PrepareStage(a1);
    if ( (_DWORD)result != 1 )
    {
      if ( (_DWORD)result == 3 )
        return result;
      if ( (_DWORD)result == 4 )
        return TR_AttemptStateChange(a1, 3, 2);
      result = Bulk_MapStage(a1);
      if ( (_DWORD)result != 3 )
      {
        if ( (_DWORD)result == 2 )
          return result;
        if ( (_DWORD)result == 1 )
          return TR_AttemptStateChange(a1, 3, 2);
        result = TR_AttemptStateChange(a1, 3, 3);
        if ( (_DWORD)result != 3 )
          return result;
      }
    }
  }
  return TR_AttemptStateChange(a1, 3, 2);
}
