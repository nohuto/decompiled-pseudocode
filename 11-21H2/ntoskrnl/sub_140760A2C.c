/*
 * XREFs of sub_140760A2C @ 0x140760A2C
 * Callers:
 *     sub_1407608BC @ 0x1407608BC (sub_1407608BC.c)
 * Callees:
 *     sub_1402D94D8 @ 0x1402D94D8 (sub_1402D94D8.c)
 *     sub_1402D96AC @ 0x1402D96AC (sub_1402D96AC.c)
 *     RtlFindNextForwardRunClear @ 0x1402E1F90 (RtlFindNextForwardRunClear.c)
 *     RtlFindSetBits @ 0x1402E4EE0 (RtlFindSetBits.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 */

__int64 __fastcall sub_140760A2C(__int64 a1, ULONG *a2, __int64 *a3, _QWORD *a4)
{
  __int64 v4; // r13
  __int64 v5; // rsi
  _RTL_BITMAP *v9; // rdi
  ULONG v10; // ebp
  ULONG SetBits; // eax
  ULONG v12; // ebx
  ULONG NextForwardRunClear; // eax
  ULONG SizeOfBitMap; // r8d
  __int64 v15; // rax
  int v16; // r8d
  ULONG StartingRunIndex; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
  v5 = a1 + 160;
  StartingRunIndex = 0;
  sub_1402D96AC(a1 + 160, 2uLL);
  v9 = *(_RTL_BITMAP **)(v5 + 112);
  v10 = *a2;
  if ( *a2 == v9->SizeOfBitMap
    || (SetBits = RtlFindSetBits(*(PRTL_BITMAP *)(v5 + 112), 1u, v10), v12 = SetBits, SetBits < v10)
    || SetBits == -1 )
  {
    sub_1402D94D8(v5, 2);
    return 3221226021LL;
  }
  else
  {
    NextForwardRunClear = RtlFindNextForwardRunClear(v9, SetBits, &StartingRunIndex);
    SizeOfBitMap = StartingRunIndex;
    if ( !NextForwardRunClear )
      SizeOfBitMap = v9->SizeOfBitMap;
    *a2 = SizeOfBitMap;
    v15 = sub_140313C70(v4 + (v12 << 12));
    *a3 = v15;
    *a4 = v15 + 8LL * (unsigned int)(v16 - 1);
    sub_1402D94D8(v5, 2);
    return 0LL;
  }
}
