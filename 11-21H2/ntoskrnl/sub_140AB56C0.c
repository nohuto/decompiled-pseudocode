/*
 * XREFs of sub_140AB56C0 @ 0x140AB56C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall __noreturn sub_140AB56C0(__int64 a1)
{
  unsigned __int64 v1; // rsi
  char *v4; // rsi
  _QWORD v5[2]; // [rsp-30h] [rbp-30h] BYREF
  __int64 v6; // [rsp-20h] [rbp-20h]
  __int64 v7; // [rsp-18h] [rbp-18h]
  __int64 v8; // [rsp-10h] [rbp-10h]
  __int64 v9; // [rsp-8h] [rbp-8h]

  if ( (v6 & 1) != 0 )
  {
    __asm { swapgs }
    _mm_lfence();
    if ( !_bittest(MK_FP(__GS__, 40984LL), 1u) )
      __writecr3((unsigned __int64)v5);
    __writegsqword(0x10u, v1);
    v4 = (char *)KeGetPcr()->IdtBase + 16896;
    v9 = *((_QWORD *)v4 - 1);
    v8 = *((_QWORD *)v4 - 2);
    v7 = *((_QWORD *)v4 - 3);
    v6 = *((_QWORD *)v4 - 4);
    v5[1] = *((_QWORD *)v4 - 5);
    v5[0] = *((_QWORD *)v4 - 6);
    __writegsqword(0x10u, 0LL);
    sub_14042F580(a1);
  }
  _mm_lfence();
  sub_14042F580(a1);
}
