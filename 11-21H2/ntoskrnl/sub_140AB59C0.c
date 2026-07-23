/*
 * XREFs of sub_140AB59C0 @ 0x140AB59C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall sub_140AB59C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 retaddr; // [rsp+0h] [rbp+0h]

  __readmsr(0xC0000101);
  __writemsr(0xC0000101, retaddr);
  v8 = __readcr3();
  v9 = *(_QWORD *)&KeGetPcr()[108].PcrAlign1[18];
  if ( v8 != v9 && !_bittest(MK_FP(__GS__, 40984LL), 1u) )
    __writecr3(v9);
  sub_140430F00(a1, a2, a3, a4, a5);
}
