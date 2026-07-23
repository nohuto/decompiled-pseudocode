/*
 * XREFs of sub_1406BB760 @ 0x1406BB760
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1406BB808 @ 0x1406BB808 (sub_1406BB808.c)
 *     sub_1407A2B78 @ 0x1407A2B78 (sub_1407A2B78.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406BB760(_DWORD *P)
{
  unsigned int v2; // edx
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rax

  v2 = P[78] & 0x7FFFFFFF;
  if ( v2 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    if ( (v2 & 0xFC000000) != 0 )
    {
      v4 = 0LL;
      if ( qword_140D05118 )
        v4 = *(_QWORD *)(qword_140D05118 + 8 * ((unsigned __int64)v2 >> 26));
    }
    else
    {
      v4 = qword_140D06CC0;
    }
    v5 = v2 & 0x3FFFFFF;
    v6 = sub_1406BB808(v4, v2 & 0x3FFFFFF);
    sub_1407A2B78(v4, v5, v6);
    sub_1402F9540((__int64)CurrentThread);
  }
  ExFreePoolWithTag(P, 0);
}
