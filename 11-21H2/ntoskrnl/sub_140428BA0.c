/*
 * XREFs of sub_140428BA0 @ 0x140428BA0
 * Callers:
 *     sub_140428B10 @ 0x140428B10 (sub_140428B10.c)
 * Callees:
 *     sub_1402B1050 @ 0x1402B1050 (sub_1402B1050.c)
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1402B9660 @ 0x1402B9660 (sub_1402B9660.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_14039D930 @ 0x14039D930 (sub_14039D930.c)
 *     sub_14039EA10 @ 0x14039EA10 (sub_14039EA10.c)
 *     sub_140428D90 @ 0x140428D90 (sub_140428D90.c)
 */

__int64 sub_140428BA0()
{
  struct _KPRCB *CurrentPrcb; // rbx
  ULONG_PTR v1; // rdi
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  int v4; // ecx
  __int64 v5; // r8
  unsigned int v6; // esi
  __int64 v7; // rsi

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = *((_QWORD *)CurrentPrcb + 1);
  _disable();
  ++*((_BYTE *)CurrentPrcb + 32);
  v2 = __rdtsc() - *((_QWORD *)CurrentPrcb + 4144);
  *(_QWORD *)(v1 + 72) += v2;
  *((_QWORD *)CurrentPrcb + 4144) += v2;
  v3 = (*((unsigned int *)CurrentPrcb + 8302) * v2) >> 16;
  v4 = v3 + *(_DWORD *)(v1 + 80);
  if ( (v3 + *(unsigned int *)(v1 + 80)) >> 32 )
    v4 = -1;
  *(_DWORD *)(v1 + 80) = v4;
  if ( (*(_BYTE *)(v1 + 2) & 0xBE) != 0 )
    sub_1402B9660((__int64)CurrentPrcb, v1, v3);
  _enable();
  sub_1402B4EC0(v1, 0);
  sub_1402B1050((__int64)CurrentPrcb, 1);
  if ( _interlockedbittestandset64((volatile signed __int32 *)CurrentPrcb + 12, 0LL) )
  {
    v6 = 0;
    do
    {
      if ( (++v6 & dword_140D0527C) == 0 && (dword_140D0689C & 0x40) != 0 && sub_14039EA10() )
        sub_14039D930(v6);
      _mm_pause();
    }
    while ( (*((_QWORD *)CurrentPrcb + 6) & 1LL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)CurrentPrcb + 12, 0LL) );
  }
  v7 = *((_QWORD *)CurrentPrcb + 2);
  *((_QWORD *)CurrentPrcb + 2) = 0LL;
  *((_QWORD *)CurrentPrcb + 1) = v7;
  *(_BYTE *)(v7 + 388) = 2;
  *(_BYTE *)(v1 + 643) = 31;
  sub_1402B9970((__int64)CurrentPrcb, v1, v5);
  if ( (_BYTE)dword_140D069F0 )
    __asm { stac }
  return sub_140428D90(1LL);
}
