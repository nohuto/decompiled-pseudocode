/*
 * XREFs of HalHandleMcheck @ 0x1405095D0
 * Callers:
 *     sub_1405696B0 @ 0x1405696B0 (sub_1405696B0.c)
 * Callees:
 *     sub_140506BF4 @ 0x140506BF4 (sub_140506BF4.c)
 */

void __fastcall HalHandleMcheck(__int64 a1, __int64 a2, int *a3)
{
  int v3; // eax
  __int64 v4; // rbx

  if ( byte_140C0C685 )
  {
    if ( a3 )
    {
      v3 = *a3;
      *(_OWORD *)a3 = 0LL;
      *a3 = v3;
    }
    v4 = *(_QWORD *)&KeGetPcr()->HalReserved[6];
    *(_QWORD *)(v4 + 32) = a3;
    sub_140506BF4(a1);
    *(_QWORD *)(v4 + 32) = 0LL;
  }
}
