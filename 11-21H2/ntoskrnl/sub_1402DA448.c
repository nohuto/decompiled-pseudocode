/*
 * XREFs of sub_1402DA448 @ 0x1402DA448
 * Callers:
 *     sub_14029B9A0 @ 0x14029B9A0 (sub_14029B9A0.c)
 *     sub_1402D9F70 @ 0x1402D9F70 (sub_1402D9F70.c)
 *     sub_1402DA0F0 @ 0x1402DA0F0 (sub_1402DA0F0.c)
 *     sub_1403B9594 @ 0x1403B9594 (sub_1403B9594.c)
 *     sub_140460FAC @ 0x140460FAC (sub_140460FAC.c)
 *     sub_140506BF4 @ 0x140506BF4 (sub_140506BF4.c)
 *     sub_140507820 @ 0x140507820 (sub_140507820.c)
 *     sub_14052EAA0 @ 0x14052EAA0 (sub_14052EAA0.c)
 *     sub_140615F20 @ 0x140615F20 (sub_140615F20.c)
 *     sub_140633B20 @ 0x140633B20 (sub_140633B20.c)
 *     sub_1406342C8 @ 0x1406342C8 (sub_1406342C8.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14056E8F8 @ 0x14056E8F8 (sub_14056E8F8.c)
 */

char __fastcall sub_1402DA448(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  char v3; // di
  __int64 v4; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax

  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
    return sub_14056E8F8(a1);
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  v4 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v4 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v6 = *(_DWORD *)(v4 + 24);
      *(_DWORD *)(v4 + 24) = v6 + 1;
      if ( v6 == -1 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  if ( !_interlockedbittestandset64(a1, 0LL) )
    return 1;
  v7 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v7 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v8 = *(_DWORD *)(v7 + 24) - 1;
      *(_DWORD *)(v7 + 24) = v8;
      if ( !v8 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  _mm_pause();
  return v3;
}
