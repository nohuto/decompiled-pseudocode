/*
 * XREFs of PoFxCompleteIdleState @ 0x14045DD10
 * Callers:
 *     sub_1406192D0 @ 0x1406192D0 (sub_1406192D0.c)
 * Callees:
 *     sub_140354CBC @ 0x140354CBC (sub_140354CBC.c)
 *     sub_140355058 @ 0x140355058 (sub_140355058.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045DEFE @ 0x14045DEFE (sub_14045DEFE.c)
 *     sub_14045E1D6 @ 0x14045E1D6 (sub_14045E1D6.c)
 */

__int64 __fastcall PoFxCompleteIdleState(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // r8
  int v8[18]; // [rsp+20h] [rbp-48h] BYREF

  v2 = a2;
  memset(v8, 0, 0x40uLL);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 832) + 8 * v2);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 140), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    sub_140355058(*(_QWORD *)(a1 + 48), v2, 14, 1LL);
    sub_14045E1D6(*(_QWORD *)(a1 + 48), (unsigned int)v2, *(unsigned int *)(v4 + 152));
    result = sub_14045DEFE(a1, (unsigned int)v2, v6, v8);
    if ( (_BYTE)result )
      return sub_140354CBC(0LL, v8, v7);
  }
  return result;
}
