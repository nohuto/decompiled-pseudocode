/*
 * XREFs of sub_1405033CC @ 0x1405033CC
 * Callers:
 *     HalReturnToFirmware @ 0x14050A7E0 (HalReturnToFirmware.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405033CC(__int64 a1, __int64 a2)
{
  ULONG_PTR i; // rbx
  __int64 result; // rax

  for ( i = qword_140C4E4E0; (ULONG_PTR *)i != &qword_140C4E4E0; i = *(_QWORD *)i )
  {
    result = *(unsigned int *)(i + 184);
    if ( (result & 2) != 0 )
    {
      result = *(_QWORD *)(i + 136);
      if ( result )
        result = sub_14042A5E0(*(_QWORD *)(i + 72), a2);
    }
  }
  return result;
}
