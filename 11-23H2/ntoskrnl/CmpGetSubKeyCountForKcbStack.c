/*
 * XREFs of CmpGetSubKeyCountForKcbStack @ 0x140A23510
 * Callers:
 *     CmDeleteLayeredKey @ 0x1406168EC (CmDeleteLayeredKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 *     CmpInitializeKeyNodeStack @ 0x1407D1C5C (CmpInitializeKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x1407D1CB0 (CmpCleanupKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140A2034C (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140A235B4 (CmpGetSubKeyCountForKeyNodeStack.c)
 */

__int64 __fastcall CmpGetSubKeyCountForKcbStack(__int64 a1, __int64 a2, __int64 a3)
{
  int started; // ebx
  _QWORD v7[10]; // [rsp+20h] [rbp-68h] BYREF

  memset(v7, 0, 0x4AuLL);
  CmpInitializeKeyNodeStack(v7);
  started = CmpStartKeyNodeStackFromKcbStack((__int64)v7, a1, 0LL);
  if ( started >= 0 )
  {
    started = CmpGetSubKeyCountForKeyNodeStack(v7, a3);
    if ( started >= 0 )
      started = 0;
  }
  CmpCleanupKeyNodeStack((__int64)v7);
  return (unsigned int)started;
}
