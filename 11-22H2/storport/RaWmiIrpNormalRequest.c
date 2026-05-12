/*
 * XREFs of RaWmiIrpNormalRequest @ 0x1C00AAB20
 * Callers:
 *     RaWmiDispatchIrp @ 0x1C00A28B4 (RaWmiDispatchIrp.c)
 * Callees:
 *     RaWmiPassToMiniPort @ 0x1C00A2B7C (RaWmiPassToMiniPort.c)
 */

__int64 __fastcall RaWmiIrpNormalRequest(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rax
  int v6; // r9d
  unsigned int v7; // eax

  v3 = *(_QWORD *)(a1 + 64);
  v6 = -1073741823;
  if ( *(_DWORD *)v3 != 1094997074 )
  {
    if ( *(_DWORD *)v3 != 1431193940 )
      return (unsigned int)v6;
    v3 = *(_QWORD *)(v3 + 24);
  }
  if ( *(_BYTE *)(v3 + 491) )
  {
    v6 = RaWmiPassToMiniPort(a1, a2, a3);
    if ( v6 < 0 )
    {
      v7 = -1073741808;
      if ( v6 == -1073741632 )
        return (unsigned int)-1073741162;
      return v7;
    }
    else if ( (unsigned __int8)a2 <= 1u )
    {
      *(_QWORD *)(*(_QWORD *)(a3 + 24) + 16LL) = MEMORY[0xFFFFF78000000014];
    }
  }
  return (unsigned int)v6;
}
