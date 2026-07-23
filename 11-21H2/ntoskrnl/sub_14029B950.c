/*
 * XREFs of sub_14029B950 @ 0x14029B950
 * Callers:
 *     sub_14029B9A0 @ 0x14029B9A0 (sub_14029B9A0.c)
 * Callees:
 *     sub_14029AF90 @ 0x14029AF90 (sub_14029AF90.c)
 *     sub_14054EA40 @ 0x14054EA40 (sub_14054EA40.c)
 */

char __fastcall sub_14029B950(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v5; // rax
  __int64 v6; // r9
  _QWORD *v7; // r8
  unsigned __int64 v8; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  if ( *((_DWORD *)CurrentPrcb + 2914) != 5 )
    return 0;
  sub_14029AF90(a1, a2);
  if ( byte_140D01160 && a1 )
  {
    if ( *(_WORD *)(a1 + 368) != 16 )
    {
      *(_WORD *)(a1 + 368) = 16;
      *(_WORD *)(a1 + 392) = 24;
      *(_QWORD *)(a1 + 384) = *((_QWORD *)CurrentPrcb + 5);
    }
    *(_DWORD *)(a1 + 376) &= ~0x200u;
    v5 = __readmsr(0xC0000101);
    *(_QWORD *)(a1 + 104) = ((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5;
    *(_QWORD *)(a1 + 360) = sub_140569E60;
    if ( (_BYTE)byte_140E01841 )
      sub_14054EA40(3, *(_QWORD *)(a1 + 216), 0, 0, (__int64)sub_140569E60, 4);
    if ( byte_140E01840 )
    {
      v6 = 7LL;
      v7 = (_QWORD *)(*((_QWORD *)CurrentPrcb - 48) + 5168LL);
      do
      {
        v8 = __readcr3();
        v7[1] = v8;
        *v7 = __readmsr(0xC0000101);
        v7 += 64;
        --v6;
      }
      while ( v6 );
    }
  }
  return 1;
}
