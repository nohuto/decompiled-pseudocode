/*
 * XREFs of sub_140AB5BC0 @ 0x140AB5BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall sub_140AB5BC0(int a1, int a2, int a3, int a4, __int16 a5)
{
  unsigned __int64 v5; // rsi
  char *v8; // rsi
  _QWORD v10[2]; // [rsp-30h] [rbp-30h] BYREF
  __int64 v11; // [rsp-20h] [rbp-20h]
  __int64 v12; // [rsp-18h] [rbp-18h]
  __int64 v13; // [rsp-10h] [rbp-10h]
  __int64 v14; // [rsp-8h] [rbp-8h]

  if ( (v11 & 1) != 0 )
  {
    __asm { swapgs }
    _mm_lfence();
    if ( !_bittest(MK_FP(__GS__, 40984LL), 1u) )
      __writecr3((unsigned __int64)v10);
    __writegsqword(0x10u, v5);
    v8 = (char *)KeGetPcr()->IdtBase + 16896;
    v14 = *((_QWORD *)v8 - 1);
    v13 = *((_QWORD *)v8 - 2);
    v12 = *((_QWORD *)v8 - 3);
    v11 = *((_QWORD *)v8 - 4);
    v10[1] = *((_QWORD *)v8 - 5);
    v10[0] = *((_QWORD *)v8 - 6);
    __writegsqword(0x10u, 0LL);
    return sub_140432780(a1, a2, a3, a4, a5);
  }
  else
  {
    _mm_lfence();
    return sub_140432780(a1, a2, a3, a4, a5);
  }
}
