/*
 * XREFs of sub_1405B301C @ 0x1405B301C
 * Callers:
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     sub_14059CCB4 @ 0x14059CCB4 (sub_14059CCB4.c)
 * Callees:
 *     IoRaiseInformationalHardError @ 0x140557960 (IoRaiseInformationalHardError.c)
 */

char __fastcall sub_1405B301C(__int64 a1)
{
  int v1; // eax
  NTSTATUS v2; // ecx

  if ( *(_QWORD *)(a1 + 17496) != *(_QWORD *)(a1 + 16008) )
  {
    v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 16020));
    if ( v1 > 1 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 16020));
      return v1;
    }
    v2 = -1073741112;
LABEL_8:
    LOBYTE(v1) = IoRaiseInformationalHardError(v2, 0LL, 0LL);
    return v1;
  }
  v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 16016));
  if ( v1 <= 1 )
  {
    v2 = -1073741523;
    goto LABEL_8;
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 16016));
  return v1;
}
