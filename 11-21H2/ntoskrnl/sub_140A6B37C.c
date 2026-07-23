/*
 * XREFs of sub_140A6B37C @ 0x140A6B37C
 * Callers:
 *     sub_140A4C5B4 @ 0x140A4C5B4 (sub_140A4C5B4.c)
 *     sub_140A4DC74 @ 0x140A4DC74 (sub_140A4DC74.c)
 * Callees:
 *     RtlNumberOfClearBits @ 0x140209930 (RtlNumberOfClearBits.c)
 *     RtlFindNextForwardRunClear @ 0x1402E1F90 (RtlFindNextForwardRunClear.c)
 */

__int64 __fastcall sub_140A6B37C(__int64 a1)
{
  _QWORD *v1; // r8
  _QWORD *v2; // rdx
  __int64 v3; // rdi
  __int64 v5; // rcx
  ULONG v6; // edx
  ULONG NextForwardRunClear; // eax
  ULONG StartingRunIndex; // [rsp+30h] [rbp+8h] BYREF

  StartingRunIndex = 0;
  v1 = (_QWORD *)(a1 + 64);
  v2 = *(_QWORD **)(a1 + 104);
  v3 = 0LL;
  if ( v2 != (_QWORD *)(a1 + 64) )
  {
    do
    {
      v5 = (v2[4] - v2[3]) << 12;
      v2 = (_QWORD *)*v2;
      v3 += v5;
      *(_QWORD *)(a1 + 104) = v2;
    }
    while ( v2 != v1 );
  }
  v6 = *(_DWORD *)(a1 + 112);
  do
  {
    NextForwardRunClear = RtlFindNextForwardRunClear(*(PRTL_BITMAP *)(a1 + 96), v6, &StartingRunIndex);
    v6 = NextForwardRunClear + StartingRunIndex;
    v3 += (unsigned __int64)NextForwardRunClear << 12;
  }
  while ( NextForwardRunClear );
  if ( *(_QWORD *)(a1 + 96) == a1 + 32 )
    v3 += (unsigned __int64)RtlNumberOfClearBits((PRTL_BITMAP)(a1 + 48)) << 12;
  return v3;
}
