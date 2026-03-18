/*
 * XREFs of CmpKeyEnumStackStartFromKcbStack @ 0x140A242EC
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x140A16414 (CmpEnumerateLayeredKey.c)
 *     CmpPartialPromoteSubkeys @ 0x140A263A0 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 *     CmpInitializeKeyNodeStack @ 0x1407D1C5C (CmpInitializeKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x1407D1CB0 (CmpCleanupKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140A2034C (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x140A2439C (CmpKeyEnumStackStartFromKeyNodeStack.c)
 */

__int64 __fastcall CmpKeyEnumStackStartFromKcbStack(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int started; // ebx
  _QWORD v10[10]; // [rsp+20h] [rbp-88h] BYREF

  memset(v10, 0, 0x4AuLL);
  CmpInitializeKeyNodeStack(v10);
  started = CmpStartKeyNodeStackFromKcbStack((__int64)v10, a2, 0LL);
  if ( started >= 0 )
  {
    if ( a3 )
      *(_WORD *)(a1 + 2) = *(_WORD *)(a3 + 4);
    started = CmpKeyEnumStackStartFromKeyNodeStack(a1, v10, a4);
    if ( started >= 0 )
      started = 0;
  }
  CmpCleanupKeyNodeStack((__int64)v10);
  return (unsigned int)started;
}
