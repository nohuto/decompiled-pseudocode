/*
 * XREFs of sub_14098A060 @ 0x14098A060
 * Callers:
 *     sub_1407EF750 @ 0x1407EF750 (sub_1407EF750.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     PsReleaseProcessWakeCounter @ 0x140668680 (PsReleaseProcessWakeCounter.c)
 *     sub_140753094 @ 0x140753094 (sub_140753094.c)
 */

__int64 __fastcall sub_14098A060(__int64 a1, int a2)
{
  void *v3; // rbp
  __int64 v4; // rsi
  char v5; // r14
  void *v6; // rax
  unsigned int v7; // ebx

  if ( a2 == 3 && *(_BYTE *)(a1 + 152) )
  {
    v3 = 0LL;
    v4 = 0LL;
    v5 = 0;
    sub_140753094(1);
    v6 = *(void **)(a1 + 136);
    if ( v6 )
    {
      v4 = *(_QWORD *)(a1 + 144);
      v5 = 1;
      *(_QWORD *)(a1 + 144) = 0LL;
      v3 = v6;
      *(_QWORD *)(a1 + 136) = 0LL;
      v7 = 0;
    }
    else
    {
      v7 = -1073741811;
    }
    sub_1402935D0((ULONG_PTR)&qword_140C24280);
    if ( v5 )
    {
      if ( v4 )
        PsReleaseProcessWakeCounter(v4);
      ObfDereferenceObjectWithTag(v3, 0x72506F50u);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v7;
}
