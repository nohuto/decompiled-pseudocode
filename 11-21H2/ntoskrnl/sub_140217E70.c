/*
 * XREFs of sub_140217E70 @ 0x140217E70
 * Callers:
 *     sub_1402175B8 @ 0x1402175B8 (sub_1402175B8.c)
 *     sub_140217B04 @ 0x140217B04 (sub_140217B04.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 * Callees:
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 */

__int64 __fastcall sub_140217E70(__int64 a1, __int64 a2, char a3, _QWORD *a4, _DWORD *a5)
{
  unsigned __int8 v6; // cf
  unsigned __int8 v7; // si
  unsigned __int8 CurrentIrql; // r10
  __int64 v11; // rcx
  _DWORD *v12; // rax
  __int64 v14; // r9
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v6 = _bittestandreset((signed __int32 *)(a1 + 116), 2u);
  v15 = 0LL;
  v7 = v6;
  if ( !v6 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v14 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v14 + 20) |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
    *(_BYTE *)(a1 + 390) = CurrentIrql;
  }
  if ( a2 )
  {
    if ( *(int *)(a2 + 4) >= 0 )
    {
      *a4 = *(_QWORD *)a2;
      *a5 = 1;
    }
    else
    {
      if ( a3 )
        v11 = KeQueryInterruptTimePrecise(&v15) - MEMORY[0xFFFFF780000003B0];
      else
        v11 = sub_1402F5718(0LL);
      v12 = a5;
      *a4 = v11 - *(_QWORD *)(a1 + 248) - *(_QWORD *)a2;
      *v12 = 2;
    }
  }
  else
  {
    *a5 = 0;
  }
  return v7;
}
