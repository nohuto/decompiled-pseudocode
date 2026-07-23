/*
 * XREFs of sub_1404214D0 @ 0x1404214D0
 * Callers:
 *     sub_140421E60 @ 0x140421E60 (sub_140421E60.c)
 * Callees:
 *     sub_14024B080 @ 0x14024B080 (sub_14024B080.c)
 *     sub_140294110 @ 0x140294110 (sub_140294110.c)
 *     sub_1402B9660 @ 0x1402B9660 (sub_1402B9660.c)
 *     sub_140569E70 @ 0x140569E70 (sub_140569E70.c)
 */

char __fastcall sub_1404214D0()
{
  __int64 v0; // rbp
  __int64 v1; // rsi
  unsigned __int64 v2; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v5; // rax
  int v6; // r11d
  _DWORD *v7; // r10
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  int v12; // ecx
  char result; // al

  v2 = *(unsigned __int8 *)(v1 + 93);
  if ( dword_140D06B08 )
  {
    CurrentIrql = sub_140569E70(v2);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v2);
  }
  *(_BYTE *)(v0 - 87) = CurrentIrql;
  *(_DWORD *)(v0 - 96) = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( ++*((_BYTE *)CurrentPrcb + 32) == 1 )
  {
    v5 = __rdtsc();
    v6 = *((_DWORD *)CurrentPrcb + 8824);
    v7 = (_DWORD *)((char *)CurrentPrcb + 4 * ((unsigned __int16)(v6 & 0x7FF) >> 5) + 35300);
    *v7 = v5 ^ __ROR4__(*v7, 5);
    *((_DWORD *)CurrentPrcb + 8824) = ++v6;
    if ( (v6 & 0x3FF) == 0 )
      *(_DWORD *)(v0 - 96) = 1;
    v8 = *((_QWORD *)CurrentPrcb + 1);
    v9 = v5 - *((_QWORD *)CurrentPrcb + 4144);
    *(_QWORD *)(v8 + 72) += v9;
    v10 = *(unsigned int *)(v8 + 80);
    *((_QWORD *)CurrentPrcb + 4144) += v9;
    v11 = v9 + v10;
    v12 = v11;
    if ( HIDWORD(v11) )
      v12 = -1;
    *(_DWORD *)(v8 + 80) = v12;
    if ( (*(_BYTE *)(v8 + 2) & 0xBE) != 0 )
      sub_1402B9660((__int64)KeGetCurrentPrcb(), v8, v9);
  }
  _enable();
  if ( *(_DWORD *)(v0 - 96) )
    sub_14024B080((__int64)KeGetCurrentPrcb());
  *(_QWORD *)(v1 + 136) = v0 - 128;
  result = sub_140294110(v1, 0);
  _disable();
  return result;
}
