/*
 * XREFs of sub_140428980 @ 0x140428980
 * Callers:
 *     sub_140428220 @ 0x140428220 (sub_140428220.c)
 * Callees:
 *     sub_140222E70 @ 0x140222E70 (sub_140222E70.c)
 *     sub_1402B9660 @ 0x1402B9660 (sub_1402B9660.c)
 *     sub_140569E70 @ 0x140569E70 (sub_140569E70.c)
 */

char __fastcall sub_140428980(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  int v9; // ecx
  char result; // al

  if ( dword_140D06B08 )
  {
    CurrentIrql = sub_140569E70(14LL);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xEuLL);
  }
  *(_BYTE *)(v3 - 87) = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( ++*((_BYTE *)CurrentPrcb + 32) == 1 )
  {
    a3 = *((_QWORD *)CurrentPrcb + 1);
    v6 = __rdtsc() - *((_QWORD *)CurrentPrcb + 4144);
    *(_QWORD *)(a3 + 72) += v6;
    v7 = *(unsigned int *)(a3 + 80);
    *((_QWORD *)CurrentPrcb + 4144) += v6;
    v8 = v6 + v7;
    v9 = v8;
    if ( HIDWORD(v8) )
      v9 = -1;
    *(_DWORD *)(a3 + 80) = v9;
    if ( (*(_BYTE *)(a3 + 2) & 0xBE) != 0 )
      sub_1402B9660((__int64)KeGetCurrentPrcb(), a3, v6);
  }
  _enable();
  result = sub_140222E70(0LL, 0LL, a3);
  _disable();
  return result;
}
