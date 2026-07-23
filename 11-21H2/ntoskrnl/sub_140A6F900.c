/*
 * XREFs of sub_140A6F900 @ 0x140A6F900
 * Callers:
 *     sub_140299E94 @ 0x140299E94 (sub_140299E94.c)
 *     KdRefreshDebuggerNotPresent @ 0x1403DC750 (KdRefreshDebuggerNotPresent.c)
 *     sub_140573408 @ 0x140573408 (sub_140573408.c)
 *     sub_140A6F444 @ 0x140A6F444 (sub_140A6F444.c)
 *     sub_140A6F61C @ 0x140A6F61C (sub_140A6F61C.c)
 *     sub_140A6FB80 @ 0x140A6FB80 (sub_140A6FB80.c)
 *     sub_140A702DC @ 0x140A702DC (sub_140A702DC.c)
 *     sub_140A7294C @ 0x140A7294C (sub_140A7294C.c)
 *     sub_140A72BB0 @ 0x140A72BB0 (sub_140A72BB0.c)
 *     sub_140A74270 @ 0x140A74270 (sub_140A74270.c)
 *     sub_140A7434C @ 0x140A7434C (sub_140A7434C.c)
 *     sub_140A744CC @ 0x140A744CC (sub_140A744CC.c)
 *     sub_140A74B64 @ 0x140A74B64 (sub_140A74B64.c)
 * Callees:
 *     sub_14029B210 @ 0x14029B210 (sub_14029B210.c)
 *     sub_1402DA4B0 @ 0x1402DA4B0 (sub_1402DA4B0.c)
 *     sub_1402DA4C0 @ 0x1402DA4C0 (sub_1402DA4C0.c)
 *     sub_1402DA7E4 @ 0x1402DA7E4 (sub_1402DA7E4.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A81780 @ 0x140A81780 (sub_140A81780.c)
 */

__int64 __fastcall sub_140A6F900(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  char v3; // bl
  _DWORD *v4; // r9
  __int64 v5; // r10
  unsigned __int64 v6; // rax
  __int64 result; // rax

  KdEnteredDebugger = 0;
  LODWORD(v2) = HIDWORD(KeGetPcr()[1].LockArray);
  v3 = a1;
  v4 = (_DWORD *)qword_140C40520[v2];
  if ( v4 )
  {
    v5 = (unsigned int)*v4;
    v6 = __rdtsc();
    a2 = (unsigned __int64)HIDWORD(v6) << 32;
    a1 = v4[4 * v5 + 6] & 4;
    *(_QWORD *)&v4[4 * v5 + 6] = a1 | (2 * ((unsigned __int8)KdDebuggerNotPresent & 1)) | 1u | ((a2 | (unsigned int)v6)
                                                                                              - *(_QWORD *)&v4[4 * v5 + 4]) & 0xFFFFFFFFFFFFFFF1uLL;
    if ( (_DWORD)v5 == 254 )
      *v4 = 0;
    else
      *v4 = v5 + 1;
  }
  sub_14042A5E0(a1, a2);
  if ( (dword_140C31E20 & 3) == 0 && !byte_140C22260 )
  {
    sub_14029B210(*((_QWORD *)KeGetCurrentPrcb() + 216), qword_140C4ECA0);
    qword_140C4ECA0 = 0LL;
  }
  sub_1402DA4C0(v3);
  if ( qword_140C343C8 )
    qword_140C40508 = __rdtsc();
  else
    qword_140C40508 = 0LL;
  if ( !byte_140C22280 && (dword_140C31E20 & 3) == 0 )
  {
    if ( !_InterlockedExchange(&dword_140C09800, 2) )
      KeInsertQueueDpc(&stru_140CF5F90, 0LL, 0LL);
    sub_1402DA7E4();
  }
  result = sub_1402DA4B0();
  if ( (_DWORD)result )
    return sub_140A81780(4LL);
  return result;
}
