/*
 * XREFs of sub_1403EABA8 @ 0x1403EABA8
 * Callers:
 *     sub_1403E9C2C @ 0x1403E9C2C (sub_1403E9C2C.c)
 *     sub_1403EA0E8 @ 0x1403EA0E8 (sub_1403EA0E8.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 */

__int64 __fastcall sub_1403EABA8(unsigned __int16 a1, __int64 a2)
{
  int v3; // r9d
  __int64 v4; // rax
  unsigned __int16 *v5; // r10
  int v6; // eax

  if ( !a2 )
  {
    _misaligned_access();
    return 0xFFFFLL;
  }
  if ( a1 == 0xFFFF )
    return 0xFFFFLL;
  v3 = *(_DWORD *)(a2 + 24);
  if ( (v3 & 1) == 0 && (v3 & 0x82) != 0x80 )
    return 0xFFFFLL;
  v4 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 < (unsigned __int64)(*(_QWORD *)(a2 + 16) + 2LL) )
  {
    if ( *(_DWORD *)(a2 + 8) || *(_DWORD *)(a2 + 36) < 2u )
      return 0xFFFFLL;
    v4 = *(_QWORD *)(a2 + 16) + 2LL;
  }
  v5 = (unsigned __int16 *)(v4 - 2);
  *(_QWORD *)a2 = v4 - 2;
  if ( (v3 & 0x40) != 0 )
  {
    if ( *v5 != a1 )
    {
      *(_QWORD *)a2 = v4;
      return 0xFFFFLL;
    }
  }
  else
  {
    *v5 = a1;
  }
  v6 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 8) += 2;
  *(_DWORD *)(a2 + 24) = v6 & 0xFFFFFFEE | 1;
  return a1;
}
