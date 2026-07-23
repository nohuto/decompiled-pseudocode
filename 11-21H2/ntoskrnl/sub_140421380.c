/*
 * XREFs of sub_140421380 @ 0x140421380
 * Callers:
 *     sub_140421A20 @ 0x140421A20 (sub_140421A20.c)
 *     sub_1404222A0 @ 0x1404222A0 (sub_1404222A0.c)
 * Callees:
 *     sub_140223A20 @ 0x140223A20 (sub_140223A20.c)
 *     sub_140223B10 @ 0x140223B10 (sub_140223B10.c)
 *     sub_14024B080 @ 0x14024B080 (sub_14024B080.c)
 *     sub_140294110 @ 0x140294110 (sub_140294110.c)
 *     sub_1402B9660 @ 0x1402B9660 (sub_1402B9660.c)
 *     sub_140569E70 @ 0x140569E70 (sub_140569E70.c)
 */

unsigned __int8 __fastcall sub_140421380()
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
  bool v13; // zf
  unsigned __int8 result; // al
  int v15; // edx
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF

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
  v13 = (WORD2(xmmword_140D06900) & 0x4000) == 0;
  *(_BYTE *)(v0 + 243) = (WORD2(xmmword_140D06900) & 0x4000) != 0;
  if ( !v13 )
    sub_140223A20((unsigned __int64)v16, 0x20004000uLL);
  result = sub_140294110(v1, 0);
  if ( *(_BYTE *)(v0 + 243) )
  {
    v15 = result;
    BYTE1(v15) = *(_BYTE *)(v1 + 88);
    result = sub_140223B10(v1, v15, (__int64)v16);
  }
  _disable();
  return result;
}
