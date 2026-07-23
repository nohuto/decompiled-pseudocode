/*
 * XREFs of sub_140827378 @ 0x140827378
 * Callers:
 *     sub_140827238 @ 0x140827238 (sub_140827238.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140827378(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 *v3; // r9
  unsigned int v4; // r11d
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = 0;
  v3 = &qword_1400090E0;
  v4 = 0;
  while ( 1 )
  {
    v6 = *(int *)v3;
    if ( (unsigned int)(v6 - 1) > 0xA )
      break;
    _InterlockedExchange64((volatile __int64 *)(a1 + 8 * v6 + 296), v3[1]);
    v7 = *(int *)v3;
    if ( (unsigned int)(v7 - 1) > 0xA )
      break;
    _InterlockedExchange64((volatile __int64 *)(a1 + 8 * v7 + 392), a2);
    ++v4;
    v3 += 2;
    if ( v4 >= 5 )
      return v2;
  }
  return (unsigned int)-1073741811;
}
