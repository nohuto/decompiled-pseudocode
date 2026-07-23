/*
 * XREFs of sub_140AB5540 @ 0x140AB5540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall __noreturn sub_140AB5540(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v14; // [rsp-30h] [rbp-38h]
  unsigned __int64 retaddr; // [rsp+8h] [rbp+0h]

  __readmsr(0xC0000101);
  __writemsr(0xC0000101, retaddr);
  v9 = __readcr3();
  v10 = *(_QWORD *)&KeGetPcr()[108].PcrAlign1[18];
  if ( v9 != v10 && !_bittest(MK_FP(__GS__, 40984LL), 1u) )
    __writecr3(v10);
  sub_14042EBC0(v14, a2, a3, a4);
}
