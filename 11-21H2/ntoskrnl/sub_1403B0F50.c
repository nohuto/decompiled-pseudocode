/*
 * XREFs of sub_1403B0F50 @ 0x1403B0F50
 * Callers:
 *     sub_1403AED64 @ 0x1403AED64 (sub_1403AED64.c)
 *     sub_140570AF0 @ 0x140570AF0 (sub_140570AF0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1403B0F50(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r8
  __int64 **v5; // r8
  __int64 **v6; // rcx

  v2 = a2;
  v3 = *((_QWORD *)KeGetCurrentPrcb() + (unsigned __int8)sub_14042A5E0(a1, a2) + 1664);
  if ( !v3 )
    return 2147483685LL;
  if ( *(__int64 (__fastcall **)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))(v3 + 80) == sub_140420C10 )
  {
    v5 = (__int64 **)(v3 + 8);
    v6 = v5;
    while ( ((_DWORD)v6[12] & 1) != 0 )
    {
      v6 = (__int64 **)*v6;
      if ( v6 == v5 )
        return sub_14042A5E0(v2, 0LL);
    }
  }
  else if ( (*(_DWORD *)(v3 + 104) & 1) != 0 )
  {
    return sub_14042A5E0(v2, 0LL);
  }
  return 296LL;
}
