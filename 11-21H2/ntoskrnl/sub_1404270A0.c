/*
 * XREFs of sub_1404270A0 @ 0x1404270A0
 * Callers:
 *     sub_140426820 @ 0x140426820 (sub_140426820.c)
 * Callees:
 *     sub_140223A20 @ 0x140223A20 (sub_140223A20.c)
 *     sub_14024B080 @ 0x14024B080 (sub_14024B080.c)
 *     sub_1402B9660 @ 0x1402B9660 (sub_1402B9660.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140459B00 @ 0x140459B00 (sub_140459B00.c)
 *     sub_14045B8A0 @ 0x14045B8A0 (sub_14045B8A0.c)
 *     sub_140460150 @ 0x140460150 (sub_140460150.c)
 *     sub_140569E70 @ 0x140569E70 (sub_140569E70.c)
 */

__int64 __fastcall sub_1404270A0()
{
  __int64 v0; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v3; // rax
  int v4; // r11d
  _DWORD *v5; // r10
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  int v10; // ecx
  bool v11; // zf
  __int64 v12; // rdx
  __int64 result; // rax
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( dword_140D06B08 )
  {
    CurrentIrql = sub_140569E70(3LL);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(3uLL);
  }
  *(_BYTE *)(v0 - 87) = CurrentIrql;
  *(_DWORD *)(v0 - 96) = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( ++*((_BYTE *)CurrentPrcb + 32) == 1 )
  {
    v3 = __rdtsc();
    v4 = *((_DWORD *)CurrentPrcb + 8824);
    v5 = (_DWORD *)((char *)CurrentPrcb + 4 * ((unsigned __int16)(v4 & 0x7FF) >> 5) + 35300);
    *v5 = v3 ^ __ROR4__(*v5, 5);
    *((_DWORD *)CurrentPrcb + 8824) = ++v4;
    if ( (v4 & 0x3FF) == 0 )
      *(_DWORD *)(v0 - 96) = 1;
    v6 = *((_QWORD *)CurrentPrcb + 1);
    v7 = v3 - *((_QWORD *)CurrentPrcb + 4144);
    *(_QWORD *)(v6 + 72) += v7;
    v8 = *(unsigned int *)(v6 + 80);
    *((_QWORD *)CurrentPrcb + 4144) += v7;
    v9 = v7 + v8;
    v10 = v9;
    if ( HIDWORD(v9) )
      v10 = -1;
    *(_DWORD *)(v6 + 80) = v10;
    if ( (*(_BYTE *)(v6 + 2) & 0xBE) != 0 )
      sub_1402B9660((__int64)KeGetCurrentPrcb(), v6, v7);
  }
  _enable();
  if ( *(_DWORD *)(v0 - 96) )
    sub_14024B080((__int64)KeGetCurrentPrcb());
  v11 = (WORD2(xmmword_140D06900) & 0x4000) == 0;
  *(_BYTE *)(v0 + 243) = (WORD2(xmmword_140D06900) & 0x4000) != 0;
  if ( !v11 )
    sub_140223A20((unsigned __int64)v14, 0x20004000uLL);
  sub_14045B8A0();
  sub_140459B00();
  result = sub_14042A5E0(*(unsigned int *)(v0 + 224), v12);
  if ( *(_BYTE *)(v0 + 243) )
    result = sub_140460150(sub_1404257E0, (unsigned int)(((*(_DWORD *)(v0 + 224) + 48) << 8) + 1), v14);
  _disable();
  return result;
}
