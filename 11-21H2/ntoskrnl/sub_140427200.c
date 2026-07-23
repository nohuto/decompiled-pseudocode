/*
 * XREFs of sub_140427200 @ 0x140427200
 * Callers:
 *     sub_140426C70 @ 0x140426C70 (sub_140426C70.c)
 * Callees:
 *     sub_140223A20 @ 0x140223A20 (sub_140223A20.c)
 *     sub_14024B080 @ 0x14024B080 (sub_14024B080.c)
 *     sub_1402B9660 @ 0x1402B9660 (sub_1402B9660.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140460150 @ 0x140460150 (sub_140460150.c)
 *     sub_140569E70 @ 0x140569E70 (sub_140569E70.c)
 */

__int64 __fastcall sub_140427200(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbp
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
  bool v13; // zf
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(); // rsi
  __int64 result; // rax
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( dword_140D06B08 )
  {
    CurrentIrql = sub_140569E70(3LL);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(3uLL);
  }
  *(_BYTE *)(v2 - 87) = CurrentIrql;
  *(_DWORD *)(v2 - 96) = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( ++*((_BYTE *)CurrentPrcb + 32) == 1 )
  {
    v5 = __rdtsc();
    v6 = *((_DWORD *)CurrentPrcb + 8824);
    v7 = (_DWORD *)((char *)CurrentPrcb + 4 * ((unsigned __int16)(v6 & 0x7FF) >> 5) + 35300);
    *v7 = v5 ^ __ROR4__(*v7, 5);
    *((_DWORD *)CurrentPrcb + 8824) = ++v6;
    if ( (v6 & 0x3FF) == 0 )
      *(_DWORD *)(v2 - 96) = 1;
    v8 = *((_QWORD *)CurrentPrcb + 1);
    v9 = v5 - *((_QWORD *)CurrentPrcb + 4144);
    *(_QWORD *)(v8 + 72) += v9;
    v10 = *(unsigned int *)(v8 + 80);
    *((_QWORD *)CurrentPrcb + 4144) += v9;
    v11 = v9 + v10;
    v12 = v11;
    a2 = HIDWORD(v11);
    if ( a2 )
      v12 = -1;
    *(_DWORD *)(v8 + 80) = v12;
    if ( (*(_BYTE *)(v8 + 2) & 0xBE) != 0 )
      sub_1402B9660((__int64)KeGetCurrentPrcb(), v8, v9);
  }
  _enable();
  if ( *(_DWORD *)(v2 - 96) )
    sub_14024B080((__int64)KeGetCurrentPrcb());
  v13 = (WORD2(xmmword_140D06900) & 0x4000) == 0;
  *(_BYTE *)(v2 + 243) = (WORD2(xmmword_140D06900) & 0x4000) != 0;
  if ( !v13 )
    sub_140223A20((unsigned __int64)v17, 0x20004000uLL);
  v14 = *(unsigned int *)(v2 + 224);
  v15 = off_140D05510[v14];
  result = sub_14042A5E0(v14, a2);
  if ( *(_BYTE *)(v2 + 243) )
    result = sub_140460150(v15, (unsigned int)(((*(_DWORD *)(v2 + 224) + 48) << 8) + 1), v17);
  _disable();
  return result;
}
