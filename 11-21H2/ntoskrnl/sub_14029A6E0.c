/*
 * XREFs of sub_14029A6E0 @ 0x14029A6E0
 * Callers:
 *     sub_1403C6D20 @ 0x1403C6D20 (sub_1403C6D20.c)
 * Callees:
 *     sub_140294574 @ 0x140294574 (sub_140294574.c)
 *     sub_140298AF8 @ 0x140298AF8 (sub_140298AF8.c)
 *     sub_14029A2A0 @ 0x14029A2A0 (sub_14029A2A0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14029A6E0(_QWORD *a1)
{
  ULONG_PTR v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // rcx
  _QWORD v7[8]; // [rsp+20h] [rbp-40h] BYREF

  do
  {
    v2 = (ULONG_PTR)(a1 - 27);
    a1 = (_QWORD *)*a1;
    memset(v7, 0, sizeof(v7));
    if ( (dword_140D06880 & 0x40) != 0 )
    {
      sub_140298AF8((_QWORD *)v2, v7, 1);
      do
        sub_14029A2A0(v2, v7);
      while ( sub_140298AF8((_QWORD *)v2, v7, 0) );
      if ( (*(_DWORD *)(v2 + 116) & 0x800000) != 0 )
      {
        v6 = *(_QWORD *)(v2 + 96);
        v7[4] &= v4;
        v7[5] &= v4;
        v7[6] &= v4;
        v7[7] &= v4;
        v7[0] = v6 + (unsigned int)dword_140D06A0C;
        v7[2] = v6;
        v7[3] = v7[0];
        v7[1] = v7[0] - 12288LL;
        sub_14029A2A0(v2, v7);
      }
    }
    _interlockedbittestandset((volatile signed __int32 *)(v2 + 120), 0x11u);
    result = sub_140294574(v2, v3, v4);
  }
  while ( a1 );
  return result;
}
