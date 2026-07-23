/*
 * XREFs of sub_140AA1C3C @ 0x140AA1C3C
 * Callers:
 *     sub_140AA1E50 @ 0x140AA1E50 (sub_140AA1E50.c)
 *     sub_140AA1EB0 @ 0x140AA1EB0 (sub_140AA1EB0.c)
 * Callees:
 *     sub_1402423D0 @ 0x1402423D0 (sub_1402423D0.c)
 *     sub_1405FDF9C @ 0x1405FDF9C (sub_1405FDF9C.c)
 *     sub_140A92C94 @ 0x140A92C94 (sub_140A92C94.c)
 *     sub_140AA1D34 @ 0x140AA1D34 (sub_140AA1D34.c)
 */

__int64 __fastcall sub_140AA1C3C(__int64 a1, const void *a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v6; // si
  __int64 result; // rax
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rax

  CurrentIrql = KeGetCurrentIrql();
  v6 = *(_BYTE *)(a1 + 8);
  *(_BYTE *)(a1 + 9) = CurrentIrql;
  if ( v6 != CurrentIrql
    || (result = *(unsigned int *)(a1 + 4), (result & 2) != 0)
    && (sub_1402423D0(*(_DWORD **)(a1 + 64), qword_140D57660, a3),
        v6 = *(_BYTE *)(a1 + 8),
        LOBYTE(v8) = v6 == 0,
        result = sub_140AA1D34(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 64), v8),
        !(_BYTE)result) )
  {
    v9 = *(unsigned __int8 *)(a1 + 9);
    if ( v6 == (_BYTE)v9 )
    {
      sub_1405FDF9C(
        "Interrupt Service Routine %p has changed extended thread context.\n"
        "Context saved before executing ISR: 0x%p. Context saved after executing ISR: 0x%p.\n",
        a2,
        *(const void **)(a1 + 32),
        *(const void **)(a1 + 64));
      v10 = *(_QWORD *)(a1 + 32);
      v11 = 272LL;
      v12 = *(_QWORD *)(a1 + 64);
    }
    else
    {
      sub_1405FDF9C(
        "Interrupt Service Routine %p has changed IRQL.\nIRQL before executing ISR: %d. IRQL after executing ISR: %d.\n",
        a2,
        v6,
        v9);
      v10 = *(unsigned __int8 *)(a1 + 8);
      v11 = 273LL;
      v12 = *(unsigned __int8 *)(a1 + 9);
    }
    result = sub_140A92C94(196LL, v11, (__int64)a2, v10, v12);
    __int2c();
    if ( (_DWORD)result )
      result = (unsigned int)_InterlockedExchange(&dword_140D57684, 0);
  }
  *(_DWORD *)(a1 + 4) &= ~2u;
  _InterlockedExchange((volatile __int32 *)a1, 0);
  return result;
}
