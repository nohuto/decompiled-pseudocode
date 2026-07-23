/*
 * XREFs of sub_1407F89C0 @ 0x1407F89C0
 * Callers:
 *     sub_14072ACC0 @ 0x14072ACC0 (sub_14072ACC0.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1407BA750 @ 0x1407BA750 (sub_1407BA750.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1407F89C0(__int64 a1, char a2, _DWORD *a3)
{
  unsigned int v4; // eax
  unsigned __int64 v5; // rdx
  int v6; // eax
  __int64 result; // rax
  __int128 v8; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter1[3]; // [rsp+50h] [rbp-18h]

  v8 = 0LL;
  *(_OWORD *)BugCheckParameter1 = 0LL;
  if ( *(_DWORD *)(a1 + 24) != 32 )
    return 3221225990LL;
  v4 = 32;
  if ( a2 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( (v5 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v5 + 32 > 0x7FFFFFFF0000LL || (v4 = 32, v5 + 32 < v5) )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
      v4 = *(_DWORD *)(a1 + 24);
    }
  }
  memmove(&v8, *(const void **)(a1 + 16), v4);
  if ( (_DWORD)v8 != 1 )
    return 3221225485LL;
  v6 = 2;
  if ( (BYTE4(v8) & 1) != 0 && (BYTE4(v8) & 2) != 0 )
    return 3221225485LL;
  if ( (DWORD1(v8) & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  if ( (BYTE4(v8) & 1) == 0 )
    v6 = (BYTE4(v8) & 2) != 0;
  result = sub_1407BA750(BugCheckParameter1[1], 0LL, 4, *((unsigned __int64 *)&v8 + 1), BugCheckParameter1[0], 0LL, v6);
  if ( (int)result >= 0 )
    *a3 = 32;
  return result;
}
