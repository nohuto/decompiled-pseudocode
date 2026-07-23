/*
 * XREFs of sub_140503590 @ 0x140503590
 * Callers:
 *     sub_140505534 @ 0x140505534 (sub_140505534.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1402054C0 (RtlFindClearBitsAndSet.c)
 *     sub_140457684 @ 0x140457684 (sub_140457684.c)
 */

__int64 __fastcall sub_140503590(__int64 a1, __int64 a2, ULONG a3)
{
  int v3; // edi
  ULONG v5; // r8d
  ULONG ClearBitsAndSet; // eax
  ULONG v8; // ebx
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  ULONG i; // edx

  v3 = -1;
  v5 = 0;
LABEL_2:
  ClearBitsAndSet = RtlFindClearBitsAndSet(*(PRTL_BITMAP *)(a2 + 16), a3, v5);
  v8 = ClearBitsAndSet;
  if ( ClearBitsAndSet == -1 || ClearBitsAndSet == v3 )
    return 0LL;
  if ( v3 == -1 )
    v3 = ClearBitsAndSet;
  result = sub_140457684(a2, ClearBitsAndSet, a3);
  v10 = 0LL;
  v11 = result;
  for ( i = 0; i < a3; ++i )
  {
    if ( (*(_QWORD *)(v11 + 48) & 0xFFFFFFFFFFFFF000uLL) == 0 )
    {
      v5 = v8 + i + 1;
      goto LABEL_2;
    }
    v10 = v11;
    v11 = *(_QWORD *)(v11 + 8);
  }
  *(_QWORD *)(v10 + 8) = 0LL;
  return result;
}
