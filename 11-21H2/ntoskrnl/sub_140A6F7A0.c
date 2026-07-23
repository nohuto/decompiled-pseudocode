/*
 * XREFs of sub_140A6F7A0 @ 0x140A6F7A0
 * Callers:
 *     sub_140299E94 @ 0x140299E94 (sub_140299E94.c)
 *     KdRefreshDebuggerNotPresent @ 0x1403DC750 (KdRefreshDebuggerNotPresent.c)
 *     sub_140573408 @ 0x140573408 (sub_140573408.c)
 *     sub_140A6F444 @ 0x140A6F444 (sub_140A6F444.c)
 *     sub_140A6F61C @ 0x140A6F61C (sub_140A6F61C.c)
 *     sub_140A702DC @ 0x140A702DC (sub_140A702DC.c)
 *     sub_140A7294C @ 0x140A7294C (sub_140A7294C.c)
 *     sub_140A72BB0 @ 0x140A72BB0 (sub_140A72BB0.c)
 *     sub_140A74270 @ 0x140A74270 (sub_140A74270.c)
 *     sub_140A7434C @ 0x140A7434C (sub_140A7434C.c)
 *     sub_140A744CC @ 0x140A744CC (sub_140A744CC.c)
 *     sub_140A74B64 @ 0x140A74B64 (sub_140A74B64.c)
 * Callees:
 *     sub_14029B8E8 @ 0x14029B8E8 (sub_14029B8E8.c)
 *     sub_1402DA0F0 @ 0x1402DA0F0 (sub_1402DA0F0.c)
 *     sub_1402DA4B0 @ 0x1402DA4B0 (sub_1402DA4B0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A81780 @ 0x140A81780 (sub_140A81780.c)
 */

char __fastcall sub_140A6F7A0(__int64 a1)
{
  int v2; // ebx
  unsigned __int8 CurrentIrql; // bp
  char v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned int *v10; // rdx
  unsigned __int64 *v11; // rcx
  unsigned __int64 v12; // rax
  char result; // al

  v2 = 0;
  if ( (unsigned int)sub_1402DA4B0() )
    sub_140A81780(3LL);
  if ( a1 )
  {
    qword_140C343C8 = __rdtsc();
    qword_140C343C0 = qword_140C343C8 - qword_140C40508;
  }
  else
  {
    qword_140C343C8 = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  v4 = sub_1402DA0F0();
  sub_14042A5E0(v6, v5);
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = *((unsigned int *)CurrentPrcb + 9);
  if ( (dword_140C31E20 & 3) == 0 && !byte_140C22260 )
  {
    v9 = *((_QWORD *)CurrentPrcb + 216);
    qword_140C4ECA0 = ~qword_140C31E38 & (qword_140D06A68 | 0x100);
    sub_14029B8E8(v9, ~qword_140C31E38 & (qword_140D06A68 | 0x100));
  }
  if ( (dword_140C31E20 & 3) == 0 || (unsigned int)dword_140C31E20 >> 4 != (_DWORD)v8 )
    *((_BYTE *)CurrentPrcb + 33112) = CurrentIrql;
  v10 = (unsigned int *)qword_140C40520[v8];
  if ( v10 )
  {
    v11 = (unsigned __int64 *)&v10[4 * *v10 + 4];
    v12 = __rdtsc();
    *v11 = ((unsigned __int64)HIDWORD(v12) << 32) | (unsigned int)v12;
    v11[1] = (4 * ((unsigned __int8)KdDebuggerNotPresent & 1)) | 1u;
  }
  ++dword_140C31E30;
  result = v4;
  LOBYTE(v2) = byte_140C4E930 == 0;
  dword_140C31E2C += v2;
  KdEnteredDebugger = 1;
  return result;
}
