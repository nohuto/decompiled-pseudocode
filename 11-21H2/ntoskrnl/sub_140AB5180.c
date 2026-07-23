/*
 * XREFs of sub_140AB5180 @ 0x140AB5180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall sub_140AB5180(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  char v14; // [rsp-20h] [rbp-20h]
  unsigned __int64 retaddr; // [rsp+0h] [rbp+0h]

  if ( (v14 & 1) != 0 )
  {
    __asm { swapgs }
    _mm_lfence();
  }
  else
  {
    __readmsr(0xC0000101);
    __writemsr(0xC0000101, retaddr);
  }
  v8 = __readcr3();
  v9 = *(_QWORD *)&KeGetPcr()[108].PcrAlign1[18];
  if ( v8 != v9 && !_bittest(MK_FP(__GS__, 40984LL), 1u) )
    __writecr3(v9);
  return sub_14042C940(a1, a2, a3, a4, a5, a6, a7, a8);
}
