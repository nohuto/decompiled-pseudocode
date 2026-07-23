/*
 * XREFs of sub_140AB58C0 @ 0x140AB58C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall __noreturn sub_140AB58C0()
{
  unsigned __int64 v0; // rsi
  char *v3; // rsi
  __int64 v4; // [rsp-28h] [rbp-28h] BYREF
  __int64 v5; // [rsp-20h] [rbp-20h]
  __int64 v6; // [rsp-18h] [rbp-18h]
  __int64 v7; // [rsp-10h] [rbp-10h]
  __int64 v8; // [rsp-8h] [rbp-8h]

  if ( (v5 & 1) != 0 )
  {
    __asm { swapgs }
    _mm_lfence();
    if ( !_bittest(MK_FP(__GS__, 40984LL), 1u) )
      __writecr3((unsigned __int64)&v4);
    __writegsqword(0x10u, v0);
    v3 = (char *)KeGetPcr()->IdtBase + 16896;
    v8 = *((_QWORD *)v3 - 1);
    v7 = *((_QWORD *)v3 - 2);
    v6 = *((_QWORD *)v3 - 3);
    v5 = *((_QWORD *)v3 - 4);
    v4 = *((_QWORD *)v3 - 5);
    __writegsqword(0x10u, 0LL);
    sub_140430800();
  }
  _mm_lfence();
  sub_140430800();
}
