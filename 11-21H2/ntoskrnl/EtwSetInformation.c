/*
 * XREFs of EtwSetInformation @ 0x1406DEBF0
 * Callers:
 *     sub_1403B6E4C @ 0x1403B6E4C (sub_1403B6E4C.c)
 *     sub_1403B7244 @ 0x1403B7244 (sub_1403B7244.c)
 *     sub_14054B7B4 @ 0x14054B7B4 (sub_14054B7B4.c)
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 *     sub_1406D2264 @ 0x1406D2264 (sub_1406D2264.c)
 *     sub_140B1BC34 @ 0x140B1BC34 (sub_140B1BC34.c)
 * Callees:
 *     sub_1406DEC48 @ 0x1406DEC48 (sub_1406DEC48.c)
 */

NTSTATUS __stdcall EtwSetInformation(
        REGHANDLE RegHandle,
        EVENT_INFO_CLASS InformationClass,
        PVOID EventInformation,
        ULONG InformationLength)
{
  NTSTATUS v4; // r10d
  __int32 v5; // edx

  v4 = 0;
  if ( RegHandle )
  {
    v5 = InformationClass - 2;
    if ( v5 )
    {
      if ( v5 != 1 )
        return -1073741808;
      if ( EventInformation && InformationLength == 1 )
      {
        if ( *(_BYTE *)EventInformation == 1 )
        {
          _InterlockedOr16((volatile signed __int16 *)(RegHandle + 98), 0x200u);
          return v4;
        }
        if ( !*(_BYTE *)EventInformation )
        {
          _InterlockedAnd16((volatile signed __int16 *)(RegHandle + 98), 0xFDFFu);
          return v4;
        }
      }
    }
    else if ( EventInformation && InformationLength - 3 <= 0x7FFC )
    {
      return sub_1406DEC48(RegHandle, EventInformation);
    }
    return -1073741811;
  }
  return -1073741816;
}
