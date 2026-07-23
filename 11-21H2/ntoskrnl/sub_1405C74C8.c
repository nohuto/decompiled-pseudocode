/*
 * XREFs of sub_1405C74C8 @ 0x1405C74C8
 * Callers:
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 * Callees:
 *     sub_1405C85B0 @ 0x1405C85B0 (sub_1405C85B0.c)
 */

char __fastcall sub_1405C74C8(volatile signed __int32 *a1, bool *a2)
{
  unsigned __int32 v2; // r8d
  char v3; // bl
  signed __int32 v6; // eax
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h]

  v2 = *a1;
  v9 = 0LL;
  v3 = 0;
  BYTE12(v9) = 1;
  *(_QWORD *)&v9 = 0LL;
  v8[0] = 0LL;
  v8[1] = qword_140D06E20;
  *a2 = 0;
  while ( v2 )
  {
    if ( (v2 & 0x4000000) != 0 )
    {
      v6 = _InterlockedCompareExchange(
             a1,
             v2 & 0xFA000FFF | ((HIDWORD(KeGetPcr()[1].LockArray) & 0xFFF | 0x2000) << 12),
             v2);
      if ( v2 == v6 )
      {
        v3 = 1;
        *a2 = (v2 & 0xFFF) == HIDWORD(KeGetPcr()[1].LockArray);
        return v3;
      }
      v2 = v6;
    }
    else
    {
      if ( (v2 & 0x3000000) == 0x2000000 && ((v2 >> 12) & 0xFFF) == HIDWORD(KeGetPcr()[1].LockArray) )
      {
        v3 = 1;
        *a2 = 1;
        return v3;
      }
      sub_1405C85B0(v8);
      v2 = *a1;
    }
  }
  return v3;
}
